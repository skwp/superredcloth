/*
 * superredcloth_scan.rl
 *
 * $Author: why $
 * $Date$
 *
 * Copyright (C) 2007 why the lucky stiff
 */
#define superredcloth_scan_c

#include <ruby.h>
#include "superredcloth.h"

VALUE super_ParseError, super_RedCloth;

%%{

  machine superredcloth_scan;
  include superredcloth_common "superredcloth_common.rl";

  action notextile { rb_str_append(html, rb_funcall(super_RedCloth, rb_intern("ignore"), 1, regs)); }

  # blocks
  notextile_start = "<notextile>" ;
  notextile_end = "</notextile>" ;
  btype = ( "p" | "h1" | "h2" | "h3" | "h4" | "h5" | "h6" | "bq" ) >A %{ STORE(type) } ;
  block_start = ( btype A C :> dotspace ) ;
  block_end = ( CRLF{2} | EOF );
  ftype = ( "fn" >A %{ STORE(type) } digit+ >A %{ STORE(id) } ) ;
  footnote_start = ( ftype A C :> dotspace ) ;
  ul = "*" %{nest++; list_type = "ul";};
  ol = "#" %{nest++; list_type = "ol";};
  list_start  = ( ( ul | ol )+ N A C :> " " ) >{nest = 0;} ;

  # tables
  para = ( default+ ) -- CRLF ;
  btext = para ( CRLF{2} )? ;
  tddef = ( S A C :> dotspace ) ;
  td = ( tddef? btext >A %T :> "|" >{PASS(table, text, td);} ) >X ;
  trdef = ( A C :> dotspace ) ;
  tr = ( trdef? "|" %{INLINE(table, tr_open);} td+ ) >X %{INLINE(table, tr_close);} ;
  trows = ( tr (CRLF >X tr)* ) ;
  tdef = ( "table" >X A C :> dotspace CRLF ) ;
  table = ( tdef? trows >{INLINE(table, table_open);} ) >{ reg = NULL; } ;

  notextile := |*
    notextile_end   { DONE(block); fgoto main; };
    default => cat;
  *|;

  block := |*
    block_end       { ADD_BLOCK(); fgoto main; };
    default => cat;
  *|;

  footnote := |*
    block_end       { ADD_BLOCK(); fgoto main; };
    default => cat;
  *|;

  list := |*
    CRLF list_start { ADD_BLOCK(); LIST_ITEM(); };
    block_end       { ADD_BLOCK(); nest = 0; LIST_ITEM(); fgoto main; };
    default => cat;
  *|;

  main := |*
    notextile_start { ASET(type, notextile); fgoto notextile; };
    block_start     { fgoto block; };
    footnote_start  { fgoto footnote; };
    list_start      { list_layout = rb_ary_new(); LIST_ITEM(); fgoto list; };
    table           { INLINE(table, table_close); DONE(table); };
    default         { ASET(type, p); CAT(block); fgoto block; };
    EOF;
  *|;

}%%

%% write data nofinal;

VALUE
superredcloth_transform(p, pe)
  char *p, *pe;
{
  int cs, act, nest;
  char *tokstart, *tokend, *reg;
  VALUE html = rb_str_new2("");
  VALUE table = rb_str_new2("");
  VALUE block = rb_str_new2("");
  VALUE regs = rb_hash_new();
  VALUE list_layout = Qnil;
  char *list_type = NULL;

  %% write init;

  %% write exec;

  if (RSTRING(block)->len > 0)
  {
    ADD_BLOCK();
  }

  return html;
}

VALUE
superredcloth_transform2(str)
  VALUE str;
{
  rb_str_cat2(str, "\n");
  StringValue(str);
  return superredcloth_transform(RSTRING(str)->ptr, RSTRING(str)->ptr + RSTRING(str)->len + 1);
}

static VALUE
superredcloth_to_html(self)
  VALUE self;
{
  char *pe, *p;
  int len = 0;

  return superredcloth_transform2(self);
}

void Init_superredcloth_scan()
{
  super_RedCloth = rb_define_class("SuperRedCloth", rb_cString);
  rb_define_method(super_RedCloth, "to_html", superredcloth_to_html, 0);
  super_ParseError = rb_define_class_under(super_RedCloth, "ParseError", rb_eException);
}
