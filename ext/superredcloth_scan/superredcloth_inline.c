#line 1 "superredcloth_inline.rl"
/*
 * superredcloth_inline.rl
 *
 * $Author: why $
 * $Date$
 *
 * Copyright (C) 2007 why the lucky stiff
 */
#include <ruby.h>
#include "superredcloth.h"

#line 136 "superredcloth_inline.rl"



#line 18 "superredcloth_inline.c"
static const int superredcloth_inline_start = 717;

static const int superredcloth_inline_error = -1;

#line 139 "superredcloth_inline.rl"

VALUE
red_pass(VALUE regs, VALUE ref, ID meth)
{
  VALUE txt = rb_hash_aref(regs, ref);
  if (!NIL_P(txt)) rb_hash_aset(regs, ref, superredcloth_inline2(txt));
  return rb_funcall(super_RedCloth, meth, 1, regs);
}

VALUE
red_pass2(VALUE regs, VALUE ref, VALUE btype)
{
  btype = rb_hash_aref(regs, btype);
  StringValue(btype);
  return red_pass(regs, ref, rb_intern(RSTRING(btype)->ptr));
}

VALUE
red_block(VALUE regs, VALUE block)
{
  VALUE btype = rb_hash_aref(regs, ID2SYM(rb_intern("type")));
  block = rb_funcall(block, rb_intern("strip"), 0);
  if (RSTRING(block)->len > 0)
  {
    rb_hash_aset(regs, ID2SYM(rb_intern("text")), superredcloth_inline2(block));
    block = rb_funcall(super_RedCloth, rb_intern(RSTRING(btype)->ptr), 1, regs);
  }
  return block;
}

void
red_inc(VALUE regs, VALUE ref)
{
  int aint = 0;
  VALUE aval = rb_hash_aref(regs, ref);
  if (aval != Qnil) aint = NUM2INT(aval);
  rb_hash_aset(regs, ref, INT2NUM(aint + 1));
}

VALUE
superredcloth_inline(p, pe)
  char *p, *pe;
{
  int cs, act;
  char *tokstart, *tokend, *reg;
  VALUE block = rb_str_new2("");
  VALUE regs = Qnil;

  
#line 73 "superredcloth_inline.c"
	{
	cs = superredcloth_inline_start;
	tokstart = 0;
	tokend = 0;
	act = 0;
	}
#line 188 "superredcloth_inline.rl"

  
#line 83 "superredcloth_inline.c"
	{
	if ( p == pe )
		goto _out;
	switch ( cs )
	{
tr37:
#line 92 "superredcloth_inline.rl"
	{tokend = p;{ if ( *reg == ':') { reg += 1; STORE_URL(href); } INLINE(block, image); }{p = ((tokend))-1;}}
	goto st717;
tr48:
#line 94 "superredcloth_inline.rl"
	{tokend = p;{ STORE_URL(href); PASS(block, name, link); }{p = ((tokend))-1;}}
	goto st717;
tr53:
#line 97 "superredcloth_inline.rl"
	{tokend = p;{ PASS(block, text, strong); }{p = ((tokend))-1;}}
	goto st717;
tr59:
#line 99 "superredcloth_inline.rl"
	{tokend = p;{ PASS(block, text, em); }{p = ((tokend))-1;}}
	goto st717;
tr65:
#line 110 "superredcloth_inline.rl"
	{tokend = p;{ PASS(block, text, quote2); }{p = ((tokend))-1;}}
	goto st717;
tr68:
#line 115 "superredcloth_inline.rl"
	{tokend = p;{ INLINE(block, arrow); }{p = ((tokend))-1;}}
	goto st717;
tr75:
#line 114 "superredcloth_inline.rl"
	{tokend = p;{ INLINE(block, endash); }{p = ((tokend))-1;}}
	goto st717;
tr76:
#line 114 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, endash); }{p = ((tokend))-1;}}
	goto st717;
tr83:
#line 9 "superredcloth_inline.rl"
	{tokend = p;{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr100:
#line 98 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, b); }{p = ((tokend))-1;}}
	goto st717;
tr101:
#line 100 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, i); }{p = ((tokend))-1;}}
	goto st717;
tr103:
#line 113 "superredcloth_inline.rl"
	{tokend = p;{ INLINE(block, emdash); }{p = ((tokend))-1;}}
	goto st717;
tr104:
#line 113 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, emdash); }{p = ((tokend))-1;}}
	goto st717;
tr119:
#line 9 "superredcloth_inline.rl"
	{tokend = p;{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr221:
#line 9 "superredcloth_inline.rl"
	{tokend = p;{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr244:
#line 115 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, arrow); }{p = ((tokend))-1;}}
	goto st717;
tr256:
#line 1 "superredcloth_inline.rl"
	{	switch( act ) {
	case 1:
	{ if ( *reg == ':') { reg += 1; STORE_URL(href); } INLINE(block, image); }
	break;
	case 2:
	{ STORE_URL(href); PASS(block, name, link); }
	break;
	case 4:
	{ PASS(block, text, strong); }
	break;
	case 6:
	{ PASS(block, text, em); }
	break;
	case 16:
	{ PASS(block, text, quote1); }
	break;
	case 17:
	{ PASS(block, text, quote2); }
	break;
	case 20:
	{ INLINE(block, endash); }
	break;
	case 21:
	{ INLINE(block, arrow); }
	break;
	case 28:
	{ CAT(block); }
	break;
	case 30:
	{ CAT(block); }
	break;
	case 32:
	{ rb_str_cat_escaped(block, tokstart, tokend); }
	break;
	case 33:
	{ rb_str_cat_escaped(block, tokstart, tokend); }
	break;
	case 34:
	{ rb_str_cat_escaped(block, tokstart, tokend); }
	break;
	default: break;
	}
	{p = ((tokend))-1;}}
	goto st717;
tr312:
#line 117 "superredcloth_inline.rl"
	{tokend = p;{ INLINE(block, dim); }{p = ((tokend))-1;}}
	goto st717;
tr314:
#line 132 "superredcloth_inline.rl"
	{tokend = p+1;{p = ((tokend))-1;}}
	goto st717;
tr315:
#line 9 "superredcloth_inline.rl"
	{tokend = p+1;{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr319:
#line 9 "superredcloth_inline.rl"
	{tokend = p+1;{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr346:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 104 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, sub); }{p = ((tokend))-1;}}
	goto st717;
tr364:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 99 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, em); }{p = ((tokend))-1;}}
	goto st717;
tr371:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 103 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, sup); }{p = ((tokend))-1;}}
	goto st717;
tr409:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 96 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, code); }{p = ((tokend))-1;}}
	goto st717;
tr449:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st717;
tr468:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 102 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, ins); }{p = ((tokend))-1;}}
	goto st717;
tr504:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 97 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, strong); }{p = ((tokend))-1;}}
	goto st717;
tr585:
#line 81 "superredcloth_inline.rl"
	{ STORE(title) }
#line 116 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, acronym); }{p = ((tokend))-1;}}
	goto st717;
tr591:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 105 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, span); }{p = ((tokend))-1;}}
	goto st717;
tr748:
#line 92 "superredcloth_inline.rl"
	{{ if ( *reg == ':') { reg += 1; STORE_URL(href); } INLINE(block, image); }{p = ((tokend))-1;}}
	goto st717;
tr759:
#line 9 "superredcloth_inline.rl"
	{{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr765:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 109 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, quote1); }{p = ((tokend))-1;}}
	goto st717;
tr774:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 110 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, quote2); }{p = ((tokend))-1;}}
	goto st717;
tr777:
#line 9 "superredcloth_inline.rl"
	{{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr1106:
#line 114 "superredcloth_inline.rl"
	{{ INLINE(block, endash); }{p = ((tokend))-1;}}
	goto st717;
tr1249:
#line 94 "superredcloth_inline.rl"
	{{ STORE_URL(href); PASS(block, name, link); }{p = ((tokend))-1;}}
	goto st717;
tr1257:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st717;
tr1260:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 121 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, footno); }{p = ((tokend))-1;}}
	goto st717;
tr1262:
#line 108 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, snip); }{p = ((tokend))-1;}}
	goto st717;
tr1263:
#line 106 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, cite); }{p = ((tokend))-1;}}
	goto st717;
tr1264:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st717;
tr1265:
#line 10 "superredcloth_inline.rl"
	{tokend = p+1;{ rb_str_append(block, rb_funcall(super_RedCloth, rb_intern("ignore"), 1, regs)); }{p = ((tokend))-1;}}
	goto st717;
tr1266:
#line 9 "superredcloth_inline.rl"
	{{ rb_str_cat_escaped(block, tokstart, tokend); }{p = ((tokend))-1;}}
	goto st717;
tr1271:
#line 118 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, trademark); }{p = ((tokend))-1;}}
	goto st717;
tr1272:
#line 119 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, registered); }{p = ((tokend))-1;}}
	goto st717;
tr1273:
#line 120 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, copyright); }{p = ((tokend))-1;}}
	goto st717;
tr1274:
#line 8 "superredcloth_inline.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st717;
tr1275:
#line 112 "superredcloth_inline.rl"
	{tokend = p+1;{ INLINE(block, ellipsis); }{p = ((tokend))-1;}}
	goto st717;
tr1277:
#line 101 "superredcloth_inline.rl"
	{tokend = p+1;{ PASS(block, text, del); }{p = ((tokend))-1;}}
	goto st717;
st717:
#line 1 "superredcloth_inline.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out717;
case 717:
#line 1 "superredcloth_inline.rl"
	{tokstart = p;}
#line 361 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr314;
		case 32: goto tr316;
		case 33: goto tr317;
		case 34: goto tr318;
		case 37: goto tr320;
		case 39: goto tr321;
		case 40: goto tr322;
		case 42: goto tr323;
		case 43: goto tr324;
		case 45: goto tr325;
		case 46: goto tr326;
		case 60: goto tr328;
		case 61: goto tr329;
		case 63: goto tr330;
		case 64: goto tr331;
		case 91: goto tr333;
		case 92: goto tr319;
		case 94: goto tr334;
		case 95: goto tr335;
		case 96: goto tr336;
		case 124: goto tr319;
		case 126: goto tr337;
	}
	if ( (*p) < 44 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr319;
		} else if ( (*p) >= 9 )
			goto tr315;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 58 ) {
			if ( 48 <= (*p) && (*p) <= 57 )
				goto tr327;
		} else if ( (*p) > 59 ) {
			if ( 65 <= (*p) && (*p) <= 90 )
				goto tr332;
		} else
			goto tr319;
	} else
		goto tr319;
	goto tr241;
tr226:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 109 "superredcloth_inline.rl"
	{act = 16;}
	goto st718;
tr241:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st718;
st718:
	if ( ++p == pe )
		goto _out718;
case 718:
#line 422 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr256;
		case 40: goto tr256;
		case 45: goto st719;
		case 124: goto tr256;
		case 126: goto tr256;
	}
	if ( (*p) < 42 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr256;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr256;
		} else
			goto tr256;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 63 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr256;
		} else if ( (*p) > 64 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr256;
			} else if ( (*p) >= 91 )
				goto tr256;
		} else
			goto tr256;
	} else
		goto tr256;
	goto tr241;
st719:
	if ( ++p == pe )
		goto _out719;
case 719:
	switch( (*p) ) {
		case 0: goto tr221;
		case 40: goto tr221;
		case 124: goto tr221;
		case 126: goto tr221;
	}
	if ( (*p) < 42 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr221;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr221;
		} else
			goto tr221;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 63 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr221;
		} else if ( (*p) > 64 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr221;
			} else if ( (*p) >= 91 )
				goto tr221;
		} else
			goto tr221;
	} else
		goto tr221;
	goto tr241;
tr316:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 34;}
	goto st720;
st720:
	if ( ++p == pe )
		goto _out720;
case 720:
#line 502 "superredcloth_inline.c"
	switch( (*p) ) {
		case 40: goto st0;
		case 45: goto tr121;
		case 46: goto tr122;
		case 91: goto st39;
	}
	goto tr119;
st0:
	if ( ++p == pe )
		goto _out0;
case 0:
	switch( (*p) ) {
		case 67: goto st1;
		case 82: goto st2;
		case 84: goto st3;
		case 99: goto st1;
		case 114: goto st2;
		case 116: goto st3;
	}
	goto tr1266;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
	if ( (*p) == 41 )
		goto tr1273;
	goto tr256;
st2:
	if ( ++p == pe )
		goto _out2;
case 2:
	if ( (*p) == 41 )
		goto tr1272;
	goto tr256;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
	switch( (*p) ) {
		case 77: goto st4;
		case 109: goto st4;
	}
	goto tr256;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
	if ( (*p) == 41 )
		goto tr1271;
	goto tr256;
tr121:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 114 "superredcloth_inline.rl"
	{act = 20;}
	goto st721;
st721:
	if ( ++p == pe )
		goto _out721;
case 721:
#line 563 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr75;
		case 32: goto tr76;
		case 40: goto tr77;
		case 45: goto st722;
		case 62: goto tr79;
		case 91: goto tr80;
		case 123: goto tr81;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr75;
	goto tr74;
tr74:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st5;
st5:
	if ( ++p == pe )
		goto _out5;
case 5:
#line 584 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 45: goto tr73;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr256;
	goto st5;
st6:
	if ( ++p == pe )
		goto _out6;
case 6:
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 45: goto tr256;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr256;
	goto st5;
st7:
	if ( ++p == pe )
		goto _out7;
case 7:
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st6;
		case 32: goto st6;
		case 45: goto tr256;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr256;
	goto st5;
st8:
	if ( ++p == pe )
		goto _out8;
case 8:
	if ( (*p) == 10 )
		goto st7;
	goto tr256;
tr73:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st9;
st9:
	if ( ++p == pe )
		goto _out9;
case 9:
#line 639 "superredcloth_inline.c"
	if ( (*p) == 32 )
		goto tr1277;
	goto tr256;
tr77:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st10;
st10:
	if ( ++p == pe )
		goto _out10;
case 10:
#line 651 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr886;
		case 9: goto tr887;
		case 10: goto tr888;
		case 13: goto tr889;
		case 32: goto tr887;
		case 35: goto st31;
		case 41: goto st21;
		case 45: goto tr73;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr886;
	goto tr885;
tr885:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st11;
st11:
	if ( ++p == pe )
		goto _out11;
case 11:
#line 673 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st12;
		case 9: goto st29;
		case 10: goto st30;
		case 13: goto st36;
		case 32: goto st29;
		case 35: goto tr663;
		case 41: goto tr664;
		case 45: goto tr73;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st12;
	goto st11;
tr886:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st12;
st12:
	if ( ++p == pe )
		goto _out12;
case 12:
#line 695 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1360;
		case 41: goto tr1361;
	}
	goto st12;
tr1360:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st13;
st13:
	if ( ++p == pe )
		goto _out13;
case 13:
#line 709 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1106;
	goto tr963;
tr963:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st14;
st14:
	if ( ++p == pe )
		goto _out14;
case 14:
#line 721 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr513;
	goto st14;
tr339:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st15;
tr374:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st15;
tr513:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st15;
tr1361:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st15;
st15:
	if ( ++p == pe )
		goto _out15;
case 15:
#line 745 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1106;
		case 32: goto tr1106;
		case 40: goto tr77;
		case 45: goto tr1106;
		case 91: goto tr80;
		case 123: goto tr81;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr1106;
	goto tr74;
tr80:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st16;
st16:
	if ( ++p == pe )
		goto _out16;
case 16:
#line 765 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1059;
		case 9: goto tr1060;
		case 10: goto tr1061;
		case 13: goto tr1062;
		case 32: goto tr1060;
		case 45: goto tr73;
		case 93: goto st5;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1059;
	goto tr1058;
tr1058:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st17;
st17:
	if ( ++p == pe )
		goto _out17;
case 17:
#line 786 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st18;
		case 9: goto st19;
		case 10: goto st20;
		case 13: goto st28;
		case 32: goto st19;
		case 45: goto tr73;
		case 93: goto tr462;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st18;
	goto st17;
tr1059:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st18;
st18:
	if ( ++p == pe )
		goto _out18;
case 18:
#line 807 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr374;
	goto st18;
tr1060:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st19;
st19:
	if ( ++p == pe )
		goto _out19;
case 19:
#line 819 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st18;
		case 9: goto st19;
		case 10: goto st20;
		case 13: goto st28;
		case 32: goto st19;
		case 45: goto st18;
		case 93: goto tr462;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st18;
	goto st17;
tr1061:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st20;
st20:
	if ( ++p == pe )
		goto _out20;
case 20:
#line 840 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st18;
		case 9: goto st19;
		case 32: goto st19;
		case 45: goto st18;
		case 93: goto tr462;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st18;
	goto st17;
tr457:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st21;
tr462:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st21;
tr560:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st21;
tr664:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st21;
st21:
	if ( ++p == pe )
		goto _out21;
case 21:
#line 871 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1106;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 40: goto tr77;
		case 45: goto tr73;
		case 91: goto tr80;
		case 123: goto tr81;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1106;
	goto tr74;
tr81:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st22;
st22:
	if ( ++p == pe )
		goto _out22;
case 22:
#line 894 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1064;
		case 9: goto tr1065;
		case 10: goto tr1066;
		case 13: goto tr1067;
		case 32: goto tr1065;
		case 45: goto tr73;
		case 125: goto st5;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1064;
	goto tr1063;
tr1063:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st23;
st23:
	if ( ++p == pe )
		goto _out23;
case 23:
#line 915 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st24;
		case 9: goto st25;
		case 10: goto st26;
		case 13: goto st27;
		case 32: goto st25;
		case 45: goto tr73;
		case 125: goto tr457;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st24;
	goto st23;
tr1064:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st24;
st24:
	if ( ++p == pe )
		goto _out24;
case 24:
#line 936 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr339;
	goto st24;
tr1065:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st25;
st25:
	if ( ++p == pe )
		goto _out25;
case 25:
#line 948 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st24;
		case 9: goto st25;
		case 10: goto st26;
		case 13: goto st27;
		case 32: goto st25;
		case 45: goto st24;
		case 125: goto tr457;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st24;
	goto st23;
tr1066:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st26;
st26:
	if ( ++p == pe )
		goto _out26;
case 26:
#line 969 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st24;
		case 9: goto st25;
		case 32: goto st25;
		case 45: goto st24;
		case 125: goto tr457;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st24;
	goto st23;
tr1067:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st27;
st27:
	if ( ++p == pe )
		goto _out27;
case 27:
#line 988 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st26;
		case 125: goto tr339;
	}
	goto st24;
tr1062:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st28;
st28:
	if ( ++p == pe )
		goto _out28;
case 28:
#line 1002 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st20;
		case 93: goto tr374;
	}
	goto st18;
tr887:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st29;
st29:
	if ( ++p == pe )
		goto _out29;
case 29:
#line 1016 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st12;
		case 9: goto st29;
		case 10: goto st30;
		case 13: goto st36;
		case 32: goto st29;
		case 35: goto tr663;
		case 41: goto tr664;
		case 45: goto st12;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st12;
	goto st11;
tr888:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st30;
st30:
	if ( ++p == pe )
		goto _out30;
case 30:
#line 1038 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st12;
		case 9: goto st29;
		case 32: goto st29;
		case 35: goto tr663;
		case 41: goto tr664;
		case 45: goto st12;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st12;
	goto st11;
tr663:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st31;
st31:
	if ( ++p == pe )
		goto _out31;
case 31:
#line 1058 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr963;
		case 9: goto tr964;
		case 10: goto tr965;
		case 13: goto tr966;
		case 32: goto tr964;
		case 41: goto st5;
		case 45: goto tr73;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr963;
	goto tr962;
tr962:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st32;
st32:
	if ( ++p == pe )
		goto _out32;
case 32:
#line 1079 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st14;
		case 9: goto st33;
		case 10: goto st34;
		case 13: goto st35;
		case 32: goto st33;
		case 41: goto tr560;
		case 45: goto tr73;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st14;
	goto st32;
tr964:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st33;
st33:
	if ( ++p == pe )
		goto _out33;
case 33:
#line 1100 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st14;
		case 9: goto st33;
		case 10: goto st34;
		case 13: goto st35;
		case 32: goto st33;
		case 41: goto tr560;
		case 45: goto st14;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st14;
	goto st32;
tr965:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st34;
st34:
	if ( ++p == pe )
		goto _out34;
case 34:
#line 1121 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st14;
		case 9: goto st33;
		case 32: goto st33;
		case 41: goto tr560;
		case 45: goto st14;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st14;
	goto st32;
tr966:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st35;
st35:
	if ( ++p == pe )
		goto _out35;
case 35:
#line 1140 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st34;
		case 41: goto tr513;
	}
	goto st14;
tr889:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st36;
st36:
	if ( ++p == pe )
		goto _out36;
case 36:
#line 1154 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st30;
		case 35: goto tr1360;
		case 41: goto tr1361;
	}
	goto st12;
st722:
	if ( ++p == pe )
		goto _out722;
case 722:
	if ( (*p) == 32 )
		goto tr104;
	goto tr103;
tr79:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 115 "superredcloth_inline.rl"
	{act = 21;}
	goto st723;
st723:
	if ( ++p == pe )
		goto _out723;
case 723:
#line 1180 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr68;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto tr72;
		case 45: goto tr73;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr68;
	goto st5;
tr72:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 115 "superredcloth_inline.rl"
	{act = 21;}
	goto st724;
st724:
	if ( ++p == pe )
		goto _out724;
case 724:
#line 1202 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr68;
		case 9: goto st6;
		case 10: goto st7;
		case 13: goto st8;
		case 32: goto st6;
		case 45: goto tr68;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr68;
	goto st5;
tr122:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st37;
st37:
	if ( ++p == pe )
		goto _out37;
case 37:
#line 1222 "superredcloth_inline.c"
	if ( (*p) == 46 )
		goto st38;
	goto tr1266;
st38:
	if ( ++p == pe )
		goto _out38;
case 38:
	if ( (*p) == 46 )
		goto tr1275;
	goto tr256;
st39:
	if ( ++p == pe )
		goto _out39;
case 39:
	switch( (*p) ) {
		case 67: goto st40;
		case 82: goto st41;
		case 84: goto st42;
		case 99: goto st40;
		case 114: goto st41;
		case 116: goto st42;
	}
	goto tr1266;
st40:
	if ( ++p == pe )
		goto _out40;
case 40:
	if ( (*p) == 93 )
		goto tr1273;
	goto tr256;
st41:
	if ( ++p == pe )
		goto _out41;
case 41:
	if ( (*p) == 93 )
		goto tr1272;
	goto tr256;
st42:
	if ( ++p == pe )
		goto _out42;
case 42:
	switch( (*p) ) {
		case 77: goto st43;
		case 109: goto st43;
	}
	goto tr256;
st43:
	if ( ++p == pe )
		goto _out43;
case 43:
	if ( (*p) == 93 )
		goto tr1271;
	goto tr256;
tr317:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st725;
st725:
	if ( ++p == pe )
		goto _out725;
case 725:
#line 1288 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr83;
		case 35: goto tr88;
		case 36: goto tr89;
		case 37: goto tr90;
		case 40: goto tr91;
		case 43: goto tr92;
		case 46: goto tr93;
		case 47: goto tr94;
		case 60: goto st181;
		case 61: goto tr96;
		case 62: goto st183;
		case 91: goto tr98;
		case 95: goto tr89;
		case 123: goto tr99;
		case 127: goto tr83;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr89;
		} else if ( (*p) >= 0 )
			goto tr83;
	} else if ( (*p) > 63 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr89;
		} else if ( (*p) >= 65 )
			goto tr89;
	} else
		goto tr83;
	goto tr87;
tr87:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
tr1278:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
tr1288:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
tr1298:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st44;
st44:
	if ( ++p == pe )
		goto _out44;
case 44:
#line 1347 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr256;
		case 36: goto st45;
		case 37: goto st78;
		case 47: goto tr256;
		case 95: goto st45;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr256;
	goto st44;
tr89:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
tr1280:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
tr1290:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
tr1300:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st45;
st45:
	if ( ++p == pe )
		goto _out45;
case 45:
#line 1400 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr293;
		case 37: goto st46;
		case 40: goto tr273;
		case 60: goto tr256;
		case 62: goto tr256;
		case 127: goto tr256;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr256;
	goto st45;
tr293:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st726;
tr1239:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st726;
st726:
	if ( ++p == pe )
		goto _out726;
case 726:
#line 1434 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr293;
		case 37: goto st46;
		case 40: goto tr273;
		case 58: goto tr295;
		case 60: goto tr37;
		case 62: goto tr37;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr37;
	goto st45;
tr1240:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st46;
st46:
	if ( ++p == pe )
		goto _out46;
case 46:
#line 1455 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st47;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st47;
	} else
		goto st47;
	goto tr256;
st47:
	if ( ++p == pe )
		goto _out47;
case 47:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st45;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st45;
	} else
		goto st45;
	goto tr256;
tr273:
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st48;
st48:
	if ( ++p == pe )
		goto _out48;
case 48:
#line 1486 "superredcloth_inline.c"
	if ( (*p) == 0 )
		goto tr256;
	goto tr208;
tr208:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st49;
st49:
	if ( ++p == pe )
		goto _out49;
case 49:
#line 1498 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr256;
		case 41: goto tr749;
	}
	goto st49;
tr749:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st50;
st50:
	if ( ++p == pe )
		goto _out50;
case 50:
#line 1512 "superredcloth_inline.c"
	if ( (*p) == 33 )
		goto tr1276;
	goto tr256;
tr1276:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st727;
st727:
	if ( ++p == pe )
		goto _out727;
case 727:
#line 1524 "superredcloth_inline.c"
	if ( (*p) == 58 )
		goto tr292;
	goto tr37;
tr292:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st51;
st51:
	if ( ++p == pe )
		goto _out51;
case 51:
#line 1536 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr748;
		case 35: goto tr124;
		case 36: goto tr38;
		case 37: goto st55;
		case 43: goto st59;
		case 47: goto tr40;
		case 95: goto tr38;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr748;
	goto st52;
st52:
	if ( ++p == pe )
		goto _out52;
case 52:
	switch( (*p) ) {
		case 34: goto tr748;
		case 36: goto tr38;
		case 37: goto st55;
		case 47: goto tr748;
		case 95: goto tr38;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr748;
	goto st52;
tr38:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st728;
tr304:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st728;
st728:
	if ( ++p == pe )
		goto _out728;
case 728:
#line 1609 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 37: goto st53;
		case 60: goto tr37;
		case 62: goto tr37;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 32 )
		goto tr37;
	goto tr38;
st53:
	if ( ++p == pe )
		goto _out53;
case 53:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st54;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st54;
	} else
		goto st54;
	goto tr748;
st54:
	if ( ++p == pe )
		goto _out54;
case 54:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr38;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr38;
	} else
		goto tr38;
	goto tr748;
st55:
	if ( ++p == pe )
		goto _out55;
case 55:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st56;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st56;
	} else
		goto st56;
	goto tr748;
st56:
	if ( ++p == pe )
		goto _out56;
case 56:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st52;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st52;
	} else
		goto st52;
	goto tr748;
tr124:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st729;
st729:
	if ( ++p == pe )
		goto _out729;
case 729:
#line 1680 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr38;
		case 37: goto st57;
		case 47: goto tr37;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto tr124;
st57:
	if ( ++p == pe )
		goto _out57;
case 57:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st58;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st58;
	} else
		goto st58;
	goto tr748;
st58:
	if ( ++p == pe )
		goto _out58;
case 58:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr124;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr124;
	} else
		goto tr124;
	goto tr748;
st59:
	if ( ++p == pe )
		goto _out59;
case 59:
	switch( (*p) ) {
		case 34: goto tr748;
		case 36: goto tr38;
		case 37: goto st55;
		case 43: goto st59;
		case 47: goto tr748;
		case 95: goto tr38;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr748;
	goto st52;
tr40:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st730;
st730:
	if ( ++p == pe )
		goto _out730;
case 730:
#line 1772 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr38;
		case 37: goto st55;
		case 47: goto tr40;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto st52;
tr295:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st60;
st60:
	if ( ++p == pe )
		goto _out60;
case 60:
#line 1807 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr42;
		case 35: goto tr179;
		case 36: goto tr43;
		case 37: goto st66;
		case 40: goto tr7;
		case 43: goto st77;
		case 47: goto tr45;
		case 59: goto st45;
		case 60: goto tr748;
		case 62: goto tr748;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr748;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto st61;
tr1175:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st61;
st61:
	if ( ++p == pe )
		goto _out61;
case 61:
#line 1843 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr42;
		case 36: goto tr43;
		case 37: goto st66;
		case 40: goto tr7;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr748;
		case 62: goto tr748;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr748;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto st61;
tr42:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st731;
tr1176:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st731;
st731:
	if ( ++p == pe )
		goto _out731;
case 731:
#line 1891 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr42;
		case 36: goto tr43;
		case 37: goto st66;
		case 40: goto tr7;
		case 47: goto st45;
		case 58: goto tr295;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto st61;
tr43:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st732;
tr137:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st732;
st732:
	if ( ++p == pe )
		goto _out732;
case 732:
#line 1932 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1317;
		case 37: goto st62;
		case 40: goto tr136;
		case 60: goto tr37;
		case 62: goto tr37;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr37;
	goto tr43;
tr1317:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st733;
tr139:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st733;
st733:
	if ( ++p == pe )
		goto _out733;
case 733:
#line 1962 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1317;
		case 37: goto st62;
		case 40: goto tr136;
		case 58: goto tr137;
		case 60: goto tr37;
		case 62: goto tr37;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr37;
	goto tr43;
tr140:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st62;
st62:
	if ( ++p == pe )
		goto _out62;
case 62:
#line 1983 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st63;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st63;
	} else
		goto st63;
	goto tr748;
st63:
	if ( ++p == pe )
		goto _out63;
case 63:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr43;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr43;
	} else
		goto tr43;
	goto tr748;
tr136:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st734;
st734:
	if ( ++p == pe )
		goto _out734;
case 734:
#line 2018 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr37;
		case 34: goto tr208;
		case 37: goto tr211;
		case 60: goto tr208;
		case 62: goto tr208;
		case 127: goto tr208;
	}
	if ( 1 <= (*p) && (*p) <= 32 )
		goto tr208;
	goto tr209;
tr174:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st735;
tr209:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st735;
st735:
	if ( ++p == pe )
		goto _out735;
case 735:
#line 2048 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr37;
		case 34: goto st49;
		case 37: goto st64;
		case 41: goto tr178;
		case 60: goto st49;
		case 62: goto st49;
		case 127: goto st49;
	}
	if ( 1 <= (*p) && (*p) <= 32 )
		goto st49;
	goto tr174;
tr211:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st64;
st64:
	if ( ++p == pe )
		goto _out64;
case 64:
#line 2069 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr748;
		case 41: goto tr749;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st65;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st65;
	} else
		goto st65;
	goto st49;
st65:
	if ( ++p == pe )
		goto _out65;
case 65:
	switch( (*p) ) {
		case 0: goto tr748;
		case 41: goto tr749;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr174;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr174;
	} else
		goto tr174;
	goto st49;
tr178:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st736;
st736:
	if ( ++p == pe )
		goto _out736;
case 736:
#line 2110 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1316;
		case 37: goto st53;
		case 60: goto tr37;
		case 62: goto tr37;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr37;
	goto tr38;
tr1316:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st737;
st737:
	if ( ++p == pe )
		goto _out737;
case 737:
#line 2129 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 37: goto st53;
		case 58: goto tr304;
		case 60: goto tr37;
		case 62: goto tr37;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 32 )
		goto tr37;
	goto tr38;
tr1177:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st66;
st66:
	if ( ++p == pe )
		goto _out66;
case 66:
#line 2149 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st67;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st67;
	} else
		goto st67;
	goto tr748;
st67:
	if ( ++p == pe )
		goto _out67;
case 67:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st61;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st61;
	} else
		goto st61;
	goto tr748;
tr7:
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st68;
st68:
	if ( ++p == pe )
		goto _out68;
case 68:
#line 2180 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr748;
		case 34: goto tr208;
		case 36: goto tr209;
		case 37: goto tr1174;
		case 47: goto tr208;
		case 95: goto tr209;
		case 127: goto tr208;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr209;
		} else if ( (*p) >= 1 )
			goto tr208;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr208;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr209;
		} else
			goto tr209;
	} else
		goto tr208;
	goto tr1173;
tr1173:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st69;
st69:
	if ( ++p == pe )
		goto _out69;
case 69:
#line 2216 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr748;
		case 34: goto st49;
		case 36: goto tr174;
		case 37: goto st70;
		case 41: goto tr753;
		case 47: goto st49;
		case 95: goto tr174;
		case 127: goto st49;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr174;
		} else if ( (*p) >= 1 )
			goto st49;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st49;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr174;
		} else
			goto tr174;
	} else
		goto st49;
	goto st69;
tr1174:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st70;
st70:
	if ( ++p == pe )
		goto _out70;
case 70:
#line 2253 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr748;
		case 41: goto tr749;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st71;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st71;
	} else
		goto st71;
	goto st49;
st71:
	if ( ++p == pe )
		goto _out71;
case 71:
	switch( (*p) ) {
		case 0: goto tr748;
		case 41: goto tr749;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st69;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st69;
	} else
		goto st69;
	goto st49;
tr753:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st72;
st72:
	if ( ++p == pe )
		goto _out72;
case 72:
#line 2292 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr755;
		case 36: goto tr38;
		case 37: goto st55;
		case 47: goto tr748;
		case 95: goto tr38;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr748;
	goto st52;
tr755:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st738;
st738:
	if ( ++p == pe )
		goto _out738;
case 738:
#line 2327 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr38;
		case 37: goto st55;
		case 47: goto tr37;
		case 58: goto tr292;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto st52;
tr179:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st739;
tr212:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st739;
st739:
	if ( ++p == pe )
		goto _out739;
case 739:
#line 2373 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr180;
		case 36: goto tr43;
		case 37: goto st73;
		case 40: goto tr131;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr179;
tr180:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st740;
tr213:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st740;
st740:
	if ( ++p == pe )
		goto _out740;
case 740:
#line 2421 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr180;
		case 36: goto tr43;
		case 37: goto st73;
		case 40: goto tr131;
		case 47: goto st45;
		case 58: goto tr311;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr179;
tr214:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st73;
st73:
	if ( ++p == pe )
		goto _out73;
case 73:
#line 2456 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st74;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st74;
	} else
		goto st74;
	goto tr748;
st74:
	if ( ++p == pe )
		goto _out74;
case 74:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr179;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr179;
	} else
		goto tr179;
	goto tr748;
tr131:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st741;
st741:
	if ( ++p == pe )
		goto _out741;
case 741:
#line 2491 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr37;
		case 34: goto tr208;
		case 36: goto tr209;
		case 37: goto tr210;
		case 47: goto tr208;
		case 95: goto tr209;
		case 127: goto tr208;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr209;
		} else if ( (*p) >= 1 )
			goto tr208;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr208;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr209;
		} else
			goto tr209;
	} else
		goto tr208;
	goto tr207;
tr172:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st742;
tr207:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st742;
st742:
	if ( ++p == pe )
		goto _out742;
case 742:
#line 2537 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr37;
		case 34: goto st49;
		case 36: goto tr174;
		case 37: goto st75;
		case 41: goto tr176;
		case 47: goto st49;
		case 95: goto tr174;
		case 127: goto st49;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr174;
		} else if ( (*p) >= 1 )
			goto st49;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st49;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr174;
		} else
			goto tr174;
	} else
		goto st49;
	goto tr172;
tr210:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st75;
st75:
	if ( ++p == pe )
		goto _out75;
case 75:
#line 2574 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr748;
		case 41: goto tr749;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st76;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st76;
	} else
		goto st76;
	goto st49;
st76:
	if ( ++p == pe )
		goto _out76;
case 76:
	switch( (*p) ) {
		case 0: goto tr748;
		case 41: goto tr749;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr172;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr172;
	} else
		goto tr172;
	goto st49;
tr176:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st743;
st743:
	if ( ++p == pe )
		goto _out743;
case 743:
#line 2615 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1313;
		case 36: goto tr38;
		case 37: goto st57;
		case 47: goto tr37;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto tr124;
tr1313:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st744;
st744:
	if ( ++p == pe )
		goto _out744;
case 744:
#line 2650 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr38;
		case 37: goto st57;
		case 47: goto tr37;
		case 58: goto tr303;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto tr124;
tr303:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st745;
st745:
	if ( ++p == pe )
		goto _out745;
case 745:
#line 2688 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr38;
		case 37: goto st57;
		case 43: goto tr126;
		case 47: goto tr40;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto tr124;
tr126:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st746;
st746:
	if ( ++p == pe )
		goto _out746;
case 746:
#line 2724 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr38;
		case 37: goto st57;
		case 43: goto tr126;
		case 47: goto tr37;
		case 95: goto tr38;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto tr38;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr38;
		} else
			goto tr38;
	} else
		goto tr37;
	goto tr124;
tr311:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st747;
st747:
	if ( ++p == pe )
		goto _out747;
case 747:
#line 2764 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr180;
		case 36: goto tr43;
		case 37: goto st73;
		case 40: goto tr131;
		case 43: goto tr182;
		case 47: goto tr45;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr179;
tr182:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st748;
st748:
	if ( ++p == pe )
		goto _out748;
case 748:
#line 2801 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr180;
		case 36: goto tr43;
		case 37: goto st73;
		case 40: goto tr131;
		case 43: goto tr182;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr179;
tr45:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st749;
st749:
	if ( ++p == pe )
		goto _out749;
case 749:
#line 2838 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr42;
		case 36: goto tr43;
		case 37: goto st66;
		case 40: goto tr7;
		case 47: goto tr45;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto st61;
st77:
	if ( ++p == pe )
		goto _out77;
case 77:
	switch( (*p) ) {
		case 33: goto tr42;
		case 36: goto tr43;
		case 37: goto st66;
		case 40: goto tr7;
		case 43: goto st77;
		case 47: goto st45;
		case 59: goto st45;
		case 60: goto tr748;
		case 62: goto tr748;
		case 63: goto st45;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr748;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto st61;
tr90:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
tr1281:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
tr1291:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
tr1301:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st78;
st78:
	if ( ++p == pe )
		goto _out78;
case 78:
#line 2920 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st79;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st79;
	} else
		goto st79;
	goto tr256;
st79:
	if ( ++p == pe )
		goto _out79;
case 79:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st44;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st44;
	} else
		goto st44;
	goto tr256;
tr88:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st80;
tr1279:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st80;
tr1289:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st80;
tr1299:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st80;
st80:
	if ( ++p == pe )
		goto _out80;
case 80:
#line 2969 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr297;
		case 36: goto st45;
		case 37: goto st81;
		case 40: goto tr273;
		case 47: goto tr256;
		case 95: goto st45;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr256;
	goto st80;
tr297:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st750;
st750:
	if ( ++p == pe )
		goto _out750;
case 750:
#line 3009 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr297;
		case 36: goto st45;
		case 37: goto st81;
		case 40: goto tr273;
		case 47: goto tr37;
		case 58: goto tr299;
		case 95: goto st45;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr37;
	goto st80;
st81:
	if ( ++p == pe )
		goto _out81;
case 81:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st82;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st82;
	} else
		goto st82;
	goto tr256;
st82:
	if ( ++p == pe )
		goto _out82;
case 82:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st80;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st80;
	} else
		goto st80;
	goto tr256;
tr299:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st83;
st83:
	if ( ++p == pe )
		goto _out83;
case 83:
#line 3072 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr301;
		case 35: goto tr128;
		case 36: goto tr43;
		case 37: goto st85;
		case 40: goto tr7;
		case 43: goto st91;
		case 47: goto tr40;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr748;
	goto st84;
st84:
	if ( ++p == pe )
		goto _out84;
case 84:
	switch( (*p) ) {
		case 33: goto tr301;
		case 36: goto tr43;
		case 37: goto st85;
		case 40: goto tr7;
		case 47: goto tr748;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr748;
	goto st84;
tr301:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st751;
st751:
	if ( ++p == pe )
		goto _out751;
case 751:
#line 3145 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr301;
		case 36: goto tr43;
		case 37: goto st85;
		case 40: goto tr7;
		case 47: goto tr37;
		case 58: goto tr299;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr37;
	goto st84;
st85:
	if ( ++p == pe )
		goto _out85;
case 85:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st86;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st86;
	} else
		goto st86;
	goto tr748;
st86:
	if ( ++p == pe )
		goto _out86;
case 86:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st84;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st84;
	} else
		goto st84;
	goto tr748;
tr128:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st752;
st752:
	if ( ++p == pe )
		goto _out752;
case 752:
#line 3208 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr129;
		case 36: goto tr43;
		case 37: goto st87;
		case 40: goto tr131;
		case 47: goto tr37;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr37;
	goto tr128;
tr129:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st753;
st753:
	if ( ++p == pe )
		goto _out753;
case 753:
#line 3246 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr129;
		case 36: goto tr43;
		case 37: goto st87;
		case 40: goto tr131;
		case 47: goto tr37;
		case 58: goto tr305;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr37;
	goto tr128;
st87:
	if ( ++p == pe )
		goto _out87;
case 87:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st88;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st88;
	} else
		goto st88;
	goto tr748;
st88:
	if ( ++p == pe )
		goto _out88;
case 88:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr128;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr128;
	} else
		goto tr128;
	goto tr748;
tr305:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st754;
st754:
	if ( ++p == pe )
		goto _out754;
case 754:
#line 3311 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr129;
		case 36: goto tr43;
		case 37: goto st87;
		case 40: goto tr131;
		case 43: goto tr132;
		case 47: goto tr40;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr37;
	goto tr128;
tr132:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st755;
st755:
	if ( ++p == pe )
		goto _out755;
case 755:
#line 3348 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr129;
		case 36: goto tr43;
		case 37: goto st87;
		case 40: goto tr131;
		case 43: goto tr132;
		case 47: goto tr37;
		case 58: goto tr133;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr37;
	goto tr128;
tr133:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st756;
tr306:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st756;
st756:
	if ( ++p == pe )
		goto _out756;
case 756:
#line 3392 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr134;
		case 36: goto tr43;
		case 37: goto st89;
		case 40: goto tr136;
		case 47: goto tr38;
		case 59: goto tr38;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto tr38;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr133;
tr134:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
	goto st757;
st757:
	if ( ++p == pe )
		goto _out757;
case 757:
#line 3428 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr134;
		case 36: goto tr43;
		case 37: goto st89;
		case 40: goto tr136;
		case 47: goto tr38;
		case 58: goto tr306;
		case 59: goto tr38;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto tr38;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr133;
st89:
	if ( ++p == pe )
		goto _out89;
case 89:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st90;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st90;
	} else
		goto st90;
	goto tr748;
st90:
	if ( ++p == pe )
		goto _out90;
case 90:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr133;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr133;
	} else
		goto tr133;
	goto tr748;
st91:
	if ( ++p == pe )
		goto _out91;
case 91:
	switch( (*p) ) {
		case 33: goto tr301;
		case 36: goto tr43;
		case 37: goto st85;
		case 40: goto tr7;
		case 43: goto st91;
		case 47: goto tr748;
		case 58: goto tr133;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr748;
	goto st84;
tr91:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st92;
tr1282:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st92;
tr1292:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st92;
tr1302:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st92;
st92:
	if ( ++p == pe )
		goto _out92;
case 92:
#line 3540 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr832;
		case 35: goto st151;
		case 36: goto tr834;
		case 37: goto tr835;
		case 41: goto st97;
		case 47: goto tr832;
		case 95: goto tr834;
		case 127: goto tr832;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr834;
		} else if ( (*p) >= 0 )
			goto tr832;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr832;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr834;
		} else
			goto tr834;
	} else
		goto tr832;
	goto tr831;
tr831:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st93;
st93:
	if ( ++p == pe )
		goto _out93;
case 93:
#line 3577 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st94;
		case 35: goto tr606;
		case 36: goto st167;
		case 37: goto st179;
		case 41: goto tr608;
		case 47: goto st94;
		case 95: goto st167;
		case 127: goto st94;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st167;
		} else if ( (*p) >= 0 )
			goto st94;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st94;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st167;
		} else
			goto st167;
	} else
		goto st94;
	goto st93;
tr832:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st94;
st94:
	if ( ++p == pe )
		goto _out94;
case 94:
#line 3614 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	goto st94;
tr657:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st95;
st95:
	if ( ++p == pe )
		goto _out95;
case 95:
#line 3628 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr256;
	goto tr184;
tr184:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st96;
st96:
	if ( ++p == pe )
		goto _out96;
case 96:
#line 3640 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr555;
	goto st96;
tr451:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st97;
tr452:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st97;
tr555:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st97;
tr608:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st97;
st97:
	if ( ++p == pe )
		goto _out97;
case 97:
#line 3664 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr256;
		case 35: goto tr88;
		case 36: goto tr89;
		case 37: goto tr90;
		case 40: goto tr91;
		case 43: goto tr92;
		case 46: goto tr93;
		case 47: goto tr94;
		case 91: goto tr98;
		case 95: goto tr89;
		case 123: goto tr99;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr89;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr89;
		} else
			goto tr89;
	} else
		goto tr256;
	goto tr87;
tr92:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st98;
tr1283:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st98;
tr1293:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st98;
tr1303:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st98;
st98:
	if ( ++p == pe )
		goto _out98;
case 98:
#line 3723 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr256;
		case 36: goto st45;
		case 37: goto st78;
		case 43: goto st98;
		case 47: goto tr256;
		case 95: goto st45;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr256;
	goto st44;
tr93:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st99;
tr1284:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st99;
tr1294:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st99;
tr1304:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st99;
st99:
	if ( ++p == pe )
		goto _out99;
case 99:
#line 3777 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st100;
		case 33: goto tr1239;
		case 37: goto tr1240;
		case 40: goto tr273;
		case 59: goto st45;
		case 60: goto tr256;
		case 62: goto tr256;
		case 63: goto st45;
		case 127: goto tr256;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr256;
	goto tr89;
st100:
	if ( ++p == pe )
		goto _out100;
case 100:
	switch( (*p) ) {
		case 32: goto st100;
		case 34: goto tr256;
		case 35: goto tr88;
		case 36: goto tr89;
		case 37: goto tr90;
		case 43: goto tr92;
		case 47: goto tr94;
		case 95: goto tr89;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 31 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr89;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr89;
		} else
			goto tr89;
	} else
		goto tr256;
	goto tr87;
tr94:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st101;
tr1285:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st101;
tr1295:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st101;
tr1305:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st101;
st101:
	if ( ++p == pe )
		goto _out101;
case 101:
#line 3851 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr829;
		case 36: goto st45;
		case 37: goto st78;
		case 40: goto tr273;
		case 47: goto st101;
		case 95: goto st45;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 34 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr256;
	goto st44;
tr829:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st758;
st758:
	if ( ++p == pe )
		goto _out758;
case 758:
#line 3891 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto st45;
		case 37: goto st78;
		case 47: goto tr37;
		case 58: goto tr291;
		case 95: goto st45;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st45;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st45;
		} else
			goto st45;
	} else
		goto tr37;
	goto st44;
tr291:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st102;
st102:
	if ( ++p == pe )
		goto _out102;
case 102:
#line 3927 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr748;
		case 35: goto tr1311;
		case 36: goto tr43;
		case 37: goto st104;
		case 43: goto st108;
		case 47: goto tr40;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr748;
	goto st103;
st103:
	if ( ++p == pe )
		goto _out103;
case 103:
	switch( (*p) ) {
		case 34: goto tr748;
		case 36: goto tr43;
		case 37: goto st104;
		case 47: goto tr748;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr748;
	goto st103;
st104:
	if ( ++p == pe )
		goto _out104;
case 104:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st105;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st105;
	} else
		goto st105;
	goto tr748;
st105:
	if ( ++p == pe )
		goto _out105;
case 105:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st103;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st103;
	} else
		goto st103;
	goto tr748;
tr1311:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st759;
st759:
	if ( ++p == pe )
		goto _out759;
case 759:
#line 4020 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr43;
		case 37: goto st106;
		case 47: goto tr37;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr37;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr37;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr37;
	goto tr1311;
st106:
	if ( ++p == pe )
		goto _out106;
case 106:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st107;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st107;
	} else
		goto st107;
	goto tr748;
st107:
	if ( ++p == pe )
		goto _out107;
case 107:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr1311;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr1311;
	} else
		goto tr1311;
	goto tr748;
st108:
	if ( ++p == pe )
		goto _out108;
case 108:
	switch( (*p) ) {
		case 34: goto tr748;
		case 36: goto tr43;
		case 37: goto st104;
		case 43: goto st108;
		case 47: goto tr748;
		case 58: goto tr1314;
		case 95: goto tr43;
		case 127: goto tr748;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr43;
		} else if ( (*p) >= 0 )
			goto tr748;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr748;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else
			goto tr43;
	} else
		goto tr748;
	goto st103;
tr1314:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st760;
st760:
	if ( ++p == pe )
		goto _out760;
case 760:
#line 4113 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr37;
		case 36: goto tr43;
		case 37: goto st109;
		case 47: goto tr38;
		case 59: goto tr38;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto tr38;
		case 95: goto tr43;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 32 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr43;
		} else if ( (*p) >= 65 )
			goto tr43;
	} else
		goto tr43;
	goto tr1314;
st109:
	if ( ++p == pe )
		goto _out109;
case 109:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st110;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st110;
	} else
		goto st110;
	goto tr748;
st110:
	if ( ++p == pe )
		goto _out110;
case 110:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr1314;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr1314;
	} else
		goto tr1314;
	goto tr748;
tr98:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
tr1286:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
tr1296:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
tr1306:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st111;
st111:
	if ( ++p == pe )
		goto _out111;
case 111:
#line 4190 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr192;
		case 36: goto tr196;
		case 37: goto tr987;
		case 47: goto tr192;
		case 93: goto st44;
		case 95: goto tr196;
		case 127: goto tr192;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr196;
		} else if ( (*p) >= 0 )
			goto tr192;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr192;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr196;
		} else
			goto tr196;
	} else
		goto tr192;
	goto tr986;
tr986:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st112;
st112:
	if ( ++p == pe )
		goto _out112;
case 112:
#line 4226 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st113;
		case 36: goto st114;
		case 37: goto st145;
		case 47: goto st113;
		case 93: goto tr452;
		case 95: goto st114;
		case 127: goto st113;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st114;
		} else if ( (*p) >= 0 )
			goto st113;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st113;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st114;
		} else
			goto st114;
	} else
		goto st113;
	goto st112;
tr192:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st113;
st113:
	if ( ++p == pe )
		goto _out113;
case 113:
#line 4262 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr452;
	goto st113;
tr196:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st114;
st114:
	if ( ++p == pe )
		goto _out114;
case 114:
#line 4274 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr276;
		case 37: goto st115;
		case 40: goto tr273;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr279;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto st114;
tr276:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st761;
tr1160:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st761;
st761:
	if ( ++p == pe )
		goto _out761;
case 761:
#line 4309 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr276;
		case 37: goto st115;
		case 40: goto tr273;
		case 58: goto tr278;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr279;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto st114;
tr1161:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st115;
st115:
	if ( ++p == pe )
		goto _out115;
case 115:
#line 4331 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st116;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st116;
	} else
		goto st116;
	goto st113;
st116:
	if ( ++p == pe )
		goto _out116;
case 116:
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st114;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st114;
	} else
		goto st114;
	goto st113;
tr278:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st117;
st117:
	if ( ++p == pe )
		goto _out117;
case 117:
#line 4366 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr13;
		case 35: goto tr151;
		case 36: goto tr14;
		case 37: goto st124;
		case 40: goto tr7;
		case 43: goto st144;
		case 47: goto tr16;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr18;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto st118;
tr1167:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st118;
st118:
	if ( ++p == pe )
		goto _out118;
case 118:
#line 4403 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr13;
		case 36: goto tr14;
		case 37: goto st124;
		case 40: goto tr7;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr18;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto st118;
tr13:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st762;
tr1168:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st762;
st762:
	if ( ++p == pe )
		goto _out762;
case 762:
#line 4452 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr13;
		case 36: goto tr14;
		case 37: goto st124;
		case 40: goto tr7;
		case 47: goto st114;
		case 58: goto tr278;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr18;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto st118;
tr14:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st763;
tr194:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st763;
st763:
	if ( ++p == pe )
		goto _out763;
case 763:
#line 4498 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr157;
		case 37: goto st119;
		case 40: goto tr136;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr159;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto tr14;
tr157:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st764;
tr203:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st764;
st764:
	if ( ++p == pe )
		goto _out764;
case 764:
#line 4533 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr157;
		case 37: goto st119;
		case 40: goto tr136;
		case 58: goto tr194;
		case 60: goto st113;
		case 62: goto st113;
		case 93: goto tr159;
		case 127: goto st113;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st113;
	goto tr14;
tr204:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st119;
st119:
	if ( ++p == pe )
		goto _out119;
case 119:
#line 4555 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st120;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st120;
	} else
		goto st120;
	goto st113;
st120:
	if ( ++p == pe )
		goto _out120;
case 120:
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr14;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr14;
	} else
		goto tr14;
	goto st113;
tr146:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st765;
tr159:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st765;
tr162:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st765;
tr171:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st765;
st765:
	if ( ++p == pe )
		goto _out765;
case 765:
#line 4610 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr139;
		case 37: goto tr140;
		case 40: goto tr136;
		case 46: goto tr141;
		case 59: goto tr43;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto tr43;
		case 91: goto tr142;
		case 123: goto tr143;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr37;
	goto tr137;
tr141:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st766;
st766:
	if ( ++p == pe )
		goto _out766;
case 766:
#line 4639 "superredcloth_inline.c"
	switch( (*p) ) {
		case 32: goto st100;
		case 33: goto tr139;
		case 37: goto tr140;
		case 40: goto tr136;
		case 59: goto tr43;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto tr43;
		case 127: goto tr37;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr37;
	goto tr137;
tr142:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st767;
st767:
	if ( ++p == pe )
		goto _out767;
case 767:
#line 4666 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr203;
		case 37: goto tr204;
		case 40: goto tr136;
		case 60: goto tr192;
		case 62: goto tr192;
		case 93: goto tr43;
		case 127: goto tr192;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr192;
	goto tr194;
tr143:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st768;
st768:
	if ( ++p == pe )
		goto _out768;
case 768:
#line 4691 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr205;
		case 37: goto tr206;
		case 40: goto tr136;
		case 60: goto tr198;
		case 62: goto tr198;
		case 125: goto tr43;
		case 127: goto tr198;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr198;
	goto tr200;
tr5:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st769;
tr200:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st769;
st769:
	if ( ++p == pe )
		goto _out769;
case 769:
#line 4722 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr160;
		case 37: goto st122;
		case 40: goto tr136;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr162;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto tr5;
tr198:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st121;
st121:
	if ( ++p == pe )
		goto _out121;
case 121:
#line 4743 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr451;
	goto st121;
tr160:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st770;
tr205:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st770;
st770:
	if ( ++p == pe )
		goto _out770;
case 770:
#line 4769 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr160;
		case 37: goto st122;
		case 40: goto tr136;
		case 58: goto tr200;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr162;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto tr5;
tr206:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st122;
st122:
	if ( ++p == pe )
		goto _out122;
case 122:
#line 4791 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st123;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st123;
	} else
		goto st123;
	goto st121;
st123:
	if ( ++p == pe )
		goto _out123;
case 123:
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr5;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr5;
	} else
		goto tr5;
	goto st121;
tr1169:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st124;
st124:
	if ( ++p == pe )
		goto _out124;
case 124:
#line 4826 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st125;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st125;
	} else
		goto st125;
	goto st113;
st125:
	if ( ++p == pe )
		goto _out125;
case 125:
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st118;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st118;
	} else
		goto st118;
	goto st113;
tr10:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st126;
tr18:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st126;
tr24:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st126;
tr33:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st126;
st126:
	if ( ++p == pe )
		goto _out126;
case 126:
#line 4873 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1176;
		case 36: goto tr137;
		case 37: goto tr1177;
		case 40: goto tr7;
		case 46: goto tr141;
		case 47: goto tr89;
		case 59: goto st45;
		case 60: goto tr748;
		case 62: goto tr748;
		case 63: goto st45;
		case 91: goto tr1178;
		case 95: goto tr137;
		case 123: goto tr1179;
		case 127: goto tr748;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr748;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr137;
		} else if ( (*p) >= 65 )
			goto tr137;
	} else
		goto tr137;
	goto tr1175;
tr1178:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st127;
st127:
	if ( ++p == pe )
		goto _out127;
case 127:
#line 4910 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1168;
		case 36: goto tr194;
		case 37: goto tr1169;
		case 40: goto tr7;
		case 47: goto tr196;
		case 59: goto tr196;
		case 60: goto tr192;
		case 62: goto tr192;
		case 63: goto tr196;
		case 93: goto st61;
		case 95: goto tr194;
		case 127: goto tr192;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr192;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr194;
		} else if ( (*p) >= 65 )
			goto tr194;
	} else
		goto tr194;
	goto tr1167;
tr1179:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st128;
st128:
	if ( ++p == pe )
		goto _out128;
case 128:
#line 4945 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1171;
		case 36: goto tr200;
		case 37: goto tr1172;
		case 40: goto tr7;
		case 47: goto tr202;
		case 59: goto tr202;
		case 60: goto tr198;
		case 62: goto tr198;
		case 63: goto tr202;
		case 95: goto tr200;
		case 125: goto st61;
		case 127: goto tr198;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr198;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto tr1170;
tr1170:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st129;
st129:
	if ( ++p == pe )
		goto _out129;
case 129:
#line 4980 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr4;
		case 36: goto tr5;
		case 37: goto st130;
		case 40: goto tr7;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr10;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto st129;
tr4:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st771;
tr1171:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st771;
st771:
	if ( ++p == pe )
		goto _out771;
case 771:
#line 5029 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr4;
		case 36: goto tr5;
		case 37: goto st130;
		case 40: goto tr7;
		case 47: goto st132;
		case 58: goto tr274;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr10;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto st129;
tr1172:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st130;
st130:
	if ( ++p == pe )
		goto _out130;
case 130:
#line 5065 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st131;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st131;
	} else
		goto st131;
	goto st121;
st131:
	if ( ++p == pe )
		goto _out131;
case 131:
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st129;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st129;
	} else
		goto st129;
	goto st121;
tr202:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st132;
st132:
	if ( ++p == pe )
		goto _out132;
case 132:
#line 5100 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr271;
		case 37: goto st133;
		case 40: goto tr273;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr275;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto st132;
tr271:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st772;
tr1162:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st772;
st772:
	if ( ++p == pe )
		goto _out772;
case 772:
#line 5135 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr271;
		case 37: goto st133;
		case 40: goto tr273;
		case 58: goto tr274;
		case 60: goto st121;
		case 62: goto st121;
		case 125: goto tr275;
		case 127: goto st121;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st121;
	goto st132;
tr1163:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st133;
st133:
	if ( ++p == pe )
		goto _out133;
case 133:
#line 5157 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st134;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st134;
	} else
		goto st134;
	goto st121;
st134:
	if ( ++p == pe )
		goto _out134;
case 134:
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st132;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st132;
	} else
		goto st132;
	goto st121;
tr274:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st135;
st135:
	if ( ++p == pe )
		goto _out135;
case 135:
#line 5192 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr4;
		case 35: goto tr147;
		case 36: goto tr5;
		case 37: goto st130;
		case 40: goto tr7;
		case 43: goto st140;
		case 47: goto tr8;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr10;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto st129;
tr147:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st773;
tr197:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st773;
st773:
	if ( ++p == pe )
		goto _out773;
case 773:
#line 5239 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr148;
		case 36: goto tr5;
		case 37: goto st136;
		case 40: goto tr131;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr150;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto tr147;
tr148:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st774;
tr199:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st774;
st774:
	if ( ++p == pe )
		goto _out774;
case 774:
#line 5288 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr148;
		case 36: goto tr5;
		case 37: goto st136;
		case 40: goto tr131;
		case 47: goto st132;
		case 58: goto tr307;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr150;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto tr147;
tr201:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st136;
st136:
	if ( ++p == pe )
		goto _out136;
case 136:
#line 5324 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st137;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st137;
	} else
		goto st137;
	goto st121;
st137:
	if ( ++p == pe )
		goto _out137;
case 137:
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr147;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr147;
	} else
		goto tr147;
	goto st121;
tr307:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st775;
st775:
	if ( ++p == pe )
		goto _out775;
case 775:
#line 5363 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr148;
		case 36: goto tr5;
		case 37: goto st136;
		case 40: goto tr131;
		case 43: goto tr155;
		case 47: goto tr8;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr150;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto tr147;
tr155:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st776;
st776:
	if ( ++p == pe )
		goto _out776;
case 776:
#line 5401 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr148;
		case 36: goto tr5;
		case 37: goto st136;
		case 40: goto tr131;
		case 43: goto tr155;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr150;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto tr147;
tr150:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st777;
tr154:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st777;
tr166:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st777;
st777:
	if ( ++p == pe )
		goto _out777;
case 777:
#line 5457 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr213;
		case 36: goto tr137;
		case 37: goto tr214;
		case 40: goto tr131;
		case 46: goto tr141;
		case 47: goto tr89;
		case 59: goto st45;
		case 60: goto tr37;
		case 62: goto tr37;
		case 63: goto st45;
		case 91: goto tr215;
		case 95: goto tr137;
		case 123: goto tr216;
		case 127: goto tr37;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr37;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr137;
		} else if ( (*p) >= 65 )
			goto tr137;
	} else
		goto tr137;
	goto tr212;
tr215:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st778;
st778:
	if ( ++p == pe )
		goto _out778;
case 778:
#line 5498 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr193;
		case 36: goto tr194;
		case 37: goto tr195;
		case 40: goto tr131;
		case 47: goto tr196;
		case 59: goto tr196;
		case 60: goto tr192;
		case 62: goto tr192;
		case 63: goto tr196;
		case 93: goto tr179;
		case 95: goto tr194;
		case 127: goto tr192;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr192;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr194;
		} else if ( (*p) >= 65 )
			goto tr194;
	} else
		goto tr194;
	goto tr191;
tr151:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st779;
tr191:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st779;
st779:
	if ( ++p == pe )
		goto _out779;
case 779:
#line 5543 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr152;
		case 36: goto tr14;
		case 37: goto st138;
		case 40: goto tr131;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr154;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto tr151;
tr152:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st780;
tr193:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st780;
st780:
	if ( ++p == pe )
		goto _out780;
case 780:
#line 5592 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr152;
		case 36: goto tr14;
		case 37: goto st138;
		case 40: goto tr131;
		case 47: goto st114;
		case 58: goto tr308;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr154;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto tr151;
tr195:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st138;
st138:
	if ( ++p == pe )
		goto _out138;
case 138:
#line 5628 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st139;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st139;
	} else
		goto st139;
	goto st113;
st139:
	if ( ++p == pe )
		goto _out139;
case 139:
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr151;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr151;
	} else
		goto tr151;
	goto st113;
tr308:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st781;
st781:
	if ( ++p == pe )
		goto _out781;
case 781:
#line 5667 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr152;
		case 36: goto tr14;
		case 37: goto st138;
		case 40: goto tr131;
		case 43: goto tr156;
		case 47: goto tr16;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr154;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto tr151;
tr156:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st782;
st782:
	if ( ++p == pe )
		goto _out782;
case 782:
#line 5705 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr152;
		case 36: goto tr14;
		case 37: goto st138;
		case 40: goto tr131;
		case 43: goto tr156;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr154;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto tr151;
tr16:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st783;
st783:
	if ( ++p == pe )
		goto _out783;
case 783:
#line 5743 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr13;
		case 36: goto tr14;
		case 37: goto st124;
		case 40: goto tr7;
		case 47: goto tr16;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr18;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto st118;
tr216:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st784;
st784:
	if ( ++p == pe )
		goto _out784;
case 784:
#line 5782 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr199;
		case 36: goto tr200;
		case 37: goto tr201;
		case 40: goto tr131;
		case 47: goto tr202;
		case 59: goto tr202;
		case 60: goto tr198;
		case 62: goto tr198;
		case 63: goto tr202;
		case 95: goto tr200;
		case 125: goto tr179;
		case 127: goto tr198;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr198;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr200;
		} else if ( (*p) >= 65 )
			goto tr200;
	} else
		goto tr200;
	goto tr197;
tr8:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st785;
st785:
	if ( ++p == pe )
		goto _out785;
case 785:
#line 5819 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr4;
		case 36: goto tr5;
		case 37: goto st130;
		case 40: goto tr7;
		case 47: goto tr8;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr10;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto st129;
st140:
	if ( ++p == pe )
		goto _out140;
case 140:
	switch( (*p) ) {
		case 33: goto tr4;
		case 36: goto tr5;
		case 37: goto st130;
		case 40: goto tr7;
		case 43: goto st140;
		case 47: goto st132;
		case 59: goto st132;
		case 60: goto st121;
		case 62: goto st121;
		case 63: goto st132;
		case 95: goto tr5;
		case 125: goto tr10;
		case 127: goto st121;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st121;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr5;
		} else if ( (*p) >= 65 )
			goto tr5;
	} else
		goto tr5;
	goto st129;
tr275:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st141;
tr279:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st141;
tr282:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st141;
tr287:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st141;
st141:
	if ( ++p == pe )
		goto _out141;
case 141:
#line 5897 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1239;
		case 37: goto tr1240;
		case 40: goto tr273;
		case 46: goto tr93;
		case 59: goto st45;
		case 60: goto tr256;
		case 62: goto tr256;
		case 63: goto st45;
		case 91: goto tr1247;
		case 123: goto tr1248;
		case 127: goto tr256;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr256;
	goto tr89;
tr1247:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st142;
st142:
	if ( ++p == pe )
		goto _out142;
case 142:
#line 5922 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1160;
		case 37: goto tr1161;
		case 40: goto tr273;
		case 60: goto tr192;
		case 62: goto tr192;
		case 93: goto st45;
		case 127: goto tr192;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr192;
	goto tr196;
tr1248:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st143;
st143:
	if ( ++p == pe )
		goto _out143;
case 143:
#line 5943 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1162;
		case 37: goto tr1163;
		case 40: goto tr273;
		case 60: goto tr198;
		case 62: goto tr198;
		case 125: goto st45;
		case 127: goto tr198;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr198;
	goto tr202;
st144:
	if ( ++p == pe )
		goto _out144;
case 144:
	switch( (*p) ) {
		case 33: goto tr13;
		case 36: goto tr14;
		case 37: goto st124;
		case 40: goto tr7;
		case 43: goto st144;
		case 47: goto st114;
		case 59: goto st114;
		case 60: goto st113;
		case 62: goto st113;
		case 63: goto st114;
		case 93: goto tr18;
		case 95: goto tr14;
		case 127: goto st113;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st113;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr14;
		} else if ( (*p) >= 65 )
			goto tr14;
	} else
		goto tr14;
	goto st118;
tr987:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st145;
st145:
	if ( ++p == pe )
		goto _out145;
case 145:
#line 5995 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st146;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st146;
	} else
		goto st146;
	goto st113;
st146:
	if ( ++p == pe )
		goto _out146;
case 146:
	if ( (*p) == 93 )
		goto tr452;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st112;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st112;
	} else
		goto st112;
	goto st113;
tr99:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
tr1287:
#line 18 "superredcloth_inline.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
tr1297:
#line 19 "superredcloth_inline.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
tr1307:
#line 21 "superredcloth_inline.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st147;
st147:
	if ( ++p == pe )
		goto _out147;
case 147:
#line 6048 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr198;
		case 36: goto tr202;
		case 37: goto tr1013;
		case 47: goto tr198;
		case 95: goto tr202;
		case 125: goto st44;
		case 127: goto tr198;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr202;
		} else if ( (*p) >= 0 )
			goto tr198;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr198;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr202;
		} else
			goto tr202;
	} else
		goto tr198;
	goto tr1012;
tr1012:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st148;
st148:
	if ( ++p == pe )
		goto _out148;
case 148:
#line 6084 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st121;
		case 36: goto st132;
		case 37: goto st149;
		case 47: goto st121;
		case 95: goto st132;
		case 125: goto tr451;
		case 127: goto st121;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st132;
		} else if ( (*p) >= 0 )
			goto st121;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st121;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st132;
		} else
			goto st132;
	} else
		goto st121;
	goto st148;
tr1013:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st149;
st149:
	if ( ++p == pe )
		goto _out149;
case 149:
#line 6120 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st150;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st150;
	} else
		goto st150;
	goto st121;
st150:
	if ( ++p == pe )
		goto _out150;
case 150:
	if ( (*p) == 125 )
		goto tr451;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st148;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st148;
	} else
		goto st148;
	goto st121;
tr606:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st151;
st151:
	if ( ++p == pe )
		goto _out151;
case 151:
#line 6155 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr184;
		case 36: goto tr190;
		case 37: goto tr927;
		case 41: goto st44;
		case 47: goto tr184;
		case 95: goto tr190;
		case 127: goto tr184;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr190;
		} else if ( (*p) >= 0 )
			goto tr184;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr184;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr190;
		} else
			goto tr190;
	} else
		goto tr184;
	goto tr926;
tr926:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st152;
st152:
	if ( ++p == pe )
		goto _out152;
case 152:
#line 6191 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st96;
		case 36: goto st153;
		case 37: goto st165;
		case 41: goto tr555;
		case 47: goto st96;
		case 95: goto st153;
		case 127: goto st96;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto st153;
		} else if ( (*p) >= 0 )
			goto st96;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto st96;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st153;
		} else
			goto st153;
	} else
		goto st96;
	goto st152;
tr190:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st153;
st153:
	if ( ++p == pe )
		goto _out153;
case 153:
#line 6227 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr280;
		case 37: goto st154;
		case 40: goto tr273;
		case 41: goto tr282;
		case 60: goto st96;
		case 62: goto st96;
		case 127: goto st96;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st96;
	goto st153;
tr280:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st786;
tr1158:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st786;
st786:
	if ( ++p == pe )
		goto _out786;
case 786:
#line 6262 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr280;
		case 37: goto st154;
		case 40: goto tr273;
		case 41: goto tr282;
		case 58: goto tr283;
		case 60: goto st96;
		case 62: goto st96;
		case 127: goto st96;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st96;
	goto st153;
tr1159:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st154;
st154:
	if ( ++p == pe )
		goto _out154;
case 154:
#line 6284 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st155;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st155;
	} else
		goto st155;
	goto st96;
st155:
	if ( ++p == pe )
		goto _out155;
case 155:
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st153;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st153;
	} else
		goto st153;
	goto st96;
tr283:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st156;
st156:
	if ( ++p == pe )
		goto _out156;
case 156:
#line 6319 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr21;
		case 35: goto tr163;
		case 36: goto tr22;
		case 37: goto st160;
		case 40: goto tr7;
		case 41: goto tr24;
		case 43: goto st164;
		case 47: goto tr25;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto st157;
tr1164:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st157;
st157:
	if ( ++p == pe )
		goto _out157;
case 157:
#line 6356 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr21;
		case 36: goto tr22;
		case 37: goto st160;
		case 40: goto tr7;
		case 41: goto tr24;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto st157;
tr21:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st787;
tr1165:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st787;
st787:
	if ( ++p == pe )
		goto _out787;
case 787:
#line 6405 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr21;
		case 36: goto tr22;
		case 37: goto st160;
		case 40: goto tr7;
		case 41: goto tr24;
		case 47: goto st153;
		case 58: goto tr283;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto st157;
tr22:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st788;
tr183:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st788;
st788:
	if ( ++p == pe )
		goto _out788;
case 788:
#line 6451 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr144;
		case 37: goto st158;
		case 40: goto tr136;
		case 41: goto tr146;
		case 60: goto st96;
		case 62: goto st96;
		case 127: goto st96;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st96;
	goto tr22;
tr144:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st789;
tr185:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st789;
st789:
	if ( ++p == pe )
		goto _out789;
case 789:
#line 6486 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr144;
		case 37: goto st158;
		case 40: goto tr136;
		case 41: goto tr146;
		case 58: goto tr183;
		case 60: goto st96;
		case 62: goto st96;
		case 127: goto st96;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st96;
	goto tr22;
tr186:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st158;
st158:
	if ( ++p == pe )
		goto _out158;
case 158:
#line 6508 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st159;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st159;
	} else
		goto st159;
	goto st96;
st159:
	if ( ++p == pe )
		goto _out159;
case 159:
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr22;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr22;
	} else
		goto tr22;
	goto st96;
tr1166:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st160;
st160:
	if ( ++p == pe )
		goto _out160;
case 160:
#line 6543 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st161;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st161;
	} else
		goto st161;
	goto st96;
st161:
	if ( ++p == pe )
		goto _out161;
case 161:
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st157;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st157;
	} else
		goto st157;
	goto st96;
tr163:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st790;
tr187:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st790;
st790:
	if ( ++p == pe )
		goto _out790;
case 790:
#line 6588 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr164;
		case 36: goto tr22;
		case 37: goto st162;
		case 40: goto tr131;
		case 41: goto tr166;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto tr163;
tr164:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st791;
tr188:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st791;
st791:
	if ( ++p == pe )
		goto _out791;
case 791:
#line 6637 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr164;
		case 36: goto tr22;
		case 37: goto st162;
		case 40: goto tr131;
		case 41: goto tr166;
		case 47: goto st153;
		case 58: goto tr309;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto tr163;
tr189:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st162;
st162:
	if ( ++p == pe )
		goto _out162;
case 162:
#line 6673 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st163;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st163;
	} else
		goto st163;
	goto st96;
st163:
	if ( ++p == pe )
		goto _out163;
case 163:
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr163;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr163;
	} else
		goto tr163;
	goto st96;
tr309:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st792;
st792:
	if ( ++p == pe )
		goto _out792;
case 792:
#line 6712 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr164;
		case 36: goto tr22;
		case 37: goto st162;
		case 40: goto tr131;
		case 41: goto tr166;
		case 43: goto tr167;
		case 47: goto tr25;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto tr163;
tr167:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st793;
st793:
	if ( ++p == pe )
		goto _out793;
case 793:
#line 6750 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr164;
		case 36: goto tr22;
		case 37: goto st162;
		case 40: goto tr131;
		case 41: goto tr166;
		case 43: goto tr167;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto tr163;
tr25:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st794;
st794:
	if ( ++p == pe )
		goto _out794;
case 794:
#line 6788 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr21;
		case 36: goto tr22;
		case 37: goto st160;
		case 40: goto tr7;
		case 41: goto tr24;
		case 47: goto tr25;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto st157;
st164:
	if ( ++p == pe )
		goto _out164;
case 164:
	switch( (*p) ) {
		case 33: goto tr21;
		case 36: goto tr22;
		case 37: goto st160;
		case 40: goto tr7;
		case 41: goto tr24;
		case 43: goto st164;
		case 47: goto st153;
		case 59: goto st153;
		case 60: goto st96;
		case 62: goto st96;
		case 63: goto st153;
		case 95: goto tr22;
		case 127: goto st96;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st96;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr22;
		} else if ( (*p) >= 65 )
			goto tr22;
	} else
		goto tr22;
	goto st157;
tr927:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st165;
st165:
	if ( ++p == pe )
		goto _out165;
case 165:
#line 6854 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st166;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st166;
	} else
		goto st166;
	goto st96;
st166:
	if ( ++p == pe )
		goto _out166;
case 166:
	if ( (*p) == 41 )
		goto tr555;
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st152;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st152;
	} else
		goto st152;
	goto st96;
tr834:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st167;
st167:
	if ( ++p == pe )
		goto _out167;
case 167:
#line 6889 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr284;
		case 35: goto tr285;
		case 37: goto st169;
		case 40: goto tr273;
		case 41: goto tr287;
		case 60: goto st94;
		case 62: goto st94;
		case 127: goto st94;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st94;
	goto st167;
tr284:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st795;
st795:
	if ( ++p == pe )
		goto _out795;
case 795:
#line 6915 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr284;
		case 35: goto tr285;
		case 37: goto st169;
		case 40: goto tr273;
		case 41: goto tr287;
		case 58: goto tr288;
		case 60: goto st94;
		case 62: goto st94;
		case 127: goto st94;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st94;
	goto st167;
tr285:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st168;
st168:
	if ( ++p == pe )
		goto _out168;
case 168:
#line 6938 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1158;
		case 37: goto tr1159;
		case 40: goto tr273;
		case 41: goto st45;
		case 60: goto tr184;
		case 62: goto tr184;
		case 127: goto tr184;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr184;
	goto tr190;
st169:
	if ( ++p == pe )
		goto _out169;
case 169:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st170;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st170;
	} else
		goto st170;
	goto st94;
st170:
	if ( ++p == pe )
		goto _out170;
case 170:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st167;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st167;
	} else
		goto st167;
	goto st94;
tr288:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st171;
st171:
	if ( ++p == pe )
		goto _out171;
case 171:
#line 6993 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr29;
		case 35: goto tr747;
		case 36: goto tr31;
		case 37: goto st176;
		case 40: goto tr7;
		case 41: goto tr33;
		case 43: goto st178;
		case 47: goto tr34;
		case 59: goto st167;
		case 60: goto st94;
		case 62: goto st94;
		case 63: goto st167;
		case 95: goto tr31;
		case 127: goto st94;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st94;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr31;
		} else if ( (*p) >= 65 )
			goto tr31;
	} else
		goto tr31;
	goto st172;
st172:
	if ( ++p == pe )
		goto _out172;
case 172:
	switch( (*p) ) {
		case 33: goto tr29;
		case 35: goto tr30;
		case 36: goto tr31;
		case 37: goto st176;
		case 40: goto tr7;
		case 41: goto tr33;
		case 47: goto st167;
		case 59: goto st167;
		case 60: goto st94;
		case 62: goto st94;
		case 63: goto st167;
		case 95: goto tr31;
		case 127: goto st94;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st94;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr31;
		} else if ( (*p) >= 65 )
			goto tr31;
	} else
		goto tr31;
	goto st172;
tr29:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st796;
st796:
	if ( ++p == pe )
		goto _out796;
case 796:
#line 7065 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr29;
		case 35: goto tr30;
		case 36: goto tr31;
		case 37: goto st176;
		case 40: goto tr7;
		case 41: goto tr33;
		case 47: goto st167;
		case 58: goto tr288;
		case 59: goto st167;
		case 60: goto st94;
		case 62: goto st94;
		case 63: goto st167;
		case 95: goto tr31;
		case 127: goto st94;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st94;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr31;
		} else if ( (*p) >= 65 )
			goto tr31;
	} else
		goto tr31;
	goto st172;
tr30:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st173;
st173:
	if ( ++p == pe )
		goto _out173;
case 173:
#line 7102 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr1165;
		case 36: goto tr183;
		case 37: goto tr1166;
		case 40: goto tr7;
		case 41: goto st61;
		case 47: goto tr190;
		case 59: goto tr190;
		case 60: goto tr184;
		case 62: goto tr184;
		case 63: goto tr190;
		case 95: goto tr183;
		case 127: goto tr184;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr184;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr183;
		} else if ( (*p) >= 65 )
			goto tr183;
	} else
		goto tr183;
	goto tr1164;
tr31:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st797;
tr310:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st797;
st797:
	if ( ++p == pe )
		goto _out797;
case 797:
#line 7147 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr168;
		case 35: goto tr169;
		case 37: goto st174;
		case 40: goto tr136;
		case 41: goto tr171;
		case 60: goto st94;
		case 62: goto st94;
		case 127: goto st94;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st94;
	goto tr31;
tr168:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 51 "superredcloth_inline.rl"
	{ STORE(src) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st798;
st798:
	if ( ++p == pe )
		goto _out798;
case 798:
#line 7173 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr168;
		case 35: goto tr169;
		case 37: goto st174;
		case 40: goto tr136;
		case 41: goto tr171;
		case 58: goto tr310;
		case 60: goto st94;
		case 62: goto st94;
		case 127: goto st94;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto st94;
	goto tr31;
tr169:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st799;
st799:
	if ( ++p == pe )
		goto _out799;
case 799:
#line 7200 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr185;
		case 37: goto tr186;
		case 40: goto tr136;
		case 41: goto tr43;
		case 60: goto tr184;
		case 62: goto tr184;
		case 127: goto tr184;
	}
	if ( 0 <= (*p) && (*p) <= 34 )
		goto tr184;
	goto tr183;
st174:
	if ( ++p == pe )
		goto _out174;
case 174:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st175;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st175;
	} else
		goto st175;
	goto st94;
st175:
	if ( ++p == pe )
		goto _out175;
case 175:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr31;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr31;
	} else
		goto tr31;
	goto st94;
st176:
	if ( ++p == pe )
		goto _out176;
case 176:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st177;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st177;
	} else
		goto st177;
	goto st94;
st177:
	if ( ++p == pe )
		goto _out177;
case 177:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st172;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st172;
	} else
		goto st172;
	goto st94;
tr747:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st800;
st800:
	if ( ++p == pe )
		goto _out800;
case 800:
#line 7293 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr188;
		case 36: goto tr183;
		case 37: goto tr189;
		case 40: goto tr131;
		case 41: goto tr179;
		case 47: goto tr190;
		case 59: goto tr190;
		case 60: goto tr184;
		case 62: goto tr184;
		case 63: goto tr190;
		case 95: goto tr183;
		case 127: goto tr184;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto tr184;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr183;
		} else if ( (*p) >= 65 )
			goto tr183;
	} else
		goto tr183;
	goto tr187;
st178:
	if ( ++p == pe )
		goto _out178;
case 178:
	switch( (*p) ) {
		case 33: goto tr29;
		case 35: goto tr30;
		case 36: goto tr31;
		case 37: goto st176;
		case 40: goto tr7;
		case 41: goto tr33;
		case 43: goto st178;
		case 47: goto st167;
		case 59: goto st167;
		case 60: goto st94;
		case 62: goto st94;
		case 63: goto st167;
		case 95: goto tr31;
		case 127: goto st94;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st94;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr31;
		} else if ( (*p) >= 65 )
			goto tr31;
	} else
		goto tr31;
	goto st172;
tr34:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 92 "superredcloth_inline.rl"
	{act = 1;}
	goto st801;
st801:
	if ( ++p == pe )
		goto _out801;
case 801:
#line 7362 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto tr29;
		case 35: goto tr30;
		case 36: goto tr31;
		case 37: goto st176;
		case 40: goto tr7;
		case 41: goto tr33;
		case 47: goto tr34;
		case 59: goto st167;
		case 60: goto st94;
		case 62: goto st94;
		case 63: goto st167;
		case 95: goto tr31;
		case 127: goto st94;
	}
	if ( (*p) < 45 ) {
		if ( 0 <= (*p) && (*p) <= 34 )
			goto st94;
	} else if ( (*p) > 57 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr31;
		} else if ( (*p) >= 65 )
			goto tr31;
	} else
		goto tr31;
	goto st172;
tr835:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st179;
st179:
	if ( ++p == pe )
		goto _out179;
case 179:
#line 7398 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st180;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st180;
	} else
		goto st180;
	goto st94;
st180:
	if ( ++p == pe )
		goto _out180;
case 180:
	switch( (*p) ) {
		case 35: goto tr657;
		case 41: goto tr608;
	}
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st93;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st93;
	} else
		goto st93;
	goto st94;
st181:
	if ( ++p == pe )
		goto _out181;
case 181:
	switch( (*p) ) {
		case 34: goto tr777;
		case 35: goto tr1279;
		case 36: goto tr1280;
		case 37: goto tr1281;
		case 40: goto tr1282;
		case 43: goto tr1283;
		case 46: goto tr1284;
		case 47: goto tr1285;
		case 91: goto tr1286;
		case 95: goto tr1280;
		case 123: goto tr1287;
		case 127: goto tr777;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr1280;
		} else if ( (*p) >= 0 )
			goto tr777;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr777;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr1280;
		} else
			goto tr1280;
	} else
		goto tr777;
	goto tr1278;
tr96:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st182;
st182:
	if ( ++p == pe )
		goto _out182;
case 182:
#line 7473 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr777;
		case 35: goto tr1299;
		case 36: goto tr1300;
		case 37: goto tr1301;
		case 40: goto tr1302;
		case 43: goto tr1303;
		case 46: goto tr1304;
		case 47: goto tr1305;
		case 91: goto tr1306;
		case 95: goto tr1300;
		case 123: goto tr1307;
		case 127: goto tr777;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr1300;
		} else if ( (*p) >= 0 )
			goto tr777;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr777;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr1300;
		} else
			goto tr1300;
	} else
		goto tr777;
	goto tr1298;
st183:
	if ( ++p == pe )
		goto _out183;
case 183:
	switch( (*p) ) {
		case 34: goto tr777;
		case 35: goto tr1289;
		case 36: goto tr1290;
		case 37: goto tr1291;
		case 40: goto tr1292;
		case 43: goto tr1293;
		case 46: goto tr1294;
		case 47: goto tr1295;
		case 91: goto tr1296;
		case 95: goto tr1290;
		case 123: goto tr1297;
		case 127: goto tr777;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr1290;
		} else if ( (*p) >= 0 )
			goto tr777;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr777;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr1290;
		} else
			goto tr1290;
	} else
		goto tr777;
	goto tr1288;
tr318:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st802;
st802:
	if ( ++p == pe )
		goto _out802;
case 802:
#line 7554 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 32: goto tr221;
		case 33: goto tr265;
		case 40: goto tr270;
		case 45: goto tr266;
		case 46: goto tr267;
		case 91: goto tr268;
		case 92: goto tr265;
		case 123: goto tr269;
		case 124: goto tr265;
		case 126: goto tr265;
	}
	if ( (*p) < 42 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr265;
		} else if ( (*p) >= 9 )
			goto tr221;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 63 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr265;
		} else if ( (*p) > 64 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr265;
		} else
			goto tr265;
	} else
		goto tr265;
	goto tr264;
tr245:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st803;
tr264:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st803;
st803:
	if ( ++p == pe )
		goto _out803;
case 803:
#line 7604 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr237;
		case 40: goto tr238;
		case 45: goto tr250;
		case 124: goto st185;
		case 126: goto st185;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 33 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr221;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto st185;
		} else
			goto st185;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto st185;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st185;
		} else
			goto st185;
	} else
		goto st185;
	goto tr245;
st184:
	if ( ++p == pe )
		goto _out184;
case 184:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st185;
tr265:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st185;
st185:
	if ( ++p == pe )
		goto _out185;
case 185:
#line 7660 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr725;
		case 40: goto tr238;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st185;
st186:
	if ( ++p == pe )
		goto _out186;
case 186:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st184;
		case 32: goto st184;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr759;
	goto st185;
st187:
	if ( ++p == pe )
		goto _out187;
case 187:
	if ( (*p) == 10 )
		goto st186;
	goto tr759;
tr725:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 110 "superredcloth_inline.rl"
	{act = 17;}
	goto st804;
tr775:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 110 "superredcloth_inline.rl"
	{act = 17;}
	goto st804;
st804:
	if ( ++p == pe )
		goto _out804;
case 804:
#line 7714 "superredcloth_inline.c"
	if ( (*p) == 58 )
		goto st188;
	goto tr65;
st188:
	if ( ++p == pe )
		goto _out188;
case 188:
	switch( (*p) ) {
		case 34: goto tr256;
		case 35: goto tr1242;
		case 36: goto tr1243;
		case 37: goto tr1244;
		case 43: goto tr1245;
		case 47: goto tr1246;
		case 95: goto tr1243;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr1243;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr1243;
		} else
			goto tr1243;
	} else
		goto tr256;
	goto tr1241;
tr1241:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st189;
st189:
	if ( ++p == pe )
		goto _out189;
case 189:
#line 7758 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr256;
		case 36: goto tr49;
		case 37: goto st192;
		case 47: goto tr256;
		case 95: goto tr49;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr49;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr49;
		} else
			goto tr49;
	} else
		goto tr256;
	goto st189;
tr49:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st805;
tr1243:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st805;
st805:
	if ( ++p == pe )
		goto _out805;
case 805:
#line 7799 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr48;
		case 37: goto st190;
		case 60: goto tr48;
		case 62: goto tr48;
		case 127: goto tr48;
	}
	if ( 0 <= (*p) && (*p) <= 32 )
		goto tr48;
	goto tr49;
st190:
	if ( ++p == pe )
		goto _out190;
case 190:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st191;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st191;
	} else
		goto st191;
	goto tr1249;
st191:
	if ( ++p == pe )
		goto _out191;
case 191:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr49;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr49;
	} else
		goto tr49;
	goto tr1249;
tr1244:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st192;
st192:
	if ( ++p == pe )
		goto _out192;
case 192:
#line 7844 "superredcloth_inline.c"
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st193;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st193;
	} else
		goto st193;
	goto tr256;
st193:
	if ( ++p == pe )
		goto _out193;
case 193:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st189;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st189;
	} else
		goto st189;
	goto tr256;
tr217:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st806;
tr1242:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st806;
st806:
	if ( ++p == pe )
		goto _out806;
case 806:
#line 7881 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr48;
		case 36: goto tr49;
		case 37: goto st194;
		case 47: goto tr48;
		case 95: goto tr49;
		case 127: goto tr48;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr49;
		} else if ( (*p) >= 0 )
			goto tr48;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr48;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr49;
		} else
			goto tr49;
	} else
		goto tr48;
	goto tr217;
st194:
	if ( ++p == pe )
		goto _out194;
case 194:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto st195;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto st195;
	} else
		goto st195;
	goto tr1249;
st195:
	if ( ++p == pe )
		goto _out195;
case 195:
	if ( (*p) < 65 ) {
		if ( 48 <= (*p) && (*p) <= 57 )
			goto tr217;
	} else if ( (*p) > 70 ) {
		if ( 97 <= (*p) && (*p) <= 102 )
			goto tr217;
	} else
		goto tr217;
	goto tr1249;
tr1245:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st196;
st196:
	if ( ++p == pe )
		goto _out196;
case 196:
#line 7942 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr256;
		case 36: goto tr49;
		case 37: goto st192;
		case 43: goto st196;
		case 47: goto tr256;
		case 95: goto tr49;
		case 127: goto tr256;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 58 )
				goto tr49;
		} else if ( (*p) >= 0 )
			goto tr256;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr256;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr49;
		} else
			goto tr49;
	} else
		goto tr256;
	goto st189;
tr51:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 94 "superredcloth_inline.rl"
	{act = 2;}
	goto st807;
tr1246:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 94 "superredcloth_inline.rl"
	{act = 2;}
	goto st807;
st807:
	if ( ++p == pe )
		goto _out807;
case 807:
#line 7988 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto tr48;
		case 36: goto tr49;
		case 37: goto st192;
		case 47: goto tr51;
		case 95: goto tr49;
		case 127: goto tr48;
	}
	if ( (*p) < 59 ) {
		if ( (*p) > 32 ) {
			if ( 45 <= (*p) && (*p) <= 57 )
				goto tr49;
		} else if ( (*p) >= 0 )
			goto tr48;
	} else if ( (*p) > 60 ) {
		if ( (*p) < 65 ) {
			if ( 62 <= (*p) && (*p) <= 63 )
				goto tr48;
		} else if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto tr49;
		} else
			goto tr49;
	} else
		goto tr48;
	goto st189;
tr238:
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
	goto st197;
st197:
	if ( ++p == pe )
		goto _out197;
case 197:
#line 8023 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto tr1185;
		case 10: goto tr1186;
		case 13: goto tr1187;
		case 32: goto tr1185;
		case 34: goto tr1188;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1183;
	goto tr1184;
tr1184:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st198;
st198:
	if ( ++p == pe )
		goto _out198;
case 198:
#line 8043 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st199;
		case 10: goto st200;
		case 13: goto st209;
		case 32: goto st199;
		case 34: goto tr764;
		case 41: goto tr763;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st201;
	goto st198;
tr1185:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st199;
st199:
	if ( ++p == pe )
		goto _out199;
case 199:
#line 8064 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st199;
		case 10: goto st200;
		case 13: goto st209;
		case 32: goto st199;
		case 41: goto tr763;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st201;
	goto st198;
tr1186:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st200;
st200:
	if ( ++p == pe )
		goto _out200;
case 200:
#line 8084 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st199;
		case 32: goto st199;
		case 41: goto tr763;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st201;
	goto st198;
tr1183:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st201;
st201:
	if ( ++p == pe )
		goto _out201;
case 201:
#line 8102 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr256;
		case 41: goto tr66;
	}
	goto st201;
tr66:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st202;
st202:
	if ( ++p == pe )
		goto _out202;
case 202:
#line 8116 "superredcloth_inline.c"
	if ( (*p) == 34 )
		goto st203;
	goto tr256;
tr703:
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
	goto st203;
st203:
	if ( ++p == pe )
		goto _out203;
case 203:
#line 8128 "superredcloth_inline.c"
	if ( (*p) == 58 )
		goto st188;
	goto tr256;
tr763:
#line 41 "superredcloth_inline.rl"
	{ STORE(title) }
	goto st204;
st204:
	if ( ++p == pe )
		goto _out204;
case 204:
#line 8140 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st206;
		case 10: goto st207;
		case 13: goto st208;
		case 32: goto st206;
		case 34: goto tr775;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st205;
st205:
	if ( ++p == pe )
		goto _out205;
case 205:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st206;
		case 10: goto st207;
		case 13: goto st208;
		case 32: goto st206;
		case 34: goto tr774;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st205;
st206:
	if ( ++p == pe )
		goto _out206;
case 206:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st206;
		case 10: goto st207;
		case 13: goto st208;
		case 32: goto st206;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st205;
st207:
	if ( ++p == pe )
		goto _out207;
case 207:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st206;
		case 32: goto st206;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr759;
	goto st205;
st208:
	if ( ++p == pe )
		goto _out208;
case 208:
	if ( (*p) == 10 )
		goto st207;
	goto tr759;
tr1187:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st209;
st209:
	if ( ++p == pe )
		goto _out209;
case 209:
#line 8208 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 10: goto st200;
		case 41: goto tr66;
	}
	goto st201;
tr764:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 110 "superredcloth_inline.rl"
	{act = 17;}
	goto st808;
tr1188:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 110 "superredcloth_inline.rl"
	{act = 17;}
	goto st808;
st808:
	if ( ++p == pe )
		goto _out808;
case 808:
#line 8237 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr65;
		case 41: goto tr66;
	}
	goto st201;
tr237:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 110 "superredcloth_inline.rl"
	{act = 17;}
	goto st809;
st809:
	if ( ++p == pe )
		goto _out809;
case 809:
#line 8257 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr65;
		case 40: goto tr65;
		case 45: goto st719;
		case 58: goto st188;
		case 124: goto tr65;
		case 126: goto tr65;
	}
	if ( (*p) < 42 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr65;
		} else if ( (*p) > 33 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr65;
		} else
			goto tr65;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 63 ) {
			if ( 59 <= (*p) && (*p) <= 61 )
				goto tr65;
		} else if ( (*p) > 64 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr65;
			} else if ( (*p) >= 91 )
				goto tr65;
		} else
			goto tr65;
	} else
		goto tr65;
	goto tr241;
tr250:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st810;
tr266:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st810;
st810:
	if ( ++p == pe )
		goto _out810;
case 810:
#line 8308 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr237;
		case 40: goto tr238;
		case 124: goto st185;
		case 126: goto st185;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 33 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr221;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto st185;
		} else
			goto st185;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto st185;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st185;
		} else
			goto st185;
	} else
		goto st185;
	goto tr245;
tr270:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st210;
st210:
	if ( ++p == pe )
		goto _out210;
case 210:
#line 8349 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1124;
		case 9: goto tr1145;
		case 10: goto tr1146;
		case 13: goto tr1147;
		case 32: goto tr1145;
		case 34: goto tr725;
		case 35: goto st248;
		case 40: goto tr238;
		case 41: goto st252;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1124;
	goto tr1144;
tr1144:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st211;
st211:
	if ( ++p == pe )
		goto _out211;
case 211:
#line 8372 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st212;
		case 9: goto st246;
		case 10: goto st247;
		case 13: goto st266;
		case 32: goto st246;
		case 34: goto tr725;
		case 35: goto tr741;
		case 40: goto tr238;
		case 41: goto tr742;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st212;
	goto st211;
tr1124:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st212;
st212:
	if ( ++p == pe )
		goto _out212;
case 212:
#line 8395 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1362;
		case 41: goto tr1363;
	}
	goto st212;
tr1362:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st213;
st213:
	if ( ++p == pe )
		goto _out213;
case 213:
#line 8409 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr759;
	goto tr1131;
tr1131:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st214;
st214:
	if ( ++p == pe )
		goto _out214;
case 214:
#line 8421 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1355;
	goto st214;
tr1319:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st215;
tr1324:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st215;
tr1355:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st215;
tr1363:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st215;
st215:
	if ( ++p == pe )
		goto _out215;
case 215:
#line 8445 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 32: goto tr759;
		case 40: goto tr1189;
		case 46: goto tr1190;
		case 91: goto tr1191;
		case 123: goto tr1192;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr759;
	goto tr1180;
tr1180:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st216;
st216:
	if ( ++p == pe )
		goto _out216;
case 216:
#line 8465 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st217;
		case 10: goto st218;
		case 13: goto st219;
		case 32: goto st217;
		case 34: goto tr703;
		case 40: goto tr704;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st216;
st217:
	if ( ++p == pe )
		goto _out217;
case 217:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st217;
		case 10: goto st218;
		case 13: goto st219;
		case 32: goto st217;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st216;
st218:
	if ( ++p == pe )
		goto _out218;
case 218:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st217;
		case 32: goto st217;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr759;
	goto st216;
st219:
	if ( ++p == pe )
		goto _out219;
case 219:
	if ( (*p) == 10 )
		goto st218;
	goto tr759;
tr704:
#line 47 "superredcloth_inline.rl"
	{ STORE(name) }
	goto st220;
st220:
	if ( ++p == pe )
		goto _out220;
case 220:
#line 8519 "superredcloth_inline.c"
	if ( (*p) == 0 )
		goto tr759;
	goto tr1183;
tr1189:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st221;
st221:
	if ( ++p == pe )
		goto _out221;
case 221:
#line 8531 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1124;
		case 9: goto tr1125;
		case 10: goto tr1126;
		case 13: goto tr1127;
		case 32: goto tr1125;
		case 34: goto tr703;
		case 35: goto st225;
		case 40: goto tr704;
		case 41: goto st229;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1124;
	goto tr1123;
tr1123:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st222;
st222:
	if ( ++p == pe )
		goto _out222;
case 222:
#line 8554 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st212;
		case 9: goto st223;
		case 10: goto st224;
		case 13: goto st245;
		case 32: goto st223;
		case 34: goto tr703;
		case 35: goto tr723;
		case 40: goto tr704;
		case 41: goto tr724;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st212;
	goto st222;
tr1125:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st223;
st223:
	if ( ++p == pe )
		goto _out223;
case 223:
#line 8577 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st212;
		case 9: goto st223;
		case 10: goto st224;
		case 13: goto st245;
		case 32: goto st223;
		case 35: goto tr723;
		case 41: goto tr724;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st212;
	goto st222;
tr1126:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st224;
st224:
	if ( ++p == pe )
		goto _out224;
case 224:
#line 8598 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st212;
		case 9: goto st223;
		case 32: goto st223;
		case 35: goto tr723;
		case 41: goto tr724;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st212;
	goto st222;
tr723:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st225;
st225:
	if ( ++p == pe )
		goto _out225;
case 225:
#line 8617 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1131;
		case 9: goto tr1132;
		case 10: goto tr1133;
		case 13: goto tr1134;
		case 32: goto tr1132;
		case 34: goto tr703;
		case 40: goto tr704;
		case 41: goto st216;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1131;
	goto tr1130;
tr1130:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st226;
st226:
	if ( ++p == pe )
		goto _out226;
case 226:
#line 8639 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st214;
		case 9: goto st227;
		case 10: goto st228;
		case 13: goto st244;
		case 32: goto st227;
		case 34: goto tr703;
		case 40: goto tr704;
		case 41: goto tr717;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st214;
	goto st226;
tr1132:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st227;
st227:
	if ( ++p == pe )
		goto _out227;
case 227:
#line 8661 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st214;
		case 9: goto st227;
		case 10: goto st228;
		case 13: goto st244;
		case 32: goto st227;
		case 41: goto tr717;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st214;
	goto st226;
tr1133:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st228;
st228:
	if ( ++p == pe )
		goto _out228;
case 228:
#line 8681 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st214;
		case 9: goto st227;
		case 32: goto st227;
		case 41: goto tr717;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st214;
	goto st226;
tr705:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st229;
tr711:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st229;
tr717:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st229;
tr724:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st229;
st229:
	if ( ++p == pe )
		goto _out229;
case 229:
#line 8711 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st217;
		case 10: goto st218;
		case 13: goto st219;
		case 32: goto st217;
		case 34: goto tr703;
		case 40: goto tr704;
		case 46: goto tr1190;
		case 91: goto tr1191;
		case 123: goto tr1192;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr1180;
tr1190:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st230;
st230:
	if ( ++p == pe )
		goto _out230;
case 230:
#line 8735 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st217;
		case 10: goto st218;
		case 13: goto st219;
		case 32: goto st231;
		case 34: goto tr703;
		case 40: goto tr704;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr1180;
st231:
	if ( ++p == pe )
		goto _out231;
case 231:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st217;
		case 10: goto st218;
		case 13: goto st219;
		case 32: goto st231;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr1180;
tr1191:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st232;
st232:
	if ( ++p == pe )
		goto _out232;
case 232:
#line 8770 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1136;
		case 9: goto tr1137;
		case 10: goto tr1138;
		case 13: goto tr1139;
		case 32: goto tr1137;
		case 34: goto tr703;
		case 40: goto tr704;
		case 93: goto st216;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1136;
	goto tr1135;
tr1135:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st233;
st233:
	if ( ++p == pe )
		goto _out233;
case 233:
#line 8792 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st234;
		case 9: goto st235;
		case 10: goto st236;
		case 13: goto st237;
		case 32: goto st235;
		case 34: goto tr703;
		case 40: goto tr704;
		case 93: goto tr711;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st234;
	goto st233;
tr1136:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st234;
st234:
	if ( ++p == pe )
		goto _out234;
case 234:
#line 8814 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1324;
	goto st234;
tr1137:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st235;
st235:
	if ( ++p == pe )
		goto _out235;
case 235:
#line 8826 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st234;
		case 9: goto st235;
		case 10: goto st236;
		case 13: goto st237;
		case 32: goto st235;
		case 93: goto tr711;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st234;
	goto st233;
tr1138:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st236;
st236:
	if ( ++p == pe )
		goto _out236;
case 236:
#line 8846 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st234;
		case 9: goto st235;
		case 32: goto st235;
		case 93: goto tr711;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st234;
	goto st233;
tr1139:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st237;
st237:
	if ( ++p == pe )
		goto _out237;
case 237:
#line 8864 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st236;
		case 93: goto tr1324;
	}
	goto st234;
tr1192:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st238;
st238:
	if ( ++p == pe )
		goto _out238;
case 238:
#line 8878 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr258;
		case 9: goto tr1141;
		case 10: goto tr1142;
		case 13: goto tr1143;
		case 32: goto tr1141;
		case 34: goto tr703;
		case 40: goto tr704;
		case 125: goto st216;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr258;
	goto tr1140;
tr1140:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st239;
st239:
	if ( ++p == pe )
		goto _out239;
case 239:
#line 8900 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st241;
		case 10: goto st242;
		case 13: goto st243;
		case 32: goto st241;
		case 34: goto tr703;
		case 40: goto tr704;
		case 125: goto tr705;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st240;
	goto st239;
tr258:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st240;
st240:
	if ( ++p == pe )
		goto _out240;
case 240:
#line 8922 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1319;
	goto st240;
tr1141:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st241;
st241:
	if ( ++p == pe )
		goto _out241;
case 241:
#line 8934 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st241;
		case 10: goto st242;
		case 13: goto st243;
		case 32: goto st241;
		case 125: goto tr705;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st240;
	goto st239;
tr1142:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st242;
st242:
	if ( ++p == pe )
		goto _out242;
case 242:
#line 8954 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st241;
		case 32: goto st241;
		case 125: goto tr705;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st240;
	goto st239;
tr1143:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st243;
st243:
	if ( ++p == pe )
		goto _out243;
case 243:
#line 8972 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st242;
		case 125: goto tr1319;
	}
	goto st240;
tr1134:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st244;
st244:
	if ( ++p == pe )
		goto _out244;
case 244:
#line 8986 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st228;
		case 41: goto tr1355;
	}
	goto st214;
tr1127:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st245;
st245:
	if ( ++p == pe )
		goto _out245;
case 245:
#line 9000 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st224;
		case 35: goto tr1362;
		case 41: goto tr1363;
	}
	goto st212;
tr1145:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st246;
st246:
	if ( ++p == pe )
		goto _out246;
case 246:
#line 9015 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st212;
		case 9: goto st246;
		case 10: goto st247;
		case 13: goto st266;
		case 32: goto st246;
		case 35: goto tr741;
		case 41: goto tr742;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st212;
	goto st211;
tr1146:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st247;
st247:
	if ( ++p == pe )
		goto _out247;
case 247:
#line 9036 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st212;
		case 9: goto st246;
		case 32: goto st246;
		case 35: goto tr741;
		case 41: goto tr742;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st212;
	goto st211;
tr741:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st248;
st248:
	if ( ++p == pe )
		goto _out248;
case 248:
#line 9055 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1131;
		case 9: goto tr1151;
		case 10: goto tr1152;
		case 13: goto tr1153;
		case 32: goto tr1151;
		case 34: goto tr725;
		case 40: goto tr238;
		case 41: goto st185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1131;
	goto tr1150;
tr1150:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st249;
st249:
	if ( ++p == pe )
		goto _out249;
case 249:
#line 9077 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st214;
		case 9: goto st250;
		case 10: goto st251;
		case 13: goto st265;
		case 32: goto st250;
		case 34: goto tr725;
		case 40: goto tr238;
		case 41: goto tr736;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st214;
	goto st249;
tr1151:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st250;
st250:
	if ( ++p == pe )
		goto _out250;
case 250:
#line 9099 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st214;
		case 9: goto st250;
		case 10: goto st251;
		case 13: goto st265;
		case 32: goto st250;
		case 41: goto tr736;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st214;
	goto st249;
tr1152:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st251;
st251:
	if ( ++p == pe )
		goto _out251;
case 251:
#line 9119 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st214;
		case 9: goto st250;
		case 32: goto st250;
		case 41: goto tr736;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st214;
	goto st249;
tr726:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st252;
tr731:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st252;
tr736:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st252;
tr742:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st252;
st252:
	if ( ++p == pe )
		goto _out252;
case 252:
#line 9149 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr725;
		case 40: goto tr238;
		case 46: goto tr267;
		case 91: goto tr268;
		case 123: goto tr1182;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr265;
tr267:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st253;
st253:
	if ( ++p == pe )
		goto _out253;
case 253:
#line 9173 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st254;
		case 34: goto tr725;
		case 40: goto tr238;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr265;
st254:
	if ( ++p == pe )
		goto _out254;
case 254:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st254;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto tr265;
tr268:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st255;
st255:
	if ( ++p == pe )
		goto _out255;
case 255:
#line 9208 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1136;
		case 9: goto tr1155;
		case 10: goto tr1156;
		case 13: goto tr1157;
		case 32: goto tr1155;
		case 34: goto tr725;
		case 40: goto tr238;
		case 93: goto st185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1136;
	goto tr1154;
tr1154:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st256;
st256:
	if ( ++p == pe )
		goto _out256;
case 256:
#line 9230 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st234;
		case 9: goto st257;
		case 10: goto st258;
		case 13: goto st259;
		case 32: goto st257;
		case 34: goto tr725;
		case 40: goto tr238;
		case 93: goto tr731;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st234;
	goto st256;
tr1155:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st257;
st257:
	if ( ++p == pe )
		goto _out257;
case 257:
#line 9252 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st234;
		case 9: goto st257;
		case 10: goto st258;
		case 13: goto st259;
		case 32: goto st257;
		case 93: goto tr731;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st234;
	goto st256;
tr1156:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st258;
st258:
	if ( ++p == pe )
		goto _out258;
case 258:
#line 9272 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st234;
		case 9: goto st257;
		case 32: goto st257;
		case 93: goto tr731;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st234;
	goto st256;
tr1157:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st259;
st259:
	if ( ++p == pe )
		goto _out259;
case 259:
#line 9290 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st258;
		case 93: goto tr1324;
	}
	goto st234;
tr1182:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st260;
st260:
	if ( ++p == pe )
		goto _out260;
case 260:
#line 9304 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr258;
		case 9: goto tr259;
		case 10: goto tr260;
		case 13: goto tr261;
		case 32: goto tr259;
		case 34: goto tr725;
		case 40: goto tr238;
		case 125: goto st185;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr258;
	goto tr262;
tr262:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st261;
st261:
	if ( ++p == pe )
		goto _out261;
case 261:
#line 9326 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st262;
		case 10: goto st263;
		case 13: goto st264;
		case 32: goto st262;
		case 34: goto tr725;
		case 40: goto tr238;
		case 125: goto tr726;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st240;
	goto st261;
tr259:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st262;
st262:
	if ( ++p == pe )
		goto _out262;
case 262:
#line 9348 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st262;
		case 10: goto st263;
		case 13: goto st264;
		case 32: goto st262;
		case 125: goto tr726;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st240;
	goto st261;
tr260:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st263;
st263:
	if ( ++p == pe )
		goto _out263;
case 263:
#line 9368 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st262;
		case 32: goto st262;
		case 125: goto tr726;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st240;
	goto st261;
tr261:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st264;
st264:
	if ( ++p == pe )
		goto _out264;
case 264:
#line 9386 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st263;
		case 125: goto tr1319;
	}
	goto st240;
tr1153:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st265;
st265:
	if ( ++p == pe )
		goto _out265;
case 265:
#line 9400 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st251;
		case 41: goto tr1355;
	}
	goto st214;
tr1147:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st266;
st266:
	if ( ++p == pe )
		goto _out266;
case 266:
#line 9414 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st247;
		case 35: goto tr1362;
		case 41: goto tr1363;
	}
	goto st212;
tr269:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st811;
st811:
	if ( ++p == pe )
		goto _out811;
case 811:
#line 9433 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr258;
		case 9: goto tr259;
		case 10: goto tr260;
		case 13: goto tr261;
		case 32: goto tr259;
		case 34: goto tr237;
		case 40: goto tr238;
		case 45: goto tr263;
		case 125: goto tr245;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 33 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr258;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto tr262;
		} else
			goto tr262;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr262;
		} else if ( (*p) > 92 ) {
			if ( (*p) > 96 ) {
				if ( 124 <= (*p) && (*p) <= 126 )
					goto tr262;
			} else if ( (*p) >= 94 )
				goto tr262;
		} else
			goto tr262;
	} else
		goto tr262;
	goto tr257;
tr231:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st812;
tr257:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st812;
st812:
	if ( ++p == pe )
		goto _out812;
case 812:
#line 9487 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st262;
		case 10: goto st263;
		case 13: goto st264;
		case 32: goto st262;
		case 34: goto tr237;
		case 40: goto tr238;
		case 45: goto tr240;
		case 125: goto tr239;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 33 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st240;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto st261;
		} else
			goto st261;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto st261;
		} else if ( (*p) > 92 ) {
			if ( (*p) > 96 ) {
				if ( 124 <= (*p) && (*p) <= 126 )
					goto st261;
			} else if ( (*p) >= 94 )
				goto st261;
		} else
			goto st261;
	} else
		goto st261;
	goto tr231;
tr240:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st813;
tr263:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st813;
st813:
	if ( ++p == pe )
		goto _out813;
case 813:
#line 9541 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st240;
		case 9: goto st262;
		case 10: goto st263;
		case 13: goto st264;
		case 32: goto st262;
		case 34: goto tr237;
		case 40: goto tr238;
		case 125: goto tr239;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 33 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto st240;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto st261;
		} else
			goto st261;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto st261;
		} else if ( (*p) > 92 ) {
			if ( (*p) > 96 ) {
				if ( 124 <= (*p) && (*p) <= 126 )
					goto st261;
			} else if ( (*p) >= 94 )
				goto st261;
		} else
			goto st261;
	} else
		goto st261;
	goto tr231;
tr239:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
#line 9 "superredcloth_inline.rl"
	{act = 32;}
	goto st814;
st814:
	if ( ++p == pe )
		goto _out814;
case 814:
#line 9588 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 9: goto st184;
		case 10: goto st186;
		case 13: goto st187;
		case 32: goto st184;
		case 34: goto tr237;
		case 40: goto tr238;
		case 45: goto tr266;
		case 46: goto tr267;
		case 91: goto tr268;
		case 92: goto tr265;
		case 123: goto tr269;
		case 124: goto tr265;
		case 126: goto tr265;
	}
	if ( (*p) < 42 ) {
		if ( (*p) > 12 ) {
			if ( 33 <= (*p) && (*p) <= 38 )
				goto tr265;
		} else if ( (*p) >= 11 )
			goto tr221;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 63 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr265;
		} else if ( (*p) > 64 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr265;
		} else
			goto tr265;
	} else
		goto tr265;
	goto tr264;
tr320:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st815;
st815:
	if ( ++p == pe )
		goto _out815;
case 815:
#line 9633 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr1236;
		case 91: goto tr1237;
		case 123: goto tr1238;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr1235;
tr1235:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st267;
st267:
	if ( ++p == pe )
		goto _out267;
case 267:
#line 9652 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st268;
		case 10: goto st269;
		case 13: goto st270;
		case 32: goto st268;
		case 37: goto tr591;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st267;
st268:
	if ( ++p == pe )
		goto _out268;
case 268:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st268;
		case 10: goto st269;
		case 13: goto st270;
		case 32: goto st268;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st267;
st269:
	if ( ++p == pe )
		goto _out269;
case 269:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st268;
		case 32: goto st268;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st267;
st270:
	if ( ++p == pe )
		goto _out270;
case 270:
	if ( (*p) == 10 )
		goto st269;
	goto tr777;
tr1236:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st271;
st271:
	if ( ++p == pe )
		goto _out271;
case 271:
#line 9705 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr920;
		case 9: goto tr921;
		case 10: goto tr922;
		case 13: goto tr923;
		case 32: goto tr921;
		case 35: goto st292;
		case 37: goto tr591;
		case 41: goto st282;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr920;
	goto tr919;
tr919:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st272;
st272:
	if ( ++p == pe )
		goto _out272;
case 272:
#line 9727 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st273;
		case 9: goto st290;
		case 10: goto st291;
		case 13: goto st297;
		case 32: goto st290;
		case 35: goto tr697;
		case 37: goto tr591;
		case 41: goto tr698;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st273;
	goto st272;
tr920:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st273;
st273:
	if ( ++p == pe )
		goto _out273;
case 273:
#line 9749 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1438;
		case 41: goto tr1439;
	}
	goto st273;
tr1438:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st274;
st274:
	if ( ++p == pe )
		goto _out274;
case 274:
#line 9763 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr1109;
tr1109:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st275;
st275:
	if ( ++p == pe )
		goto _out275;
case 275:
#line 9775 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1417;
	goto st275;
tr1390:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st276;
tr1402:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st276;
tr1417:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st276;
tr1439:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st276;
st276:
	if ( ++p == pe )
		goto _out276;
case 276:
#line 9799 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1236;
		case 91: goto tr1237;
		case 123: goto tr1238;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1235;
tr1237:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st277;
st277:
	if ( ++p == pe )
		goto _out277;
case 277:
#line 9818 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1114;
		case 9: goto tr1115;
		case 10: goto tr1116;
		case 13: goto tr1117;
		case 32: goto tr1115;
		case 37: goto tr591;
		case 93: goto st267;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1114;
	goto tr1113;
tr1113:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st278;
st278:
	if ( ++p == pe )
		goto _out278;
case 278:
#line 9839 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st279;
		case 9: goto st280;
		case 10: goto st281;
		case 13: goto st289;
		case 32: goto st280;
		case 37: goto tr591;
		case 93: goto tr598;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st279;
	goto st278;
tr1114:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st279;
st279:
	if ( ++p == pe )
		goto _out279;
case 279:
#line 9860 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1402;
	goto st279;
tr1115:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st280;
st280:
	if ( ++p == pe )
		goto _out280;
case 280:
#line 9872 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st279;
		case 9: goto st280;
		case 10: goto st281;
		case 13: goto st289;
		case 32: goto st280;
		case 93: goto tr598;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st279;
	goto st278;
tr1116:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st281;
st281:
	if ( ++p == pe )
		goto _out281;
case 281:
#line 9892 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st279;
		case 9: goto st280;
		case 32: goto st280;
		case 93: goto tr598;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st279;
	goto st278;
tr592:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st282;
tr598:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st282;
tr604:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st282;
tr698:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st282;
st282:
	if ( ++p == pe )
		goto _out282;
case 282:
#line 9922 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st268;
		case 10: goto st269;
		case 13: goto st270;
		case 32: goto st268;
		case 37: goto tr591;
		case 40: goto tr1236;
		case 91: goto tr1237;
		case 123: goto tr1238;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1235;
tr1238:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st283;
st283:
	if ( ++p == pe )
		goto _out283;
case 283:
#line 9945 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1119;
		case 9: goto tr1120;
		case 10: goto tr1121;
		case 13: goto tr1122;
		case 32: goto tr1120;
		case 37: goto tr591;
		case 125: goto st267;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1119;
	goto tr1118;
tr1118:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st284;
st284:
	if ( ++p == pe )
		goto _out284;
case 284:
#line 9966 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st285;
		case 9: goto st286;
		case 10: goto st287;
		case 13: goto st288;
		case 32: goto st286;
		case 37: goto tr591;
		case 125: goto tr592;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st285;
	goto st284;
tr1119:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st285;
st285:
	if ( ++p == pe )
		goto _out285;
case 285:
#line 9987 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1390;
	goto st285;
tr1120:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st286;
st286:
	if ( ++p == pe )
		goto _out286;
case 286:
#line 9999 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st285;
		case 9: goto st286;
		case 10: goto st287;
		case 13: goto st288;
		case 32: goto st286;
		case 125: goto tr592;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st285;
	goto st284;
tr1121:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st287;
st287:
	if ( ++p == pe )
		goto _out287;
case 287:
#line 10019 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st285;
		case 9: goto st286;
		case 32: goto st286;
		case 125: goto tr592;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st285;
	goto st284;
tr1122:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st288;
st288:
	if ( ++p == pe )
		goto _out288;
case 288:
#line 10037 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st287;
		case 125: goto tr1390;
	}
	goto st285;
tr1117:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st289;
st289:
	if ( ++p == pe )
		goto _out289;
case 289:
#line 10051 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st281;
		case 93: goto tr1402;
	}
	goto st279;
tr921:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st290;
st290:
	if ( ++p == pe )
		goto _out290;
case 290:
#line 10065 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st273;
		case 9: goto st290;
		case 10: goto st291;
		case 13: goto st297;
		case 32: goto st290;
		case 35: goto tr697;
		case 41: goto tr698;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st273;
	goto st272;
tr922:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st291;
st291:
	if ( ++p == pe )
		goto _out291;
case 291:
#line 10086 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st273;
		case 9: goto st290;
		case 32: goto st290;
		case 35: goto tr697;
		case 41: goto tr698;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st273;
	goto st272;
tr697:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st292;
st292:
	if ( ++p == pe )
		goto _out292;
case 292:
#line 10105 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1109;
		case 9: goto tr1110;
		case 10: goto tr1111;
		case 13: goto tr1112;
		case 32: goto tr1110;
		case 37: goto tr591;
		case 41: goto st267;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1109;
	goto tr1108;
tr1108:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st293;
st293:
	if ( ++p == pe )
		goto _out293;
case 293:
#line 10126 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st275;
		case 9: goto st294;
		case 10: goto st295;
		case 13: goto st296;
		case 32: goto st294;
		case 37: goto tr591;
		case 41: goto tr604;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st275;
	goto st293;
tr1110:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st294;
st294:
	if ( ++p == pe )
		goto _out294;
case 294:
#line 10147 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st275;
		case 9: goto st294;
		case 10: goto st295;
		case 13: goto st296;
		case 32: goto st294;
		case 41: goto tr604;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st275;
	goto st293;
tr1111:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st295;
st295:
	if ( ++p == pe )
		goto _out295;
case 295:
#line 10167 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st275;
		case 9: goto st294;
		case 32: goto st294;
		case 41: goto tr604;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st275;
	goto st293;
tr1112:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st296;
st296:
	if ( ++p == pe )
		goto _out296;
case 296:
#line 10185 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st295;
		case 41: goto tr1417;
	}
	goto st275;
tr923:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st297;
st297:
	if ( ++p == pe )
		goto _out297;
case 297:
#line 10199 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st291;
		case 35: goto tr1438;
		case 41: goto tr1439;
	}
	goto st273;
tr321:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st816;
st816:
	if ( ++p == pe )
		goto _out816;
case 816:
#line 10216 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 32: goto tr221;
		case 33: goto tr229;
		case 40: goto tr229;
		case 45: goto tr230;
		case 124: goto tr229;
		case 126: goto tr229;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr221;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto tr229;
		} else
			goto tr229;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr229;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr229;
		} else
			goto tr229;
	} else
		goto tr229;
	goto tr228;
tr220:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st817;
tr228:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st817;
st817:
	if ( ++p == pe )
		goto _out817;
case 817:
#line 10261 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 9: goto st298;
		case 10: goto st300;
		case 13: goto st301;
		case 32: goto st298;
		case 33: goto st299;
		case 39: goto tr226;
		case 45: goto tr227;
		case 124: goto st299;
		case 126: goto st299;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr221;
		} else if ( (*p) > 40 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto st299;
		} else
			goto st299;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto st299;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st299;
		} else
			goto st299;
	} else
		goto st299;
	goto tr220;
st298:
	if ( ++p == pe )
		goto _out298;
case 298:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st298;
		case 10: goto st300;
		case 13: goto st301;
		case 32: goto st298;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st299;
tr229:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st299;
st299:
	if ( ++p == pe )
		goto _out299;
case 299:
#line 10317 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st298;
		case 10: goto st300;
		case 13: goto st301;
		case 32: goto st298;
		case 39: goto tr765;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr759;
	goto st299;
st300:
	if ( ++p == pe )
		goto _out300;
case 300:
	switch( (*p) ) {
		case 0: goto tr759;
		case 9: goto st298;
		case 32: goto st298;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr759;
	goto st299;
st301:
	if ( ++p == pe )
		goto _out301;
case 301:
	if ( (*p) == 10 )
		goto st300;
	goto tr759;
tr227:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st818;
tr230:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st818;
st818:
	if ( ++p == pe )
		goto _out818;
case 818:
#line 10362 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 9: goto st298;
		case 10: goto st300;
		case 13: goto st301;
		case 32: goto st298;
		case 33: goto st299;
		case 39: goto tr226;
		case 124: goto st299;
		case 126: goto st299;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 11 <= (*p) && (*p) <= 12 )
				goto tr221;
		} else if ( (*p) > 40 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto st299;
		} else
			goto st299;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto st299;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto st299;
		} else
			goto st299;
	} else
		goto st299;
	goto tr220;
tr322:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st819;
st819:
	if ( ++p == pe )
		goto _out819;
case 819:
#line 10405 "superredcloth_inline.c"
	switch( (*p) ) {
		case 67: goto st1;
		case 82: goto st2;
		case 84: goto st3;
		case 99: goto st1;
		case 114: goto st2;
		case 116: goto st3;
	}
	goto tr83;
tr323:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st820;
st820:
	if ( ++p == pe )
		goto _out820;
case 820:
#line 10427 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr1231;
		case 42: goto tr1310;
		case 91: goto tr1232;
		case 123: goto tr1233;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr1230;
tr1230:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st302;
st302:
	if ( ++p == pe )
		goto _out302;
case 302:
#line 10447 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st303;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st303;
		case 42: goto tr504;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st302;
st303:
	if ( ++p == pe )
		goto _out303;
case 303:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st303;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st303;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st302;
st304:
	if ( ++p == pe )
		goto _out304;
case 304:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st303;
		case 32: goto st303;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st302;
st305:
	if ( ++p == pe )
		goto _out305;
case 305:
	if ( (*p) == 10 )
		goto st304;
	goto tr777;
tr1231:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st306;
st306:
	if ( ++p == pe )
		goto _out306;
case 306:
#line 10500 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr913;
		case 9: goto tr914;
		case 10: goto tr915;
		case 13: goto tr916;
		case 32: goto tr914;
		case 35: goto st327;
		case 41: goto st317;
		case 42: goto tr504;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr913;
	goto tr912;
tr912:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st307;
st307:
	if ( ++p == pe )
		goto _out307;
case 307:
#line 10522 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st308;
		case 9: goto st325;
		case 10: goto st326;
		case 13: goto st332;
		case 32: goto st325;
		case 35: goto tr690;
		case 41: goto tr691;
		case 42: goto tr504;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st308;
	goto st307;
tr913:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st308;
st308:
	if ( ++p == pe )
		goto _out308;
case 308:
#line 10544 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1436;
		case 41: goto tr1437;
	}
	goto st308;
tr1436:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st309;
st309:
	if ( ++p == pe )
		goto _out309;
case 309:
#line 10558 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr982;
tr982:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st310;
st310:
	if ( ++p == pe )
		goto _out310;
case 310:
#line 10570 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1416;
	goto st310;
tr1389:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st311;
tr1401:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st311;
tr1416:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st311;
tr1437:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st311;
st311:
	if ( ++p == pe )
		goto _out311;
case 311:
#line 10594 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1231;
		case 91: goto tr1232;
		case 123: goto tr1233;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1230;
tr1232:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st312;
st312:
	if ( ++p == pe )
		goto _out312;
case 312:
#line 10613 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1097;
		case 9: goto tr1098;
		case 10: goto tr1099;
		case 13: goto tr1100;
		case 32: goto tr1098;
		case 42: goto tr504;
		case 93: goto st302;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1097;
	goto tr1096;
tr1096:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st313;
st313:
	if ( ++p == pe )
		goto _out313;
case 313:
#line 10634 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st314;
		case 9: goto st315;
		case 10: goto st316;
		case 13: goto st324;
		case 32: goto st315;
		case 42: goto tr504;
		case 93: goto tr511;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st314;
	goto st313;
tr1097:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st314;
st314:
	if ( ++p == pe )
		goto _out314;
case 314:
#line 10655 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1401;
	goto st314;
tr1098:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st315;
st315:
	if ( ++p == pe )
		goto _out315;
case 315:
#line 10667 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st314;
		case 9: goto st315;
		case 10: goto st316;
		case 13: goto st324;
		case 32: goto st315;
		case 93: goto tr511;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st314;
	goto st313;
tr1099:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st316;
st316:
	if ( ++p == pe )
		goto _out316;
case 316:
#line 10687 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st314;
		case 9: goto st315;
		case 32: goto st315;
		case 93: goto tr511;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st314;
	goto st313;
tr505:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st317;
tr511:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st317;
tr583:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st317;
tr691:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st317;
st317:
	if ( ++p == pe )
		goto _out317;
case 317:
#line 10717 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st303;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st303;
		case 40: goto tr1231;
		case 42: goto tr504;
		case 91: goto tr1232;
		case 123: goto tr1233;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1230;
tr1233:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st318;
st318:
	if ( ++p == pe )
		goto _out318;
case 318:
#line 10740 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1102;
		case 9: goto tr1103;
		case 10: goto tr1104;
		case 13: goto tr1105;
		case 32: goto tr1103;
		case 42: goto tr504;
		case 125: goto st302;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1102;
	goto tr1101;
tr1101:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st319;
st319:
	if ( ++p == pe )
		goto _out319;
case 319:
#line 10761 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st320;
		case 9: goto st321;
		case 10: goto st322;
		case 13: goto st323;
		case 32: goto st321;
		case 42: goto tr504;
		case 125: goto tr505;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st320;
	goto st319;
tr1102:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st320;
st320:
	if ( ++p == pe )
		goto _out320;
case 320:
#line 10782 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1389;
	goto st320;
tr1103:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st321;
st321:
	if ( ++p == pe )
		goto _out321;
case 321:
#line 10794 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st320;
		case 9: goto st321;
		case 10: goto st322;
		case 13: goto st323;
		case 32: goto st321;
		case 125: goto tr505;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st320;
	goto st319;
tr1104:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st322;
st322:
	if ( ++p == pe )
		goto _out322;
case 322:
#line 10814 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st320;
		case 9: goto st321;
		case 32: goto st321;
		case 125: goto tr505;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st320;
	goto st319;
tr1105:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st323;
st323:
	if ( ++p == pe )
		goto _out323;
case 323:
#line 10832 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st322;
		case 125: goto tr1389;
	}
	goto st320;
tr1100:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st324;
st324:
	if ( ++p == pe )
		goto _out324;
case 324:
#line 10846 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st316;
		case 93: goto tr1401;
	}
	goto st314;
tr914:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st325;
st325:
	if ( ++p == pe )
		goto _out325;
case 325:
#line 10860 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st308;
		case 9: goto st325;
		case 10: goto st326;
		case 13: goto st332;
		case 32: goto st325;
		case 35: goto tr690;
		case 41: goto tr691;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st308;
	goto st307;
tr915:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st326;
st326:
	if ( ++p == pe )
		goto _out326;
case 326:
#line 10881 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st308;
		case 9: goto st325;
		case 32: goto st325;
		case 35: goto tr690;
		case 41: goto tr691;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st308;
	goto st307;
tr690:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st327;
st327:
	if ( ++p == pe )
		goto _out327;
case 327:
#line 10900 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr982;
		case 9: goto tr983;
		case 10: goto tr984;
		case 13: goto tr985;
		case 32: goto tr983;
		case 41: goto st302;
		case 42: goto tr504;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr982;
	goto tr981;
tr981:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st328;
st328:
	if ( ++p == pe )
		goto _out328;
case 328:
#line 10921 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st310;
		case 9: goto st329;
		case 10: goto st330;
		case 13: goto st331;
		case 32: goto st329;
		case 41: goto tr583;
		case 42: goto tr504;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st310;
	goto st328;
tr983:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st329;
st329:
	if ( ++p == pe )
		goto _out329;
case 329:
#line 10942 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st310;
		case 9: goto st329;
		case 10: goto st330;
		case 13: goto st331;
		case 32: goto st329;
		case 41: goto tr583;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st310;
	goto st328;
tr984:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st330;
st330:
	if ( ++p == pe )
		goto _out330;
case 330:
#line 10962 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st310;
		case 9: goto st329;
		case 32: goto st329;
		case 41: goto tr583;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st310;
	goto st328;
tr985:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st331;
st331:
	if ( ++p == pe )
		goto _out331;
case 331:
#line 10980 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st330;
		case 41: goto tr1416;
	}
	goto st310;
tr916:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st332;
st332:
	if ( ++p == pe )
		goto _out332;
case 332:
#line 10994 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st326;
		case 35: goto tr1436;
		case 41: goto tr1437;
	}
	goto st308;
tr1310:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st333;
st333:
	if ( ++p == pe )
		goto _out333;
case 333:
#line 11009 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st303;
		case 10: goto st304;
		case 13: goto st305;
		case 32: goto st303;
		case 40: goto tr1227;
		case 42: goto tr1234;
		case 91: goto tr1228;
		case 123: goto tr1229;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1226;
tr1226:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st334;
st334:
	if ( ++p == pe )
		goto _out334;
case 334:
#line 11032 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st335;
		case 10: goto st336;
		case 13: goto st337;
		case 32: goto st335;
		case 42: goto tr492;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st334;
st335:
	if ( ++p == pe )
		goto _out335;
case 335:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st335;
		case 10: goto st336;
		case 13: goto st337;
		case 32: goto st335;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st334;
st336:
	if ( ++p == pe )
		goto _out336;
case 336:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st335;
		case 32: goto st335;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st334;
st337:
	if ( ++p == pe )
		goto _out337;
case 337:
	if ( (*p) == 10 )
		goto st336;
	goto tr777;
tr492:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st821;
st821:
	if ( ++p == pe )
		goto _out821;
case 821:
#line 11085 "superredcloth_inline.c"
	if ( (*p) == 42 )
		goto tr100;
	goto tr53;
tr1227:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st338;
st338:
	if ( ++p == pe )
		goto _out338;
case 338:
#line 11097 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr900;
		case 9: goto tr907;
		case 10: goto tr908;
		case 13: goto tr909;
		case 32: goto tr907;
		case 35: goto st374;
		case 41: goto st378;
		case 42: goto tr492;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr900;
	goto tr906;
tr906:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st339;
st339:
	if ( ++p == pe )
		goto _out339;
case 339:
#line 11119 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st340;
		case 9: goto st372;
		case 10: goto st373;
		case 13: goto st390;
		case 32: goto st372;
		case 35: goto tr683;
		case 41: goto tr684;
		case 42: goto tr492;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st340;
	goto st339;
tr900:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st340;
st340:
	if ( ++p == pe )
		goto _out340;
case 340:
#line 11141 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1442;
		case 41: goto tr1443;
	}
	goto st340;
tr1442:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st341;
st341:
	if ( ++p == pe )
		goto _out341;
case 341:
#line 11155 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr973;
tr973:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st342;
st342:
	if ( ++p == pe )
		goto _out342;
case 342:
#line 11167 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1419;
	goto st342;
tr1392:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st343;
tr1404:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st343;
tr1419:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st343;
tr1443:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st343;
st343:
	if ( ++p == pe )
		goto _out343;
case 343:
#line 11191 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1223;
		case 91: goto tr1224;
		case 123: goto tr1225;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1222;
tr1222:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st344;
st344:
	if ( ++p == pe )
		goto _out344;
case 344:
#line 11210 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st345;
		case 10: goto st346;
		case 13: goto st347;
		case 32: goto st345;
		case 42: goto tr57;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr256;
	goto st344;
st345:
	if ( ++p == pe )
		goto _out345;
case 345:
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st345;
		case 10: goto st346;
		case 13: goto st347;
		case 32: goto st345;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr256;
	goto st344;
st346:
	if ( ++p == pe )
		goto _out346;
case 346:
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st345;
		case 32: goto st345;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr256;
	goto st344;
st347:
	if ( ++p == pe )
		goto _out347;
case 347:
	if ( (*p) == 10 )
		goto st346;
	goto tr256;
tr57:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st348;
st348:
	if ( ++p == pe )
		goto _out348;
case 348:
#line 11263 "superredcloth_inline.c"
	if ( (*p) == 42 )
		goto tr100;
	goto tr256;
tr1223:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st349;
st349:
	if ( ++p == pe )
		goto _out349;
case 349:
#line 11275 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr900;
		case 9: goto tr901;
		case 10: goto tr902;
		case 13: goto tr903;
		case 32: goto tr901;
		case 35: goto st353;
		case 41: goto st357;
		case 42: goto tr57;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr900;
	goto tr899;
tr899:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st350;
st350:
	if ( ++p == pe )
		goto _out350;
case 350:
#line 11297 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st340;
		case 9: goto st351;
		case 10: goto st352;
		case 13: goto st371;
		case 32: goto st351;
		case 35: goto tr677;
		case 41: goto tr678;
		case 42: goto tr57;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st340;
	goto st350;
tr901:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st351;
st351:
	if ( ++p == pe )
		goto _out351;
case 351:
#line 11319 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st340;
		case 9: goto st351;
		case 10: goto st352;
		case 13: goto st371;
		case 32: goto st351;
		case 35: goto tr677;
		case 41: goto tr678;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st340;
	goto st350;
tr902:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st352;
st352:
	if ( ++p == pe )
		goto _out352;
case 352:
#line 11340 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st340;
		case 9: goto st351;
		case 32: goto st351;
		case 35: goto tr677;
		case 41: goto tr678;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st340;
	goto st350;
tr677:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st353;
st353:
	if ( ++p == pe )
		goto _out353;
case 353:
#line 11359 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr973;
		case 9: goto tr974;
		case 10: goto tr975;
		case 13: goto tr976;
		case 32: goto tr974;
		case 41: goto st344;
		case 42: goto tr57;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr973;
	goto tr972;
tr972:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st354;
st354:
	if ( ++p == pe )
		goto _out354;
case 354:
#line 11380 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st342;
		case 9: goto st355;
		case 10: goto st356;
		case 13: goto st370;
		case 32: goto st355;
		case 41: goto tr572;
		case 42: goto tr57;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st342;
	goto st354;
tr974:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st355;
st355:
	if ( ++p == pe )
		goto _out355;
case 355:
#line 11401 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st342;
		case 9: goto st355;
		case 10: goto st356;
		case 13: goto st370;
		case 32: goto st355;
		case 41: goto tr572;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st342;
	goto st354;
tr975:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st356;
st356:
	if ( ++p == pe )
		goto _out356;
case 356:
#line 11421 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st342;
		case 9: goto st355;
		case 32: goto st355;
		case 41: goto tr572;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st342;
	goto st354;
tr481:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st357;
tr487:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st357;
tr572:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st357;
tr678:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st357;
st357:
	if ( ++p == pe )
		goto _out357;
case 357:
#line 11451 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st345;
		case 10: goto st346;
		case 13: goto st347;
		case 32: goto st345;
		case 40: goto tr1223;
		case 42: goto tr57;
		case 91: goto tr1224;
		case 123: goto tr1225;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1222;
tr1224:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st358;
st358:
	if ( ++p == pe )
		goto _out358;
case 358:
#line 11474 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1079;
		case 9: goto tr1080;
		case 10: goto tr1081;
		case 13: goto tr1082;
		case 32: goto tr1080;
		case 42: goto tr57;
		case 93: goto st344;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1079;
	goto tr1078;
tr1078:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st359;
st359:
	if ( ++p == pe )
		goto _out359;
case 359:
#line 11495 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st360;
		case 9: goto st361;
		case 10: goto st362;
		case 13: goto st363;
		case 32: goto st361;
		case 42: goto tr57;
		case 93: goto tr487;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st360;
	goto st359;
tr1079:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st360;
st360:
	if ( ++p == pe )
		goto _out360;
case 360:
#line 11516 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1404;
	goto st360;
tr1080:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st361;
st361:
	if ( ++p == pe )
		goto _out361;
case 361:
#line 11528 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st360;
		case 9: goto st361;
		case 10: goto st362;
		case 13: goto st363;
		case 32: goto st361;
		case 93: goto tr487;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st360;
	goto st359;
tr1081:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st362;
st362:
	if ( ++p == pe )
		goto _out362;
case 362:
#line 11548 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st360;
		case 9: goto st361;
		case 32: goto st361;
		case 93: goto tr487;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st360;
	goto st359;
tr1082:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st363;
st363:
	if ( ++p == pe )
		goto _out363;
case 363:
#line 11566 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st362;
		case 93: goto tr1404;
	}
	goto st360;
tr1225:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st364;
st364:
	if ( ++p == pe )
		goto _out364;
case 364:
#line 11580 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1084;
		case 9: goto tr1085;
		case 10: goto tr1086;
		case 13: goto tr1087;
		case 32: goto tr1085;
		case 42: goto tr57;
		case 125: goto st344;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1084;
	goto tr1083;
tr1083:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st365;
st365:
	if ( ++p == pe )
		goto _out365;
case 365:
#line 11601 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st366;
		case 9: goto st367;
		case 10: goto st368;
		case 13: goto st369;
		case 32: goto st367;
		case 42: goto tr57;
		case 125: goto tr481;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st366;
	goto st365;
tr1084:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st366;
st366:
	if ( ++p == pe )
		goto _out366;
case 366:
#line 11622 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1392;
	goto st366;
tr1085:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st367;
st367:
	if ( ++p == pe )
		goto _out367;
case 367:
#line 11634 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st366;
		case 9: goto st367;
		case 10: goto st368;
		case 13: goto st369;
		case 32: goto st367;
		case 125: goto tr481;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st366;
	goto st365;
tr1086:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st368;
st368:
	if ( ++p == pe )
		goto _out368;
case 368:
#line 11654 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st366;
		case 9: goto st367;
		case 32: goto st367;
		case 125: goto tr481;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st366;
	goto st365;
tr1087:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st369;
st369:
	if ( ++p == pe )
		goto _out369;
case 369:
#line 11672 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st368;
		case 125: goto tr1392;
	}
	goto st366;
tr976:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st370;
st370:
	if ( ++p == pe )
		goto _out370;
case 370:
#line 11686 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st356;
		case 41: goto tr1419;
	}
	goto st342;
tr903:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st371;
st371:
	if ( ++p == pe )
		goto _out371;
case 371:
#line 11700 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st352;
		case 35: goto tr1442;
		case 41: goto tr1443;
	}
	goto st340;
tr907:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st372;
st372:
	if ( ++p == pe )
		goto _out372;
case 372:
#line 11715 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st340;
		case 9: goto st372;
		case 10: goto st373;
		case 13: goto st390;
		case 32: goto st372;
		case 35: goto tr683;
		case 41: goto tr684;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st340;
	goto st339;
tr908:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st373;
st373:
	if ( ++p == pe )
		goto _out373;
case 373:
#line 11736 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st340;
		case 9: goto st372;
		case 32: goto st372;
		case 35: goto tr683;
		case 41: goto tr684;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st340;
	goto st339;
tr683:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st374;
st374:
	if ( ++p == pe )
		goto _out374;
case 374:
#line 11755 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr973;
		case 9: goto tr978;
		case 10: goto tr979;
		case 13: goto tr980;
		case 32: goto tr978;
		case 41: goto st334;
		case 42: goto tr492;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr973;
	goto tr977;
tr977:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st375;
st375:
	if ( ++p == pe )
		goto _out375;
case 375:
#line 11776 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st342;
		case 9: goto st376;
		case 10: goto st377;
		case 13: goto st389;
		case 32: goto st376;
		case 41: goto tr577;
		case 42: goto tr492;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st342;
	goto st375;
tr978:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st376;
st376:
	if ( ++p == pe )
		goto _out376;
case 376:
#line 11797 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st342;
		case 9: goto st376;
		case 10: goto st377;
		case 13: goto st389;
		case 32: goto st376;
		case 41: goto tr577;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st342;
	goto st375;
tr979:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st377;
st377:
	if ( ++p == pe )
		goto _out377;
case 377:
#line 11817 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st342;
		case 9: goto st376;
		case 32: goto st376;
		case 41: goto tr577;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st342;
	goto st375;
tr493:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st378;
tr498:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st378;
tr577:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st378;
tr684:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st378;
st378:
	if ( ++p == pe )
		goto _out378;
case 378:
#line 11847 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st335;
		case 10: goto st336;
		case 13: goto st337;
		case 32: goto st335;
		case 40: goto tr1227;
		case 42: goto tr492;
		case 91: goto tr1228;
		case 123: goto tr1229;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1226;
tr1228:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st379;
st379:
	if ( ++p == pe )
		goto _out379;
case 379:
#line 11870 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1079;
		case 9: goto tr1089;
		case 10: goto tr1090;
		case 13: goto tr1091;
		case 32: goto tr1089;
		case 42: goto tr492;
		case 93: goto st334;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1079;
	goto tr1088;
tr1088:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st380;
st380:
	if ( ++p == pe )
		goto _out380;
case 380:
#line 11891 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st360;
		case 9: goto st381;
		case 10: goto st382;
		case 13: goto st383;
		case 32: goto st381;
		case 42: goto tr492;
		case 93: goto tr498;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st360;
	goto st380;
tr1089:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st381;
st381:
	if ( ++p == pe )
		goto _out381;
case 381:
#line 11912 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st360;
		case 9: goto st381;
		case 10: goto st382;
		case 13: goto st383;
		case 32: goto st381;
		case 93: goto tr498;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st360;
	goto st380;
tr1090:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st382;
st382:
	if ( ++p == pe )
		goto _out382;
case 382:
#line 11932 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st360;
		case 9: goto st381;
		case 32: goto st381;
		case 93: goto tr498;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st360;
	goto st380;
tr1091:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st383;
st383:
	if ( ++p == pe )
		goto _out383;
case 383:
#line 11950 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st382;
		case 93: goto tr1404;
	}
	goto st360;
tr1229:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st384;
st384:
	if ( ++p == pe )
		goto _out384;
case 384:
#line 11964 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1084;
		case 9: goto tr1093;
		case 10: goto tr1094;
		case 13: goto tr1095;
		case 32: goto tr1093;
		case 42: goto tr492;
		case 125: goto st334;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1084;
	goto tr1092;
tr1092:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st385;
st385:
	if ( ++p == pe )
		goto _out385;
case 385:
#line 11985 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st366;
		case 9: goto st386;
		case 10: goto st387;
		case 13: goto st388;
		case 32: goto st386;
		case 42: goto tr492;
		case 125: goto tr493;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st366;
	goto st385;
tr1093:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st386;
st386:
	if ( ++p == pe )
		goto _out386;
case 386:
#line 12006 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st366;
		case 9: goto st386;
		case 10: goto st387;
		case 13: goto st388;
		case 32: goto st386;
		case 125: goto tr493;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st366;
	goto st385;
tr1094:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st387;
st387:
	if ( ++p == pe )
		goto _out387;
case 387:
#line 12026 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st366;
		case 9: goto st386;
		case 32: goto st386;
		case 125: goto tr493;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st366;
	goto st385;
tr1095:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st388;
st388:
	if ( ++p == pe )
		goto _out388;
case 388:
#line 12044 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st387;
		case 125: goto tr1392;
	}
	goto st366;
tr980:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st389;
st389:
	if ( ++p == pe )
		goto _out389;
case 389:
#line 12058 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st377;
		case 41: goto tr1419;
	}
	goto st342;
tr909:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st390;
st390:
	if ( ++p == pe )
		goto _out390;
case 390:
#line 12072 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st373;
		case 35: goto tr1442;
		case 41: goto tr1443;
	}
	goto st340;
tr1234:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 97 "superredcloth_inline.rl"
	{act = 4;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st822;
st822:
	if ( ++p == pe )
		goto _out822;
case 822:
#line 12093 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr53;
		case 9: goto st345;
		case 10: goto st346;
		case 13: goto st347;
		case 32: goto st345;
		case 42: goto tr57;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr53;
	goto st344;
tr324:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st823;
st823:
	if ( ++p == pe )
		goto _out823;
case 823:
#line 12115 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr1219;
		case 91: goto tr1220;
		case 123: goto tr1221;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr1218;
tr1218:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st391;
st391:
	if ( ++p == pe )
		goto _out391;
case 391:
#line 12134 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st392;
		case 10: goto st393;
		case 13: goto st394;
		case 32: goto st392;
		case 43: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st391;
st392:
	if ( ++p == pe )
		goto _out392;
case 392:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st392;
		case 10: goto st393;
		case 13: goto st394;
		case 32: goto st392;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st391;
st393:
	if ( ++p == pe )
		goto _out393;
case 393:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st392;
		case 32: goto st392;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st391;
st394:
	if ( ++p == pe )
		goto _out394;
case 394:
	if ( (*p) == 10 )
		goto st393;
	goto tr777;
tr1219:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st395;
st395:
	if ( ++p == pe )
		goto _out395;
case 395:
#line 12187 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr893;
		case 9: goto tr894;
		case 10: goto tr895;
		case 13: goto tr896;
		case 32: goto tr894;
		case 35: goto st416;
		case 41: goto st406;
		case 43: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr893;
	goto tr892;
tr892:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st396;
st396:
	if ( ++p == pe )
		goto _out396;
case 396:
#line 12209 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st397;
		case 9: goto st414;
		case 10: goto st415;
		case 13: goto st421;
		case 32: goto st414;
		case 35: goto tr670;
		case 41: goto tr671;
		case 43: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st397;
	goto st396;
tr893:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st397;
st397:
	if ( ++p == pe )
		goto _out397;
case 397:
#line 12231 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1434;
		case 41: goto tr1435;
	}
	goto st397;
tr1434:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st398;
st398:
	if ( ++p == pe )
		goto _out398;
case 398:
#line 12245 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr968;
tr968:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st399;
st399:
	if ( ++p == pe )
		goto _out399;
case 399:
#line 12257 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1415;
	goto st399;
tr1388:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st400;
tr1400:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st400;
tr1415:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st400;
tr1435:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st400;
st400:
	if ( ++p == pe )
		goto _out400;
case 400:
#line 12281 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1219;
		case 91: goto tr1220;
		case 123: goto tr1221;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1218;
tr1220:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st401;
st401:
	if ( ++p == pe )
		goto _out401;
case 401:
#line 12300 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1069;
		case 9: goto tr1070;
		case 10: goto tr1071;
		case 13: goto tr1072;
		case 32: goto tr1070;
		case 43: goto tr468;
		case 93: goto st391;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1069;
	goto tr1068;
tr1068:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st402;
st402:
	if ( ++p == pe )
		goto _out402;
case 402:
#line 12321 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st403;
		case 9: goto st404;
		case 10: goto st405;
		case 13: goto st413;
		case 32: goto st404;
		case 43: goto tr468;
		case 93: goto tr475;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st403;
	goto st402;
tr1069:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st403;
st403:
	if ( ++p == pe )
		goto _out403;
case 403:
#line 12342 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1400;
	goto st403;
tr1070:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st404;
st404:
	if ( ++p == pe )
		goto _out404;
case 404:
#line 12354 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st403;
		case 9: goto st404;
		case 10: goto st405;
		case 13: goto st413;
		case 32: goto st404;
		case 93: goto tr475;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st403;
	goto st402;
tr1071:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st405;
st405:
	if ( ++p == pe )
		goto _out405;
case 405:
#line 12374 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st403;
		case 9: goto st404;
		case 32: goto st404;
		case 93: goto tr475;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st403;
	goto st402;
tr469:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st406;
tr475:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st406;
tr566:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st406;
tr671:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st406;
st406:
	if ( ++p == pe )
		goto _out406;
case 406:
#line 12404 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st392;
		case 10: goto st393;
		case 13: goto st394;
		case 32: goto st392;
		case 40: goto tr1219;
		case 43: goto tr468;
		case 91: goto tr1220;
		case 123: goto tr1221;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1218;
tr1221:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st407;
st407:
	if ( ++p == pe )
		goto _out407;
case 407:
#line 12427 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1074;
		case 9: goto tr1075;
		case 10: goto tr1076;
		case 13: goto tr1077;
		case 32: goto tr1075;
		case 43: goto tr468;
		case 125: goto st391;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1074;
	goto tr1073;
tr1073:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st408;
st408:
	if ( ++p == pe )
		goto _out408;
case 408:
#line 12448 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st409;
		case 9: goto st410;
		case 10: goto st411;
		case 13: goto st412;
		case 32: goto st410;
		case 43: goto tr468;
		case 125: goto tr469;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st409;
	goto st408;
tr1074:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st409;
st409:
	if ( ++p == pe )
		goto _out409;
case 409:
#line 12469 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1388;
	goto st409;
tr1075:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st410;
st410:
	if ( ++p == pe )
		goto _out410;
case 410:
#line 12481 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st409;
		case 9: goto st410;
		case 10: goto st411;
		case 13: goto st412;
		case 32: goto st410;
		case 125: goto tr469;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st409;
	goto st408;
tr1076:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st411;
st411:
	if ( ++p == pe )
		goto _out411;
case 411:
#line 12501 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st409;
		case 9: goto st410;
		case 32: goto st410;
		case 125: goto tr469;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st409;
	goto st408;
tr1077:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st412;
st412:
	if ( ++p == pe )
		goto _out412;
case 412:
#line 12519 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st411;
		case 125: goto tr1388;
	}
	goto st409;
tr1072:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st413;
st413:
	if ( ++p == pe )
		goto _out413;
case 413:
#line 12533 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st405;
		case 93: goto tr1400;
	}
	goto st403;
tr894:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st414;
st414:
	if ( ++p == pe )
		goto _out414;
case 414:
#line 12547 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st397;
		case 9: goto st414;
		case 10: goto st415;
		case 13: goto st421;
		case 32: goto st414;
		case 35: goto tr670;
		case 41: goto tr671;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st397;
	goto st396;
tr895:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st415;
st415:
	if ( ++p == pe )
		goto _out415;
case 415:
#line 12568 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st397;
		case 9: goto st414;
		case 32: goto st414;
		case 35: goto tr670;
		case 41: goto tr671;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st397;
	goto st396;
tr670:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st416;
st416:
	if ( ++p == pe )
		goto _out416;
case 416:
#line 12587 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr968;
		case 9: goto tr969;
		case 10: goto tr970;
		case 13: goto tr971;
		case 32: goto tr969;
		case 41: goto st391;
		case 43: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr968;
	goto tr967;
tr967:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st417;
st417:
	if ( ++p == pe )
		goto _out417;
case 417:
#line 12608 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st399;
		case 9: goto st418;
		case 10: goto st419;
		case 13: goto st420;
		case 32: goto st418;
		case 41: goto tr566;
		case 43: goto tr468;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st399;
	goto st417;
tr969:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st418;
st418:
	if ( ++p == pe )
		goto _out418;
case 418:
#line 12629 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st399;
		case 9: goto st418;
		case 10: goto st419;
		case 13: goto st420;
		case 32: goto st418;
		case 41: goto tr566;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st399;
	goto st417;
tr970:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st419;
st419:
	if ( ++p == pe )
		goto _out419;
case 419:
#line 12649 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st399;
		case 9: goto st418;
		case 32: goto st418;
		case 41: goto tr566;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st399;
	goto st417;
tr971:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st420;
st420:
	if ( ++p == pe )
		goto _out420;
case 420:
#line 12667 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st419;
		case 41: goto tr1415;
	}
	goto st399;
tr896:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st421;
st421:
	if ( ++p == pe )
		goto _out421;
case 421:
#line 12681 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st415;
		case 35: goto tr1434;
		case 41: goto tr1435;
	}
	goto st397;
tr325:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st824;
st824:
	if ( ++p == pe )
		goto _out824;
case 824:
#line 12696 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr75;
		case 32: goto tr76;
		case 33: goto tr75;
		case 40: goto tr75;
		case 45: goto st722;
		case 62: goto st825;
		case 124: goto tr75;
		case 126: goto tr75;
	}
	if ( (*p) < 42 ) {
		if ( (*p) > 13 ) {
			if ( 35 <= (*p) && (*p) <= 38 )
				goto tr75;
		} else if ( (*p) >= 9 )
			goto tr75;
	} else if ( (*p) > 47 ) {
		if ( (*p) < 91 ) {
			if ( 58 <= (*p) && (*p) <= 64 )
				goto tr75;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr75;
		} else
			goto tr75;
	} else
		goto tr75;
	goto tr241;
st825:
	if ( ++p == pe )
		goto _out825;
case 825:
	switch( (*p) ) {
		case 0: goto tr68;
		case 32: goto tr244;
		case 33: goto tr68;
		case 40: goto tr68;
		case 45: goto st719;
		case 124: goto tr68;
		case 126: goto tr68;
	}
	if ( (*p) < 58 ) {
		if ( (*p) < 35 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr68;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto tr68;
		} else
			goto tr68;
	} else if ( (*p) > 61 ) {
		if ( (*p) < 91 ) {
			if ( 63 <= (*p) && (*p) <= 64 )
				goto tr68;
		} else if ( (*p) > 92 ) {
			if ( 94 <= (*p) && (*p) <= 96 )
				goto tr68;
		} else
			goto tr68;
	} else
		goto tr68;
	goto tr241;
tr326:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st826;
st826:
	if ( ++p == pe )
		goto _out826;
case 826:
#line 12773 "superredcloth_inline.c"
	if ( (*p) == 46 )
		goto st38;
	goto tr83;
tr252:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st827;
tr327:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st827;
st827:
	if ( ++p == pe )
		goto _out827;
case 827:
#line 12793 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 32: goto tr251;
		case 33: goto tr221;
		case 40: goto tr221;
		case 45: goto st719;
		case 124: goto tr221;
		case 126: goto tr221;
	}
	if ( (*p) < 48 ) {
		if ( (*p) < 35 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr221;
		} else if ( (*p) > 38 ) {
			if ( 42 <= (*p) && (*p) <= 47 )
				goto tr221;
		} else
			goto tr221;
	} else if ( (*p) > 57 ) {
		if ( (*p) < 63 ) {
			if ( 58 <= (*p) && (*p) <= 61 )
				goto tr221;
		} else if ( (*p) > 64 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr221;
			} else if ( (*p) >= 91 )
				goto tr221;
		} else
			goto tr221;
	} else
		goto tr252;
	goto tr241;
tr251:
#line 82 "superredcloth_inline.rl"
	{ STORE(x) }
	goto st422;
st422:
	if ( ++p == pe )
		goto _out422;
case 422:
#line 12835 "superredcloth_inline.c"
	if ( (*p) == 120 )
		goto st423;
	goto tr759;
st423:
	if ( ++p == pe )
		goto _out423;
case 423:
	if ( (*p) == 32 )
		goto st424;
	goto tr759;
st424:
	if ( ++p == pe )
		goto _out424;
case 424:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr1253;
	goto tr759;
tr1253:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st828;
st828:
	if ( ++p == pe )
		goto _out828;
case 828:
#line 12861 "superredcloth_inline.c"
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st828;
	goto tr312;
tr328:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st829;
st829:
	if ( ++p == pe )
		goto _out829;
case 829:
#line 12875 "superredcloth_inline.c"
	switch( (*p) ) {
		case 33: goto st425;
		case 47: goto st431;
		case 58: goto st434;
		case 95: goto st434;
	}
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st434;
	} else if ( (*p) >= 65 )
		goto st434;
	goto tr83;
st425:
	if ( ++p == pe )
		goto _out425;
case 425:
	if ( (*p) == 45 )
		goto st426;
	goto tr777;
st426:
	if ( ++p == pe )
		goto _out426;
case 426:
	if ( (*p) == 45 )
		goto st427;
	goto tr777;
st427:
	if ( ++p == pe )
		goto _out427;
case 427:
	if ( (*p) == 0 )
		goto tr777;
	goto st428;
st428:
	if ( ++p == pe )
		goto _out428;
case 428:
	switch( (*p) ) {
		case 0: goto tr777;
		case 45: goto st429;
	}
	goto st428;
st429:
	if ( ++p == pe )
		goto _out429;
case 429:
	if ( (*p) == 45 )
		goto st430;
	goto tr777;
st430:
	if ( ++p == pe )
		goto _out430;
case 430:
	if ( (*p) == 62 )
		goto tr1264;
	goto tr777;
st431:
	if ( ++p == pe )
		goto _out431;
case 431:
	switch( (*p) ) {
		case 58: goto st432;
		case 95: goto st432;
	}
	if ( (*p) > 90 ) {
		if ( 97 <= (*p) && (*p) <= 122 )
			goto st432;
	} else if ( (*p) >= 65 )
		goto st432;
	goto tr777;
st432:
	if ( ++p == pe )
		goto _out432;
case 432:
	switch( (*p) ) {
		case 32: goto st433;
		case 62: goto tr1257;
		case 63: goto st432;
		case 95: goto st432;
	}
	if ( (*p) < 48 ) {
		if ( (*p) > 13 ) {
			if ( 45 <= (*p) && (*p) <= 46 )
				goto st432;
		} else if ( (*p) >= 9 )
			goto st433;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st432;
		} else if ( (*p) >= 65 )
			goto st432;
	} else
		goto st432;
	goto tr777;
st433:
	if ( ++p == pe )
		goto _out433;
case 433:
	switch( (*p) ) {
		case 32: goto st433;
		case 62: goto tr1257;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto st433;
	goto tr777;
st434:
	if ( ++p == pe )
		goto _out434;
case 434:
	switch( (*p) ) {
		case 32: goto st435;
		case 47: goto st437;
		case 62: goto tr449;
		case 63: goto st434;
		case 95: goto st434;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st435;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st434;
		} else if ( (*p) >= 65 )
			goto st434;
	} else
		goto st434;
	goto tr777;
st435:
	if ( ++p == pe )
		goto _out435;
case 435:
	switch( (*p) ) {
		case 32: goto st435;
		case 47: goto st437;
		case 62: goto tr449;
		case 63: goto st436;
		case 95: goto st436;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st435;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st436;
		} else if ( (*p) >= 65 )
			goto st436;
	} else
		goto st436;
	goto tr256;
st436:
	if ( ++p == pe )
		goto _out436;
case 436:
	switch( (*p) ) {
		case 32: goto st436;
		case 47: goto st437;
		case 61: goto st438;
		case 62: goto tr449;
		case 63: goto st436;
		case 95: goto st436;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st436;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st436;
		} else if ( (*p) >= 65 )
			goto st436;
	} else
		goto st436;
	goto tr256;
st437:
	if ( ++p == pe )
		goto _out437;
case 437:
	if ( (*p) == 62 )
		goto tr1274;
	goto tr256;
st438:
	if ( ++p == pe )
		goto _out438;
case 438:
	switch( (*p) ) {
		case 32: goto st485;
		case 34: goto st448;
		case 39: goto st463;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st443;
	} else if ( (*p) >= 9 )
		goto st485;
	goto st439;
st439:
	if ( ++p == pe )
		goto _out439;
case 439:
	switch( (*p) ) {
		case 32: goto st435;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st440;
	} else if ( (*p) >= 9 )
		goto st435;
	goto st439;
st440:
	if ( ++p == pe )
		goto _out440;
case 440:
	switch( (*p) ) {
		case 32: goto st435;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
		case 63: goto st441;
		case 95: goto st441;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st440;
		} else if ( (*p) >= 9 )
			goto st435;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st441;
		} else if ( (*p) >= 65 )
			goto st441;
	} else
		goto st441;
	goto st439;
st441:
	if ( ++p == pe )
		goto _out441;
case 441:
	switch( (*p) ) {
		case 32: goto st436;
		case 47: goto st442;
		case 60: goto tr256;
		case 61: goto st443;
		case 62: goto tr449;
		case 63: goto st441;
		case 95: goto st441;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st441;
		} else if ( (*p) >= 9 )
			goto st436;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st441;
		} else if ( (*p) >= 65 )
			goto st441;
	} else
		goto st441;
	goto st439;
st442:
	if ( ++p == pe )
		goto _out442;
case 442:
	switch( (*p) ) {
		case 32: goto st435;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st440;
	} else if ( (*p) >= 9 )
		goto st435;
	goto st439;
st443:
	if ( ++p == pe )
		goto _out443;
case 443:
	switch( (*p) ) {
		case 32: goto st444;
		case 34: goto st446;
		case 39: goto st467;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st445;
	} else if ( (*p) >= 9 )
		goto st444;
	goto st439;
st444:
	if ( ++p == pe )
		goto _out444;
case 444:
	switch( (*p) ) {
		case 32: goto st444;
		case 34: goto st448;
		case 39: goto st463;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
		case 63: goto st441;
		case 95: goto st441;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st445;
		} else if ( (*p) >= 9 )
			goto st444;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st441;
		} else if ( (*p) >= 65 )
			goto st441;
	} else
		goto st441;
	goto st439;
st445:
	if ( ++p == pe )
		goto _out445;
case 445:
	switch( (*p) ) {
		case 32: goto st444;
		case 34: goto st446;
		case 39: goto st467;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
		case 63: goto st441;
		case 95: goto st441;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st445;
		} else if ( (*p) >= 9 )
			goto st444;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st441;
		} else if ( (*p) >= 65 )
			goto st441;
	} else
		goto st441;
	goto st439;
st446:
	if ( ++p == pe )
		goto _out446;
case 446:
	switch( (*p) ) {
		case 32: goto st447;
		case 34: goto st440;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st455;
	} else if ( (*p) >= 9 )
		goto st447;
	goto st446;
st447:
	if ( ++p == pe )
		goto _out447;
case 447:
	switch( (*p) ) {
		case 32: goto st447;
		case 34: goto st435;
		case 47: goto st450;
		case 62: goto tr1342;
		case 63: goto st449;
		case 95: goto st449;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st447;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st449;
		} else if ( (*p) >= 65 )
			goto st449;
	} else
		goto st449;
	goto st448;
st448:
	if ( ++p == pe )
		goto _out448;
case 448:
	if ( (*p) == 34 )
		goto st435;
	goto st448;
st449:
	if ( ++p == pe )
		goto _out449;
case 449:
	switch( (*p) ) {
		case 32: goto st449;
		case 34: goto st435;
		case 47: goto st450;
		case 61: goto st451;
		case 62: goto tr1342;
		case 63: goto st449;
		case 95: goto st449;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st449;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st449;
		} else if ( (*p) >= 65 )
			goto st449;
	} else
		goto st449;
	goto st448;
st450:
	if ( ++p == pe )
		goto _out450;
case 450:
	switch( (*p) ) {
		case 34: goto st435;
		case 62: goto tr1353;
	}
	goto st448;
tr1342:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 28;}
	goto st830;
tr1353:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 30;}
	goto st830;
st830:
	if ( ++p == pe )
		goto _out830;
case 830:
#line 13338 "superredcloth_inline.c"
	if ( (*p) == 34 )
		goto st435;
	goto st448;
st451:
	if ( ++p == pe )
		goto _out451;
case 451:
	switch( (*p) ) {
		case 32: goto st452;
		case 34: goto st447;
		case 39: goto st461;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st458;
	} else if ( (*p) >= 9 )
		goto st452;
	goto st446;
st452:
	if ( ++p == pe )
		goto _out452;
case 452:
	switch( (*p) ) {
		case 32: goto st453;
		case 34: goto st447;
		case 39: goto st461;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st454;
	} else if ( (*p) >= 9 )
		goto st453;
	goto st446;
st453:
	if ( ++p == pe )
		goto _out453;
case 453:
	switch( (*p) ) {
		case 32: goto st453;
		case 34: goto st447;
		case 39: goto st461;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
		case 63: goto st456;
		case 95: goto st456;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st454;
		} else if ( (*p) >= 9 )
			goto st453;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st456;
		} else if ( (*p) >= 65 )
			goto st456;
	} else
		goto st456;
	goto st446;
st454:
	if ( ++p == pe )
		goto _out454;
case 454:
	switch( (*p) ) {
		case 32: goto st453;
		case 34: goto st455;
		case 39: goto st459;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
		case 63: goto st456;
		case 95: goto st456;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st454;
		} else if ( (*p) >= 9 )
			goto st453;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st456;
		} else if ( (*p) >= 65 )
			goto st456;
	} else
		goto st456;
	goto st446;
st455:
	if ( ++p == pe )
		goto _out455;
case 455:
	switch( (*p) ) {
		case 32: goto st447;
		case 34: goto st440;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
		case 63: goto st456;
		case 95: goto st456;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st455;
		} else if ( (*p) >= 9 )
			goto st447;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st456;
		} else if ( (*p) >= 65 )
			goto st456;
	} else
		goto st456;
	goto st446;
st456:
	if ( ++p == pe )
		goto _out456;
case 456:
	switch( (*p) ) {
		case 32: goto st449;
		case 34: goto st440;
		case 47: goto st457;
		case 60: goto st448;
		case 61: goto st458;
		case 62: goto tr1342;
		case 63: goto st456;
		case 95: goto st456;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st456;
		} else if ( (*p) >= 9 )
			goto st449;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st456;
		} else if ( (*p) >= 65 )
			goto st456;
	} else
		goto st456;
	goto st446;
st457:
	if ( ++p == pe )
		goto _out457;
case 457:
	switch( (*p) ) {
		case 32: goto st447;
		case 34: goto st440;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st455;
	} else if ( (*p) >= 9 )
		goto st447;
	goto st446;
st458:
	if ( ++p == pe )
		goto _out458;
case 458:
	switch( (*p) ) {
		case 32: goto st453;
		case 34: goto st455;
		case 39: goto st459;
		case 47: goto st457;
		case 60: goto st448;
		case 62: goto tr1342;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st454;
	} else if ( (*p) >= 9 )
		goto st453;
	goto st446;
st459:
	if ( ++p == pe )
		goto _out459;
case 459:
	switch( (*p) ) {
		case 32: goto st460;
		case 34: goto st468;
		case 39: goto st455;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st481;
	} else if ( (*p) >= 9 )
		goto st460;
	goto st459;
st460:
	if ( ++p == pe )
		goto _out460;
case 460:
	switch( (*p) ) {
		case 32: goto st460;
		case 34: goto st462;
		case 39: goto st447;
		case 47: goto st476;
		case 62: goto tr442;
		case 63: goto st475;
		case 95: goto st475;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st460;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st475;
		} else if ( (*p) >= 65 )
			goto st475;
	} else
		goto st475;
	goto st461;
st461:
	if ( ++p == pe )
		goto _out461;
case 461:
	switch( (*p) ) {
		case 34: goto st462;
		case 39: goto st447;
	}
	goto st461;
st462:
	if ( ++p == pe )
		goto _out462;
case 462:
	switch( (*p) ) {
		case 32: goto st462;
		case 39: goto st435;
		case 47: goto st465;
		case 62: goto tr433;
		case 63: goto st464;
		case 95: goto st464;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st462;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st464;
		} else if ( (*p) >= 65 )
			goto st464;
	} else
		goto st464;
	goto st463;
st463:
	if ( ++p == pe )
		goto _out463;
case 463:
	if ( (*p) == 39 )
		goto st435;
	goto st463;
st464:
	if ( ++p == pe )
		goto _out464;
case 464:
	switch( (*p) ) {
		case 32: goto st464;
		case 39: goto st435;
		case 47: goto st465;
		case 61: goto st466;
		case 62: goto tr433;
		case 63: goto st464;
		case 95: goto st464;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st464;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st464;
		} else if ( (*p) >= 65 )
			goto st464;
	} else
		goto st464;
	goto st463;
st465:
	if ( ++p == pe )
		goto _out465;
case 465:
	switch( (*p) ) {
		case 39: goto st435;
		case 62: goto tr434;
	}
	goto st463;
tr433:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 28;}
	goto st831;
tr434:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 30;}
	goto st831;
st831:
	if ( ++p == pe )
		goto _out831;
case 831:
#line 13661 "superredcloth_inline.c"
	if ( (*p) == 39 )
		goto st435;
	goto st463;
st466:
	if ( ++p == pe )
		goto _out466;
case 466:
	switch( (*p) ) {
		case 32: goto st474;
		case 34: goto st461;
		case 39: goto st462;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st471;
	} else if ( (*p) >= 9 )
		goto st474;
	goto st467;
st467:
	if ( ++p == pe )
		goto _out467;
case 467:
	switch( (*p) ) {
		case 32: goto st462;
		case 39: goto st440;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st468;
	} else if ( (*p) >= 9 )
		goto st462;
	goto st467;
st468:
	if ( ++p == pe )
		goto _out468;
case 468:
	switch( (*p) ) {
		case 32: goto st462;
		case 39: goto st440;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
		case 63: goto st469;
		case 95: goto st469;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st468;
		} else if ( (*p) >= 9 )
			goto st462;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st469;
		} else if ( (*p) >= 65 )
			goto st469;
	} else
		goto st469;
	goto st467;
st469:
	if ( ++p == pe )
		goto _out469;
case 469:
	switch( (*p) ) {
		case 32: goto st464;
		case 39: goto st440;
		case 47: goto st470;
		case 60: goto st463;
		case 61: goto st471;
		case 62: goto tr433;
		case 63: goto st469;
		case 95: goto st469;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st469;
		} else if ( (*p) >= 9 )
			goto st464;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st469;
		} else if ( (*p) >= 65 )
			goto st469;
	} else
		goto st469;
	goto st467;
st470:
	if ( ++p == pe )
		goto _out470;
case 470:
	switch( (*p) ) {
		case 32: goto st462;
		case 39: goto st440;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st468;
	} else if ( (*p) >= 9 )
		goto st462;
	goto st467;
st471:
	if ( ++p == pe )
		goto _out471;
case 471:
	switch( (*p) ) {
		case 32: goto st472;
		case 34: goto st459;
		case 39: goto st468;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st473;
	} else if ( (*p) >= 9 )
		goto st472;
	goto st467;
st472:
	if ( ++p == pe )
		goto _out472;
case 472:
	switch( (*p) ) {
		case 32: goto st472;
		case 34: goto st461;
		case 39: goto st462;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
		case 63: goto st469;
		case 95: goto st469;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st473;
		} else if ( (*p) >= 9 )
			goto st472;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st469;
		} else if ( (*p) >= 65 )
			goto st469;
	} else
		goto st469;
	goto st467;
st473:
	if ( ++p == pe )
		goto _out473;
case 473:
	switch( (*p) ) {
		case 32: goto st472;
		case 34: goto st459;
		case 39: goto st468;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
		case 63: goto st469;
		case 95: goto st469;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st473;
		} else if ( (*p) >= 9 )
			goto st472;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st469;
		} else if ( (*p) >= 65 )
			goto st469;
	} else
		goto st469;
	goto st467;
st474:
	if ( ++p == pe )
		goto _out474;
case 474:
	switch( (*p) ) {
		case 32: goto st472;
		case 34: goto st461;
		case 39: goto st462;
		case 47: goto st470;
		case 60: goto st463;
		case 62: goto tr433;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st473;
	} else if ( (*p) >= 9 )
		goto st472;
	goto st467;
st475:
	if ( ++p == pe )
		goto _out475;
case 475:
	switch( (*p) ) {
		case 32: goto st475;
		case 34: goto st462;
		case 39: goto st447;
		case 47: goto st476;
		case 61: goto st477;
		case 62: goto tr442;
		case 63: goto st475;
		case 95: goto st475;
	}
	if ( (*p) < 45 ) {
		if ( 9 <= (*p) && (*p) <= 13 )
			goto st475;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st475;
		} else if ( (*p) >= 65 )
			goto st475;
	} else
		goto st475;
	goto st461;
st476:
	if ( ++p == pe )
		goto _out476;
case 476:
	switch( (*p) ) {
		case 34: goto st462;
		case 39: goto st447;
		case 62: goto tr1352;
	}
	goto st461;
tr442:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 28;}
	goto st832;
tr1352:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 8 "superredcloth_inline.rl"
	{act = 30;}
	goto st832;
st832:
	if ( ++p == pe )
		goto _out832;
case 832:
#line 13920 "superredcloth_inline.c"
	switch( (*p) ) {
		case 34: goto st462;
		case 39: goto st447;
	}
	goto st461;
st477:
	if ( ++p == pe )
		goto _out477;
case 477:
	switch( (*p) ) {
		case 32: goto st478;
		case 34: goto st460;
		case 39: goto st460;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st484;
	} else if ( (*p) >= 9 )
		goto st478;
	goto st459;
st478:
	if ( ++p == pe )
		goto _out478;
case 478:
	switch( (*p) ) {
		case 32: goto st479;
		case 34: goto st460;
		case 39: goto st460;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st480;
	} else if ( (*p) >= 9 )
		goto st479;
	goto st459;
st479:
	if ( ++p == pe )
		goto _out479;
case 479:
	switch( (*p) ) {
		case 32: goto st479;
		case 34: goto st460;
		case 39: goto st460;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
		case 63: goto st482;
		case 95: goto st482;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st480;
		} else if ( (*p) >= 9 )
			goto st479;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st482;
		} else if ( (*p) >= 65 )
			goto st482;
	} else
		goto st482;
	goto st459;
st480:
	if ( ++p == pe )
		goto _out480;
case 480:
	switch( (*p) ) {
		case 32: goto st479;
		case 34: goto st481;
		case 39: goto st481;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
		case 63: goto st482;
		case 95: goto st482;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st480;
		} else if ( (*p) >= 9 )
			goto st479;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st482;
		} else if ( (*p) >= 65 )
			goto st482;
	} else
		goto st482;
	goto st459;
st481:
	if ( ++p == pe )
		goto _out481;
case 481:
	switch( (*p) ) {
		case 32: goto st460;
		case 34: goto st468;
		case 39: goto st455;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
		case 63: goto st482;
		case 95: goto st482;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st481;
		} else if ( (*p) >= 9 )
			goto st460;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st482;
		} else if ( (*p) >= 65 )
			goto st482;
	} else
		goto st482;
	goto st459;
st482:
	if ( ++p == pe )
		goto _out482;
case 482:
	switch( (*p) ) {
		case 32: goto st475;
		case 34: goto st468;
		case 39: goto st455;
		case 47: goto st483;
		case 60: goto st461;
		case 61: goto st484;
		case 62: goto tr442;
		case 63: goto st482;
		case 95: goto st482;
	}
	if ( (*p) < 45 ) {
		if ( (*p) > 10 ) {
			if ( 11 <= (*p) && (*p) <= 13 )
				goto st482;
		} else if ( (*p) >= 9 )
			goto st475;
	} else if ( (*p) > 58 ) {
		if ( (*p) > 90 ) {
			if ( 97 <= (*p) && (*p) <= 122 )
				goto st482;
		} else if ( (*p) >= 65 )
			goto st482;
	} else
		goto st482;
	goto st459;
st483:
	if ( ++p == pe )
		goto _out483;
case 483:
	switch( (*p) ) {
		case 32: goto st460;
		case 34: goto st468;
		case 39: goto st455;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st481;
	} else if ( (*p) >= 9 )
		goto st460;
	goto st459;
st484:
	if ( ++p == pe )
		goto _out484;
case 484:
	switch( (*p) ) {
		case 32: goto st479;
		case 34: goto st481;
		case 39: goto st481;
		case 47: goto st483;
		case 60: goto st461;
		case 62: goto tr442;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st480;
	} else if ( (*p) >= 9 )
		goto st479;
	goto st459;
st485:
	if ( ++p == pe )
		goto _out485;
case 485:
	switch( (*p) ) {
		case 32: goto st444;
		case 34: goto st448;
		case 39: goto st463;
		case 47: goto st442;
		case 60: goto tr256;
		case 62: goto tr449;
	}
	if ( (*p) > 10 ) {
		if ( 11 <= (*p) && (*p) <= 13 )
			goto st445;
	} else if ( (*p) >= 9 )
		goto st444;
	goto st439;
tr329:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st833;
st833:
	if ( ++p == pe )
		goto _out833;
case 833:
#line 14143 "superredcloth_inline.c"
	if ( (*p) == 61 )
		goto st486;
	goto tr83;
st486:
	if ( ++p == pe )
		goto _out486;
case 486:
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1375;
tr1375:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st487;
st487:
	if ( ++p == pe )
		goto _out487;
case 487:
#line 14166 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st488;
		case 10: goto st489;
		case 13: goto st490;
		case 32: goto st488;
		case 61: goto tr811;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st487;
st488:
	if ( ++p == pe )
		goto _out488;
case 488:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st488;
		case 10: goto st489;
		case 13: goto st490;
		case 32: goto st488;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st487;
st489:
	if ( ++p == pe )
		goto _out489;
case 489:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st488;
		case 32: goto st488;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st487;
st490:
	if ( ++p == pe )
		goto _out490;
case 490:
	if ( (*p) == 10 )
		goto st489;
	goto tr777;
tr811:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st491;
st491:
	if ( ++p == pe )
		goto _out491;
case 491:
#line 14219 "superredcloth_inline.c"
	if ( (*p) == 61 )
		goto tr1265;
	goto tr777;
tr330:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st834;
st834:
	if ( ++p == pe )
		goto _out834;
case 834:
#line 14233 "superredcloth_inline.c"
	if ( (*p) == 63 )
		goto st492;
	goto tr83;
tr1387:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st492;
tr1399:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st492;
tr1414:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st492;
tr1433:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st492;
st492:
	if ( ++p == pe )
		goto _out492;
case 492:
#line 14257 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1215;
		case 91: goto tr1216;
		case 123: goto tr1217;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1214;
tr1214:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st493;
st493:
	if ( ++p == pe )
		goto _out493;
case 493:
#line 14276 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st494;
		case 10: goto st495;
		case 13: goto st496;
		case 32: goto st494;
		case 63: goto tr422;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st493;
st494:
	if ( ++p == pe )
		goto _out494;
case 494:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st494;
		case 10: goto st495;
		case 13: goto st496;
		case 32: goto st494;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st493;
st495:
	if ( ++p == pe )
		goto _out495;
case 495:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st494;
		case 32: goto st494;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st493;
st496:
	if ( ++p == pe )
		goto _out496;
case 496:
	if ( (*p) == 10 )
		goto st495;
	goto tr777;
tr422:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st497;
st497:
	if ( ++p == pe )
		goto _out497;
case 497:
#line 14329 "superredcloth_inline.c"
	if ( (*p) == 63 )
		goto tr1263;
	goto tr777;
tr1215:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st498;
st498:
	if ( ++p == pe )
		goto _out498;
case 498:
#line 14341 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr879;
		case 9: goto tr880;
		case 10: goto tr881;
		case 13: goto tr882;
		case 32: goto tr880;
		case 35: goto st505;
		case 41: goto st509;
		case 63: goto tr422;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr879;
	goto tr878;
tr878:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st499;
st499:
	if ( ++p == pe )
		goto _out499;
case 499:
#line 14363 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st500;
		case 9: goto st503;
		case 10: goto st504;
		case 13: goto st523;
		case 32: goto st503;
		case 35: goto tr655;
		case 41: goto tr656;
		case 63: goto tr422;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st500;
	goto st499;
tr879:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st500;
st500:
	if ( ++p == pe )
		goto _out500;
case 500:
#line 14385 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1432;
		case 41: goto tr1433;
	}
	goto st500;
tr1432:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st501;
st501:
	if ( ++p == pe )
		goto _out501;
case 501:
#line 14399 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr958;
tr958:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st502;
st502:
	if ( ++p == pe )
		goto _out502;
case 502:
#line 14411 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1414;
	goto st502;
tr880:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st503;
st503:
	if ( ++p == pe )
		goto _out503;
case 503:
#line 14423 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st500;
		case 9: goto st503;
		case 10: goto st504;
		case 13: goto st523;
		case 32: goto st503;
		case 35: goto tr655;
		case 41: goto tr656;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st500;
	goto st499;
tr881:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st504;
st504:
	if ( ++p == pe )
		goto _out504;
case 504:
#line 14444 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st500;
		case 9: goto st503;
		case 32: goto st503;
		case 35: goto tr655;
		case 41: goto tr656;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st500;
	goto st499;
tr655:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st505;
st505:
	if ( ++p == pe )
		goto _out505;
case 505:
#line 14463 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr958;
		case 9: goto tr959;
		case 10: goto tr960;
		case 13: goto tr961;
		case 32: goto tr959;
		case 41: goto st493;
		case 63: goto tr422;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr958;
	goto tr957;
tr957:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st506;
st506:
	if ( ++p == pe )
		goto _out506;
case 506:
#line 14484 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st502;
		case 9: goto st507;
		case 10: goto st508;
		case 13: goto st522;
		case 32: goto st507;
		case 41: goto tr554;
		case 63: goto tr422;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st502;
	goto st506;
tr959:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st507;
st507:
	if ( ++p == pe )
		goto _out507;
case 507:
#line 14505 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st502;
		case 9: goto st507;
		case 10: goto st508;
		case 13: goto st522;
		case 32: goto st507;
		case 41: goto tr554;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st502;
	goto st506;
tr960:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st508;
st508:
	if ( ++p == pe )
		goto _out508;
case 508:
#line 14525 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st502;
		case 9: goto st507;
		case 32: goto st507;
		case 41: goto tr554;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st502;
	goto st506;
tr423:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st509;
tr429:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st509;
tr554:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st509;
tr656:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st509;
st509:
	if ( ++p == pe )
		goto _out509;
case 509:
#line 14555 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st494;
		case 10: goto st495;
		case 13: goto st496;
		case 32: goto st494;
		case 40: goto tr1215;
		case 63: goto tr422;
		case 91: goto tr1216;
		case 123: goto tr1217;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1214;
tr1216:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st510;
st510:
	if ( ++p == pe )
		goto _out510;
case 510:
#line 14578 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1049;
		case 9: goto tr1050;
		case 10: goto tr1051;
		case 13: goto tr1052;
		case 32: goto tr1050;
		case 63: goto tr422;
		case 93: goto st493;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1049;
	goto tr1048;
tr1048:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st511;
st511:
	if ( ++p == pe )
		goto _out511;
case 511:
#line 14599 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st512;
		case 9: goto st513;
		case 10: goto st514;
		case 13: goto st515;
		case 32: goto st513;
		case 63: goto tr422;
		case 93: goto tr429;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st512;
	goto st511;
tr1049:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st512;
st512:
	if ( ++p == pe )
		goto _out512;
case 512:
#line 14620 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1399;
	goto st512;
tr1050:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st513;
st513:
	if ( ++p == pe )
		goto _out513;
case 513:
#line 14632 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st512;
		case 9: goto st513;
		case 10: goto st514;
		case 13: goto st515;
		case 32: goto st513;
		case 93: goto tr429;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st512;
	goto st511;
tr1051:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st514;
st514:
	if ( ++p == pe )
		goto _out514;
case 514:
#line 14652 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st512;
		case 9: goto st513;
		case 32: goto st513;
		case 93: goto tr429;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st512;
	goto st511;
tr1052:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st515;
st515:
	if ( ++p == pe )
		goto _out515;
case 515:
#line 14670 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st514;
		case 93: goto tr1399;
	}
	goto st512;
tr1217:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st516;
st516:
	if ( ++p == pe )
		goto _out516;
case 516:
#line 14684 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1054;
		case 9: goto tr1055;
		case 10: goto tr1056;
		case 13: goto tr1057;
		case 32: goto tr1055;
		case 63: goto tr422;
		case 125: goto st493;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1054;
	goto tr1053;
tr1053:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st517;
st517:
	if ( ++p == pe )
		goto _out517;
case 517:
#line 14705 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st518;
		case 9: goto st519;
		case 10: goto st520;
		case 13: goto st521;
		case 32: goto st519;
		case 63: goto tr422;
		case 125: goto tr423;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st518;
	goto st517;
tr1054:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st518;
st518:
	if ( ++p == pe )
		goto _out518;
case 518:
#line 14726 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1387;
	goto st518;
tr1055:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st519;
st519:
	if ( ++p == pe )
		goto _out519;
case 519:
#line 14738 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st518;
		case 9: goto st519;
		case 10: goto st520;
		case 13: goto st521;
		case 32: goto st519;
		case 125: goto tr423;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st518;
	goto st517;
tr1056:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st520;
st520:
	if ( ++p == pe )
		goto _out520;
case 520:
#line 14758 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st518;
		case 9: goto st519;
		case 32: goto st519;
		case 125: goto tr423;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st518;
	goto st517;
tr1057:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st521;
st521:
	if ( ++p == pe )
		goto _out521;
case 521:
#line 14776 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st520;
		case 125: goto tr1387;
	}
	goto st518;
tr961:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st522;
st522:
	if ( ++p == pe )
		goto _out522;
case 522:
#line 14790 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st508;
		case 41: goto tr1414;
	}
	goto st502;
tr882:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st523;
st523:
	if ( ++p == pe )
		goto _out523;
case 523:
#line 14804 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st504;
		case 35: goto tr1432;
		case 41: goto tr1433;
	}
	goto st500;
tr331:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st835;
st835:
	if ( ++p == pe )
		goto _out835;
case 835:
#line 14821 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr1211;
		case 91: goto tr1212;
		case 123: goto tr1213;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr1210;
tr1210:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st524;
st524:
	if ( ++p == pe )
		goto _out524;
case 524:
#line 14840 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st525;
		case 10: goto st526;
		case 13: goto st527;
		case 32: goto st525;
		case 64: goto tr409;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st524;
st525:
	if ( ++p == pe )
		goto _out525;
case 525:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st525;
		case 10: goto st526;
		case 13: goto st527;
		case 32: goto st525;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st524;
st526:
	if ( ++p == pe )
		goto _out526;
case 526:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st525;
		case 32: goto st525;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st524;
st527:
	if ( ++p == pe )
		goto _out527;
case 527:
	if ( (*p) == 10 )
		goto st526;
	goto tr777;
tr1211:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st528;
st528:
	if ( ++p == pe )
		goto _out528;
case 528:
#line 14893 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr872;
		case 9: goto tr873;
		case 10: goto tr874;
		case 13: goto tr875;
		case 32: goto tr873;
		case 35: goto st549;
		case 41: goto st539;
		case 64: goto tr409;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr872;
	goto tr871;
tr871:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st529;
st529:
	if ( ++p == pe )
		goto _out529;
case 529:
#line 14915 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st530;
		case 9: goto st547;
		case 10: goto st548;
		case 13: goto st554;
		case 32: goto st547;
		case 35: goto tr648;
		case 41: goto tr649;
		case 64: goto tr409;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st530;
	goto st529;
tr872:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st530;
st530:
	if ( ++p == pe )
		goto _out530;
case 530:
#line 14937 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1430;
		case 41: goto tr1431;
	}
	goto st530;
tr1430:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st531;
st531:
	if ( ++p == pe )
		goto _out531;
case 531:
#line 14951 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr953;
tr953:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st532;
st532:
	if ( ++p == pe )
		goto _out532;
case 532:
#line 14963 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1413;
	goto st532;
tr1386:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st533;
tr1398:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st533;
tr1413:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st533;
tr1431:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st533;
st533:
	if ( ++p == pe )
		goto _out533;
case 533:
#line 14987 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1211;
		case 91: goto tr1212;
		case 123: goto tr1213;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1210;
tr1212:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st534;
st534:
	if ( ++p == pe )
		goto _out534;
case 534:
#line 15006 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1039;
		case 9: goto tr1040;
		case 10: goto tr1041;
		case 13: goto tr1042;
		case 32: goto tr1040;
		case 64: goto tr409;
		case 93: goto st524;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1039;
	goto tr1038;
tr1038:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st535;
st535:
	if ( ++p == pe )
		goto _out535;
case 535:
#line 15027 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st536;
		case 9: goto st537;
		case 10: goto st538;
		case 13: goto st546;
		case 32: goto st537;
		case 64: goto tr409;
		case 93: goto tr416;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st536;
	goto st535;
tr1039:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st536;
st536:
	if ( ++p == pe )
		goto _out536;
case 536:
#line 15048 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1398;
	goto st536;
tr1040:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st537;
st537:
	if ( ++p == pe )
		goto _out537;
case 537:
#line 15060 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st536;
		case 9: goto st537;
		case 10: goto st538;
		case 13: goto st546;
		case 32: goto st537;
		case 93: goto tr416;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st536;
	goto st535;
tr1041:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st538;
st538:
	if ( ++p == pe )
		goto _out538;
case 538:
#line 15080 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st536;
		case 9: goto st537;
		case 32: goto st537;
		case 93: goto tr416;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st536;
	goto st535;
tr410:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st539;
tr416:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st539;
tr548:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st539;
tr649:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st539;
st539:
	if ( ++p == pe )
		goto _out539;
case 539:
#line 15110 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st525;
		case 10: goto st526;
		case 13: goto st527;
		case 32: goto st525;
		case 40: goto tr1211;
		case 64: goto tr409;
		case 91: goto tr1212;
		case 123: goto tr1213;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1210;
tr1213:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st540;
st540:
	if ( ++p == pe )
		goto _out540;
case 540:
#line 15133 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1044;
		case 9: goto tr1045;
		case 10: goto tr1046;
		case 13: goto tr1047;
		case 32: goto tr1045;
		case 64: goto tr409;
		case 125: goto st524;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1044;
	goto tr1043;
tr1043:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st541;
st541:
	if ( ++p == pe )
		goto _out541;
case 541:
#line 15154 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st542;
		case 9: goto st543;
		case 10: goto st544;
		case 13: goto st545;
		case 32: goto st543;
		case 64: goto tr409;
		case 125: goto tr410;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st542;
	goto st541;
tr1044:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st542;
st542:
	if ( ++p == pe )
		goto _out542;
case 542:
#line 15175 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1386;
	goto st542;
tr1045:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st543;
st543:
	if ( ++p == pe )
		goto _out543;
case 543:
#line 15187 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st542;
		case 9: goto st543;
		case 10: goto st544;
		case 13: goto st545;
		case 32: goto st543;
		case 125: goto tr410;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st542;
	goto st541;
tr1046:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st544;
st544:
	if ( ++p == pe )
		goto _out544;
case 544:
#line 15207 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st542;
		case 9: goto st543;
		case 32: goto st543;
		case 125: goto tr410;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st542;
	goto st541;
tr1047:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st545;
st545:
	if ( ++p == pe )
		goto _out545;
case 545:
#line 15225 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st544;
		case 125: goto tr1386;
	}
	goto st542;
tr1042:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st546;
st546:
	if ( ++p == pe )
		goto _out546;
case 546:
#line 15239 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st538;
		case 93: goto tr1398;
	}
	goto st536;
tr873:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st547;
st547:
	if ( ++p == pe )
		goto _out547;
case 547:
#line 15253 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st530;
		case 9: goto st547;
		case 10: goto st548;
		case 13: goto st554;
		case 32: goto st547;
		case 35: goto tr648;
		case 41: goto tr649;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st530;
	goto st529;
tr874:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st548;
st548:
	if ( ++p == pe )
		goto _out548;
case 548:
#line 15274 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st530;
		case 9: goto st547;
		case 32: goto st547;
		case 35: goto tr648;
		case 41: goto tr649;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st530;
	goto st529;
tr648:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st549;
st549:
	if ( ++p == pe )
		goto _out549;
case 549:
#line 15293 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr953;
		case 9: goto tr954;
		case 10: goto tr955;
		case 13: goto tr956;
		case 32: goto tr954;
		case 41: goto st524;
		case 64: goto tr409;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr953;
	goto tr952;
tr952:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st550;
st550:
	if ( ++p == pe )
		goto _out550;
case 550:
#line 15314 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st532;
		case 9: goto st551;
		case 10: goto st552;
		case 13: goto st553;
		case 32: goto st551;
		case 41: goto tr548;
		case 64: goto tr409;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st532;
	goto st550;
tr954:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st551;
st551:
	if ( ++p == pe )
		goto _out551;
case 551:
#line 15335 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st532;
		case 9: goto st551;
		case 10: goto st552;
		case 13: goto st553;
		case 32: goto st551;
		case 41: goto tr548;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st532;
	goto st550;
tr955:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st552;
st552:
	if ( ++p == pe )
		goto _out552;
case 552:
#line 15355 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st532;
		case 9: goto st551;
		case 32: goto st551;
		case 41: goto tr548;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st532;
	goto st550;
tr956:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st553;
st553:
	if ( ++p == pe )
		goto _out553;
case 553:
#line 15373 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st552;
		case 41: goto tr1413;
	}
	goto st532;
tr875:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st554;
st554:
	if ( ++p == pe )
		goto _out554;
case 554:
#line 15387 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st548;
		case 35: goto tr1430;
		case 41: goto tr1431;
	}
	goto st530;
tr332:
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st836;
st836:
	if ( ++p == pe )
		goto _out836;
case 836:
#line 15404 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 40: goto tr221;
		case 45: goto st719;
		case 124: goto tr221;
		case 126: goto tr221;
	}
	if ( (*p) < 48 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr221;
		} else if ( (*p) > 33 ) {
			if ( (*p) > 38 ) {
				if ( 42 <= (*p) && (*p) <= 47 )
					goto tr221;
			} else if ( (*p) >= 35 )
				goto tr221;
		} else
			goto tr221;
	} else if ( (*p) > 57 ) {
		if ( (*p) < 65 ) {
			if ( (*p) > 61 ) {
				if ( 63 <= (*p) && (*p) <= 64 )
					goto tr221;
			} else if ( (*p) >= 58 )
				goto tr221;
		} else if ( (*p) > 90 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr221;
			} else if ( (*p) >= 91 )
				goto tr221;
		} else
			goto st837;
	} else
		goto st837;
	goto tr241;
st837:
	if ( ++p == pe )
		goto _out837;
case 837:
	switch( (*p) ) {
		case 0: goto tr221;
		case 40: goto tr221;
		case 45: goto st719;
		case 124: goto tr221;
		case 126: goto tr221;
	}
	if ( (*p) < 48 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr221;
		} else if ( (*p) > 33 ) {
			if ( (*p) > 38 ) {
				if ( 42 <= (*p) && (*p) <= 47 )
					goto tr221;
			} else if ( (*p) >= 35 )
				goto tr221;
		} else
			goto tr221;
	} else if ( (*p) > 57 ) {
		if ( (*p) < 65 ) {
			if ( (*p) > 61 ) {
				if ( 63 <= (*p) && (*p) <= 64 )
					goto tr221;
			} else if ( (*p) >= 58 )
				goto tr221;
		} else if ( (*p) > 90 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr221;
			} else if ( (*p) >= 91 )
				goto tr221;
		} else
			goto tr254;
	} else
		goto tr254;
	goto tr241;
tr254:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
	goto st838;
st838:
	if ( ++p == pe )
		goto _out838;
case 838:
#line 15491 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr221;
		case 40: goto tr253;
		case 45: goto st719;
		case 124: goto tr221;
		case 126: goto tr221;
	}
	if ( (*p) < 48 ) {
		if ( (*p) < 32 ) {
			if ( 9 <= (*p) && (*p) <= 13 )
				goto tr221;
		} else if ( (*p) > 33 ) {
			if ( (*p) > 38 ) {
				if ( 42 <= (*p) && (*p) <= 47 )
					goto tr221;
			} else if ( (*p) >= 35 )
				goto tr221;
		} else
			goto tr221;
	} else if ( (*p) > 57 ) {
		if ( (*p) < 65 ) {
			if ( (*p) > 61 ) {
				if ( 63 <= (*p) && (*p) <= 64 )
					goto tr221;
			} else if ( (*p) >= 58 )
				goto tr221;
		} else if ( (*p) > 90 ) {
			if ( (*p) > 92 ) {
				if ( 94 <= (*p) && (*p) <= 96 )
					goto tr221;
			} else if ( (*p) >= 91 )
				goto tr221;
		} else
			goto tr254;
	} else
		goto tr254;
	goto tr241;
tr253:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st555;
st555:
	if ( ++p == pe )
		goto _out555;
case 555:
#line 15537 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr759;
	goto tr1107;
tr1107:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st556;
st556:
	if ( ++p == pe )
		goto _out556;
case 556:
#line 15549 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr585;
	goto st556;
tr333:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st839;
st839:
	if ( ++p == pe )
		goto _out839;
case 839:
#line 15565 "superredcloth_inline.c"
	switch( (*p) ) {
		case 67: goto st40;
		case 82: goto st41;
		case 84: goto st42;
		case 99: goto st40;
		case 114: goto st41;
		case 116: goto st42;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr109;
	goto tr83;
tr109:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st557;
st557:
	if ( ++p == pe )
		goto _out557;
case 557:
#line 15585 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1260;
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st557;
	goto tr777;
tr334:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st840;
st840:
	if ( ++p == pe )
		goto _out840;
case 840:
#line 15601 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr1207;
		case 91: goto tr1208;
		case 123: goto tr1209;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr1206;
tr1206:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st558;
st558:
	if ( ++p == pe )
		goto _out558;
case 558:
#line 15620 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st559;
		case 10: goto st560;
		case 13: goto st561;
		case 32: goto st559;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st558;
st559:
	if ( ++p == pe )
		goto _out559;
case 559:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st559;
		case 10: goto st560;
		case 13: goto st561;
		case 32: goto st559;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st558;
st560:
	if ( ++p == pe )
		goto _out560;
case 560:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st559;
		case 32: goto st559;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st558;
st561:
	if ( ++p == pe )
		goto _out561;
case 561:
	if ( (*p) == 10 )
		goto st560;
	goto tr777;
tr1207:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st562;
st562:
	if ( ++p == pe )
		goto _out562;
case 562:
#line 15673 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr865;
		case 9: goto tr866;
		case 10: goto tr867;
		case 13: goto tr868;
		case 32: goto tr866;
		case 35: goto st583;
		case 41: goto st573;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr865;
	goto tr864;
tr864:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st563;
st563:
	if ( ++p == pe )
		goto _out563;
case 563:
#line 15695 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st564;
		case 9: goto st581;
		case 10: goto st582;
		case 13: goto st588;
		case 32: goto st581;
		case 35: goto tr641;
		case 41: goto tr642;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st564;
	goto st563;
tr865:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st564;
st564:
	if ( ++p == pe )
		goto _out564;
case 564:
#line 15717 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1428;
		case 41: goto tr1429;
	}
	goto st564;
tr1428:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st565;
st565:
	if ( ++p == pe )
		goto _out565;
case 565:
#line 15731 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr948;
tr948:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st566;
st566:
	if ( ++p == pe )
		goto _out566;
case 566:
#line 15743 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1412;
	goto st566;
tr1385:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st567;
tr1397:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st567;
tr1412:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st567;
tr1429:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st567;
st567:
	if ( ++p == pe )
		goto _out567;
case 567:
#line 15767 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1207;
		case 91: goto tr1208;
		case 123: goto tr1209;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1206;
tr1208:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st568;
st568:
	if ( ++p == pe )
		goto _out568;
case 568:
#line 15786 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1008;
		case 9: goto tr1009;
		case 10: goto tr1010;
		case 13: goto tr1011;
		case 32: goto tr1009;
		case 93: goto st558;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1008;
	goto tr1007;
tr1007:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st569;
st569:
	if ( ++p == pe )
		goto _out569;
case 569:
#line 15807 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st570;
		case 9: goto st571;
		case 10: goto st572;
		case 13: goto st580;
		case 32: goto st571;
		case 93: goto tr403;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st570;
	goto st569;
tr1008:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st570;
st570:
	if ( ++p == pe )
		goto _out570;
case 570:
#line 15828 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1397;
	goto st570;
tr1009:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st571;
st571:
	if ( ++p == pe )
		goto _out571;
case 571:
#line 15840 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st570;
		case 9: goto st571;
		case 10: goto st572;
		case 13: goto st580;
		case 32: goto st571;
		case 93: goto tr403;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st570;
	goto st569;
tr1010:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st572;
st572:
	if ( ++p == pe )
		goto _out572;
case 572:
#line 15860 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st570;
		case 9: goto st571;
		case 32: goto st571;
		case 93: goto tr403;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st570;
	goto st569;
tr372:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st573;
tr403:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st573;
tr542:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st573;
tr642:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st573;
st573:
	if ( ++p == pe )
		goto _out573;
case 573:
#line 15890 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st559;
		case 10: goto st560;
		case 13: goto st561;
		case 32: goto st559;
		case 40: goto tr1207;
		case 91: goto tr1208;
		case 94: goto tr371;
		case 123: goto tr1209;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1206;
tr1209:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st574;
st574:
	if ( ++p == pe )
		goto _out574;
case 574:
#line 15913 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1034;
		case 9: goto tr1035;
		case 10: goto tr1036;
		case 13: goto tr1037;
		case 32: goto tr1035;
		case 94: goto tr371;
		case 125: goto st558;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1034;
	goto tr1033;
tr1033:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st575;
st575:
	if ( ++p == pe )
		goto _out575;
case 575:
#line 15934 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st576;
		case 9: goto st577;
		case 10: goto st578;
		case 13: goto st579;
		case 32: goto st577;
		case 94: goto tr371;
		case 125: goto tr372;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st576;
	goto st575;
tr1034:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st576;
st576:
	if ( ++p == pe )
		goto _out576;
case 576:
#line 15955 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1385;
	goto st576;
tr1035:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st577;
st577:
	if ( ++p == pe )
		goto _out577;
case 577:
#line 15967 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st576;
		case 9: goto st577;
		case 10: goto st578;
		case 13: goto st579;
		case 32: goto st577;
		case 125: goto tr372;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st576;
	goto st575;
tr1036:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st578;
st578:
	if ( ++p == pe )
		goto _out578;
case 578:
#line 15987 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st576;
		case 9: goto st577;
		case 32: goto st577;
		case 125: goto tr372;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st576;
	goto st575;
tr1037:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st579;
st579:
	if ( ++p == pe )
		goto _out579;
case 579:
#line 16005 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st578;
		case 125: goto tr1385;
	}
	goto st576;
tr1011:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st580;
st580:
	if ( ++p == pe )
		goto _out580;
case 580:
#line 16019 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st572;
		case 93: goto tr1397;
	}
	goto st570;
tr866:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st581;
st581:
	if ( ++p == pe )
		goto _out581;
case 581:
#line 16033 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st564;
		case 9: goto st581;
		case 10: goto st582;
		case 13: goto st588;
		case 32: goto st581;
		case 35: goto tr641;
		case 41: goto tr642;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st564;
	goto st563;
tr867:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st582;
st582:
	if ( ++p == pe )
		goto _out582;
case 582:
#line 16054 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st564;
		case 9: goto st581;
		case 32: goto st581;
		case 35: goto tr641;
		case 41: goto tr642;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st564;
	goto st563;
tr641:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st583;
st583:
	if ( ++p == pe )
		goto _out583;
case 583:
#line 16073 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr948;
		case 9: goto tr949;
		case 10: goto tr950;
		case 13: goto tr951;
		case 32: goto tr949;
		case 41: goto st558;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr948;
	goto tr947;
tr947:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st584;
st584:
	if ( ++p == pe )
		goto _out584;
case 584:
#line 16094 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st566;
		case 9: goto st585;
		case 10: goto st586;
		case 13: goto st587;
		case 32: goto st585;
		case 41: goto tr542;
		case 94: goto tr371;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st566;
	goto st584;
tr949:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st585;
st585:
	if ( ++p == pe )
		goto _out585;
case 585:
#line 16115 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st566;
		case 9: goto st585;
		case 10: goto st586;
		case 13: goto st587;
		case 32: goto st585;
		case 41: goto tr542;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st566;
	goto st584;
tr950:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st586;
st586:
	if ( ++p == pe )
		goto _out586;
case 586:
#line 16135 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st566;
		case 9: goto st585;
		case 32: goto st585;
		case 41: goto tr542;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st566;
	goto st584;
tr951:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st587;
st587:
	if ( ++p == pe )
		goto _out587;
case 587:
#line 16153 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st586;
		case 41: goto tr1412;
	}
	goto st566;
tr868:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st588;
st588:
	if ( ++p == pe )
		goto _out588;
case 588:
#line 16167 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st582;
		case 35: goto tr1428;
		case 41: goto tr1429;
	}
	goto st564;
tr335:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 9 "superredcloth_inline.rl"
	{act = 33;}
	goto st841;
st841:
	if ( ++p == pe )
		goto _out841;
case 841:
#line 16186 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr1202;
		case 91: goto tr1203;
		case 95: goto tr1309;
		case 123: goto tr1204;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr1201;
tr1201:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st589;
st589:
	if ( ++p == pe )
		goto _out589;
case 589:
#line 16206 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st590;
		case 10: goto st591;
		case 13: goto st592;
		case 32: goto st590;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st589;
st590:
	if ( ++p == pe )
		goto _out590;
case 590:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st590;
		case 10: goto st591;
		case 13: goto st592;
		case 32: goto st590;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st589;
st591:
	if ( ++p == pe )
		goto _out591;
case 591:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st590;
		case 32: goto st590;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st589;
st592:
	if ( ++p == pe )
		goto _out592;
case 592:
	if ( (*p) == 10 )
		goto st591;
	goto tr777;
tr1202:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st593;
st593:
	if ( ++p == pe )
		goto _out593;
case 593:
#line 16259 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr858;
		case 9: goto tr859;
		case 10: goto tr860;
		case 13: goto tr861;
		case 32: goto tr859;
		case 35: goto st614;
		case 41: goto st604;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr858;
	goto tr857;
tr857:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st594;
st594:
	if ( ++p == pe )
		goto _out594;
case 594:
#line 16281 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st595;
		case 9: goto st612;
		case 10: goto st613;
		case 13: goto st619;
		case 32: goto st612;
		case 35: goto tr634;
		case 41: goto tr635;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st595;
	goto st594;
tr858:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st595;
st595:
	if ( ++p == pe )
		goto _out595;
case 595:
#line 16303 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1426;
		case 41: goto tr1427;
	}
	goto st595;
tr1426:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st596;
st596:
	if ( ++p == pe )
		goto _out596;
case 596:
#line 16317 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr943;
tr943:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st597;
st597:
	if ( ++p == pe )
		goto _out597;
case 597:
#line 16329 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1411;
	goto st597;
tr1384:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st598;
tr1396:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st598;
tr1411:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st598;
tr1427:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st598;
st598:
	if ( ++p == pe )
		goto _out598;
case 598:
#line 16353 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1202;
		case 91: goto tr1203;
		case 123: goto tr1204;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1201;
tr1203:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st599;
st599:
	if ( ++p == pe )
		goto _out599;
case 599:
#line 16372 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1003;
		case 9: goto tr1004;
		case 10: goto tr1005;
		case 13: goto tr1006;
		case 32: goto tr1004;
		case 93: goto st589;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1003;
	goto tr1002;
tr1002:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st600;
st600:
	if ( ++p == pe )
		goto _out600;
case 600:
#line 16393 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st601;
		case 9: goto st602;
		case 10: goto st603;
		case 13: goto st611;
		case 32: goto st602;
		case 93: goto tr397;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st601;
	goto st600;
tr1003:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st601;
st601:
	if ( ++p == pe )
		goto _out601;
case 601:
#line 16414 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1396;
	goto st601;
tr1004:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st602;
st602:
	if ( ++p == pe )
		goto _out602;
case 602:
#line 16426 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st601;
		case 9: goto st602;
		case 10: goto st603;
		case 13: goto st611;
		case 32: goto st602;
		case 93: goto tr397;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st601;
	goto st600;
tr1005:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st603;
st603:
	if ( ++p == pe )
		goto _out603;
case 603:
#line 16446 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st601;
		case 9: goto st602;
		case 32: goto st602;
		case 93: goto tr397;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st601;
	goto st600;
tr365:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st604;
tr397:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st604;
tr536:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st604;
tr635:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st604;
st604:
	if ( ++p == pe )
		goto _out604;
case 604:
#line 16476 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st590;
		case 10: goto st591;
		case 13: goto st592;
		case 32: goto st590;
		case 40: goto tr1202;
		case 91: goto tr1203;
		case 95: goto tr364;
		case 123: goto tr1204;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1201;
tr1204:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st605;
st605:
	if ( ++p == pe )
		goto _out605;
case 605:
#line 16499 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1029;
		case 9: goto tr1030;
		case 10: goto tr1031;
		case 13: goto tr1032;
		case 32: goto tr1030;
		case 95: goto tr364;
		case 125: goto st589;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1029;
	goto tr1028;
tr1028:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st606;
st606:
	if ( ++p == pe )
		goto _out606;
case 606:
#line 16520 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st607;
		case 9: goto st608;
		case 10: goto st609;
		case 13: goto st610;
		case 32: goto st608;
		case 95: goto tr364;
		case 125: goto tr365;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st607;
	goto st606;
tr1029:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st607;
st607:
	if ( ++p == pe )
		goto _out607;
case 607:
#line 16541 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1384;
	goto st607;
tr1030:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st608;
st608:
	if ( ++p == pe )
		goto _out608;
case 608:
#line 16553 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st607;
		case 9: goto st608;
		case 10: goto st609;
		case 13: goto st610;
		case 32: goto st608;
		case 125: goto tr365;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st607;
	goto st606;
tr1031:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st609;
st609:
	if ( ++p == pe )
		goto _out609;
case 609:
#line 16573 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st607;
		case 9: goto st608;
		case 32: goto st608;
		case 125: goto tr365;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st607;
	goto st606;
tr1032:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st610;
st610:
	if ( ++p == pe )
		goto _out610;
case 610:
#line 16591 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st609;
		case 125: goto tr1384;
	}
	goto st607;
tr1006:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st611;
st611:
	if ( ++p == pe )
		goto _out611;
case 611:
#line 16605 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st603;
		case 93: goto tr1396;
	}
	goto st601;
tr859:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st612;
st612:
	if ( ++p == pe )
		goto _out612;
case 612:
#line 16619 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st595;
		case 9: goto st612;
		case 10: goto st613;
		case 13: goto st619;
		case 32: goto st612;
		case 35: goto tr634;
		case 41: goto tr635;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st595;
	goto st594;
tr860:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st613;
st613:
	if ( ++p == pe )
		goto _out613;
case 613:
#line 16640 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st595;
		case 9: goto st612;
		case 32: goto st612;
		case 35: goto tr634;
		case 41: goto tr635;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st595;
	goto st594;
tr634:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st614;
st614:
	if ( ++p == pe )
		goto _out614;
case 614:
#line 16659 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr943;
		case 9: goto tr944;
		case 10: goto tr945;
		case 13: goto tr946;
		case 32: goto tr944;
		case 41: goto st589;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr943;
	goto tr942;
tr942:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st615;
st615:
	if ( ++p == pe )
		goto _out615;
case 615:
#line 16680 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st597;
		case 9: goto st616;
		case 10: goto st617;
		case 13: goto st618;
		case 32: goto st616;
		case 41: goto tr536;
		case 95: goto tr364;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st597;
	goto st615;
tr944:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st616;
st616:
	if ( ++p == pe )
		goto _out616;
case 616:
#line 16701 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st597;
		case 9: goto st616;
		case 10: goto st617;
		case 13: goto st618;
		case 32: goto st616;
		case 41: goto tr536;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st597;
	goto st615;
tr945:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st617;
st617:
	if ( ++p == pe )
		goto _out617;
case 617:
#line 16721 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st597;
		case 9: goto st616;
		case 32: goto st616;
		case 41: goto tr536;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st597;
	goto st615;
tr946:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st618;
st618:
	if ( ++p == pe )
		goto _out618;
case 618:
#line 16739 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st617;
		case 41: goto tr1411;
	}
	goto st597;
tr861:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st619;
st619:
	if ( ++p == pe )
		goto _out619;
case 619:
#line 16753 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st613;
		case 35: goto tr1426;
		case 41: goto tr1427;
	}
	goto st595;
tr1309:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st620;
st620:
	if ( ++p == pe )
		goto _out620;
case 620:
#line 16768 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st590;
		case 10: goto st591;
		case 13: goto st592;
		case 32: goto st590;
		case 40: goto tr1198;
		case 91: goto tr1199;
		case 95: goto tr1205;
		case 123: goto tr1200;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1197;
tr1197:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st621;
st621:
	if ( ++p == pe )
		goto _out621;
case 621:
#line 16791 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st622;
		case 10: goto st623;
		case 13: goto st624;
		case 32: goto st622;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st621;
st622:
	if ( ++p == pe )
		goto _out622;
case 622:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st622;
		case 10: goto st623;
		case 13: goto st624;
		case 32: goto st622;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st621;
st623:
	if ( ++p == pe )
		goto _out623;
case 623:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st622;
		case 32: goto st622;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st621;
st624:
	if ( ++p == pe )
		goto _out624;
case 624:
	if ( (*p) == 10 )
		goto st623;
	goto tr777;
tr357:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st842;
st842:
	if ( ++p == pe )
		goto _out842;
case 842:
#line 16844 "superredcloth_inline.c"
	if ( (*p) == 95 )
		goto tr101;
	goto tr59;
tr1198:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st625;
st625:
	if ( ++p == pe )
		goto _out625;
case 625:
#line 16856 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr845;
		case 9: goto tr852;
		case 10: goto tr853;
		case 13: goto tr854;
		case 32: goto tr852;
		case 35: goto st661;
		case 41: goto st665;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr845;
	goto tr851;
tr851:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st626;
st626:
	if ( ++p == pe )
		goto _out626;
case 626:
#line 16878 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st627;
		case 9: goto st659;
		case 10: goto st660;
		case 13: goto st677;
		case 32: goto st659;
		case 35: goto tr627;
		case 41: goto tr628;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st627;
	goto st626;
tr845:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st627;
st627:
	if ( ++p == pe )
		goto _out627;
case 627:
#line 16900 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1440;
		case 41: goto tr1441;
	}
	goto st627;
tr1440:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st628;
st628:
	if ( ++p == pe )
		goto _out628;
case 628:
#line 16914 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr934;
tr934:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st629;
st629:
	if ( ++p == pe )
		goto _out629;
case 629:
#line 16926 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1418;
	goto st629;
tr1391:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st630;
tr1403:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st630;
tr1418:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st630;
tr1441:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st630;
st630:
	if ( ++p == pe )
		goto _out630;
case 630:
#line 16950 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr1194;
		case 91: goto tr1195;
		case 123: goto tr1196;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1193;
tr1193:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st631;
st631:
	if ( ++p == pe )
		goto _out631;
case 631:
#line 16969 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr256;
	goto st631;
st632:
	if ( ++p == pe )
		goto _out632;
case 632:
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr256;
	goto st631;
st633:
	if ( ++p == pe )
		goto _out633;
case 633:
	switch( (*p) ) {
		case 0: goto tr256;
		case 9: goto st632;
		case 32: goto st632;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr256;
	goto st631;
st634:
	if ( ++p == pe )
		goto _out634;
case 634:
	if ( (*p) == 10 )
		goto st633;
	goto tr256;
tr63:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st635;
st635:
	if ( ++p == pe )
		goto _out635;
case 635:
#line 17022 "superredcloth_inline.c"
	if ( (*p) == 95 )
		goto tr101;
	goto tr256;
tr1194:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st636;
st636:
	if ( ++p == pe )
		goto _out636;
case 636:
#line 17034 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr845;
		case 9: goto tr846;
		case 10: goto tr847;
		case 13: goto tr848;
		case 32: goto tr846;
		case 35: goto st640;
		case 41: goto st644;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr845;
	goto tr844;
tr844:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st637;
st637:
	if ( ++p == pe )
		goto _out637;
case 637:
#line 17056 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st627;
		case 9: goto st638;
		case 10: goto st639;
		case 13: goto st658;
		case 32: goto st638;
		case 35: goto tr621;
		case 41: goto tr622;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st627;
	goto st637;
tr846:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st638;
st638:
	if ( ++p == pe )
		goto _out638;
case 638:
#line 17078 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st627;
		case 9: goto st638;
		case 10: goto st639;
		case 13: goto st658;
		case 32: goto st638;
		case 35: goto tr621;
		case 41: goto tr622;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st627;
	goto st637;
tr847:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st639;
st639:
	if ( ++p == pe )
		goto _out639;
case 639:
#line 17099 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st627;
		case 9: goto st638;
		case 32: goto st638;
		case 35: goto tr621;
		case 41: goto tr622;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st627;
	goto st637;
tr621:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st640;
st640:
	if ( ++p == pe )
		goto _out640;
case 640:
#line 17118 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr934;
		case 9: goto tr935;
		case 10: goto tr936;
		case 13: goto tr937;
		case 32: goto tr935;
		case 41: goto st631;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr934;
	goto tr933;
tr933:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st641;
st641:
	if ( ++p == pe )
		goto _out641;
case 641:
#line 17139 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st629;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st657;
		case 32: goto st642;
		case 41: goto tr525;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st629;
	goto st641;
tr935:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st642;
st642:
	if ( ++p == pe )
		goto _out642;
case 642:
#line 17160 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st629;
		case 9: goto st642;
		case 10: goto st643;
		case 13: goto st657;
		case 32: goto st642;
		case 41: goto tr525;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st629;
	goto st641;
tr936:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st643;
st643:
	if ( ++p == pe )
		goto _out643;
case 643:
#line 17180 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st629;
		case 9: goto st642;
		case 32: goto st642;
		case 41: goto tr525;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st629;
	goto st641;
tr352:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st644;
tr386:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st644;
tr525:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st644;
tr622:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st644;
st644:
	if ( ++p == pe )
		goto _out644;
case 644:
#line 17210 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 40: goto tr1194;
		case 91: goto tr1195;
		case 95: goto tr63;
		case 123: goto tr1196;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1193;
tr1195:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st645;
st645:
	if ( ++p == pe )
		goto _out645;
case 645:
#line 17233 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr994;
		case 9: goto tr995;
		case 10: goto tr996;
		case 13: goto tr997;
		case 32: goto tr995;
		case 93: goto st631;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr994;
	goto tr993;
tr993:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st646;
st646:
	if ( ++p == pe )
		goto _out646;
case 646:
#line 17254 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st647;
		case 9: goto st648;
		case 10: goto st649;
		case 13: goto st650;
		case 32: goto st648;
		case 93: goto tr386;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st647;
	goto st646;
tr994:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st647;
st647:
	if ( ++p == pe )
		goto _out647;
case 647:
#line 17275 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1403;
	goto st647;
tr995:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st648;
st648:
	if ( ++p == pe )
		goto _out648;
case 648:
#line 17287 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st647;
		case 9: goto st648;
		case 10: goto st649;
		case 13: goto st650;
		case 32: goto st648;
		case 93: goto tr386;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st647;
	goto st646;
tr996:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st649;
st649:
	if ( ++p == pe )
		goto _out649;
case 649:
#line 17307 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st647;
		case 9: goto st648;
		case 32: goto st648;
		case 93: goto tr386;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st647;
	goto st646;
tr997:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st650;
st650:
	if ( ++p == pe )
		goto _out650;
case 650:
#line 17325 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st649;
		case 93: goto tr1403;
	}
	goto st647;
tr1196:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st651;
st651:
	if ( ++p == pe )
		goto _out651;
case 651:
#line 17339 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1020;
		case 9: goto tr1021;
		case 10: goto tr1022;
		case 13: goto tr1023;
		case 32: goto tr1021;
		case 95: goto tr63;
		case 125: goto st631;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1020;
	goto tr1019;
tr1019:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st652;
st652:
	if ( ++p == pe )
		goto _out652;
case 652:
#line 17360 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st653;
		case 9: goto st654;
		case 10: goto st655;
		case 13: goto st656;
		case 32: goto st654;
		case 95: goto tr63;
		case 125: goto tr352;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st653;
	goto st652;
tr1020:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st653;
st653:
	if ( ++p == pe )
		goto _out653;
case 653:
#line 17381 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1391;
	goto st653;
tr1021:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st654;
st654:
	if ( ++p == pe )
		goto _out654;
case 654:
#line 17393 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st653;
		case 9: goto st654;
		case 10: goto st655;
		case 13: goto st656;
		case 32: goto st654;
		case 125: goto tr352;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st653;
	goto st652;
tr1022:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st655;
st655:
	if ( ++p == pe )
		goto _out655;
case 655:
#line 17413 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st653;
		case 9: goto st654;
		case 32: goto st654;
		case 125: goto tr352;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st653;
	goto st652;
tr1023:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st656;
st656:
	if ( ++p == pe )
		goto _out656;
case 656:
#line 17431 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st655;
		case 125: goto tr1391;
	}
	goto st653;
tr937:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st657;
st657:
	if ( ++p == pe )
		goto _out657;
case 657:
#line 17445 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st643;
		case 41: goto tr1418;
	}
	goto st629;
tr848:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st658;
st658:
	if ( ++p == pe )
		goto _out658;
case 658:
#line 17459 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st639;
		case 35: goto tr1440;
		case 41: goto tr1441;
	}
	goto st627;
tr852:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st659;
st659:
	if ( ++p == pe )
		goto _out659;
case 659:
#line 17474 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st627;
		case 9: goto st659;
		case 10: goto st660;
		case 13: goto st677;
		case 32: goto st659;
		case 35: goto tr627;
		case 41: goto tr628;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st627;
	goto st626;
tr853:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st660;
st660:
	if ( ++p == pe )
		goto _out660;
case 660:
#line 17495 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st627;
		case 9: goto st659;
		case 32: goto st659;
		case 35: goto tr627;
		case 41: goto tr628;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st627;
	goto st626;
tr627:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st661;
st661:
	if ( ++p == pe )
		goto _out661;
case 661:
#line 17514 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr934;
		case 9: goto tr939;
		case 10: goto tr940;
		case 13: goto tr941;
		case 32: goto tr939;
		case 41: goto st621;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr934;
	goto tr938;
tr938:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st662;
st662:
	if ( ++p == pe )
		goto _out662;
case 662:
#line 17535 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st629;
		case 9: goto st663;
		case 10: goto st664;
		case 13: goto st676;
		case 32: goto st663;
		case 41: goto tr530;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st629;
	goto st662;
tr939:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st663;
st663:
	if ( ++p == pe )
		goto _out663;
case 663:
#line 17556 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st629;
		case 9: goto st663;
		case 10: goto st664;
		case 13: goto st676;
		case 32: goto st663;
		case 41: goto tr530;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st629;
	goto st662;
tr940:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st664;
st664:
	if ( ++p == pe )
		goto _out664;
case 664:
#line 17576 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st629;
		case 9: goto st663;
		case 32: goto st663;
		case 41: goto tr530;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st629;
	goto st662;
tr358:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st665;
tr391:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st665;
tr530:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st665;
tr628:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st665;
st665:
	if ( ++p == pe )
		goto _out665;
case 665:
#line 17606 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st622;
		case 10: goto st623;
		case 13: goto st624;
		case 32: goto st622;
		case 40: goto tr1198;
		case 91: goto tr1199;
		case 95: goto tr357;
		case 123: goto tr1200;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr1197;
tr1199:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st666;
st666:
	if ( ++p == pe )
		goto _out666;
case 666:
#line 17629 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr994;
		case 9: goto tr999;
		case 10: goto tr1000;
		case 13: goto tr1001;
		case 32: goto tr999;
		case 93: goto st621;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr994;
	goto tr998;
tr998:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st667;
st667:
	if ( ++p == pe )
		goto _out667;
case 667:
#line 17650 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st647;
		case 9: goto st668;
		case 10: goto st669;
		case 13: goto st670;
		case 32: goto st668;
		case 93: goto tr391;
		case 95: goto tr357;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st647;
	goto st667;
tr999:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st668;
st668:
	if ( ++p == pe )
		goto _out668;
case 668:
#line 17671 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st647;
		case 9: goto st668;
		case 10: goto st669;
		case 13: goto st670;
		case 32: goto st668;
		case 93: goto tr391;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st647;
	goto st667;
tr1000:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st669;
st669:
	if ( ++p == pe )
		goto _out669;
case 669:
#line 17691 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st647;
		case 9: goto st668;
		case 32: goto st668;
		case 93: goto tr391;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st647;
	goto st667;
tr1001:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st670;
st670:
	if ( ++p == pe )
		goto _out670;
case 670:
#line 17709 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st669;
		case 93: goto tr1403;
	}
	goto st647;
tr1200:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st671;
st671:
	if ( ++p == pe )
		goto _out671;
case 671:
#line 17723 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1020;
		case 9: goto tr1025;
		case 10: goto tr1026;
		case 13: goto tr1027;
		case 32: goto tr1025;
		case 95: goto tr357;
		case 125: goto st621;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1020;
	goto tr1024;
tr1024:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st672;
st672:
	if ( ++p == pe )
		goto _out672;
case 672:
#line 17744 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st653;
		case 9: goto st673;
		case 10: goto st674;
		case 13: goto st675;
		case 32: goto st673;
		case 95: goto tr357;
		case 125: goto tr358;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st653;
	goto st672;
tr1025:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st673;
st673:
	if ( ++p == pe )
		goto _out673;
case 673:
#line 17765 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st653;
		case 9: goto st673;
		case 10: goto st674;
		case 13: goto st675;
		case 32: goto st673;
		case 125: goto tr358;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st653;
	goto st672;
tr1026:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st674;
st674:
	if ( ++p == pe )
		goto _out674;
case 674:
#line 17785 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st653;
		case 9: goto st673;
		case 32: goto st673;
		case 125: goto tr358;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st653;
	goto st672;
tr1027:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st675;
st675:
	if ( ++p == pe )
		goto _out675;
case 675:
#line 17803 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st674;
		case 125: goto tr1391;
	}
	goto st653;
tr941:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st676;
st676:
	if ( ++p == pe )
		goto _out676;
case 676:
#line 17817 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st664;
		case 41: goto tr1418;
	}
	goto st629;
tr854:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st677;
st677:
	if ( ++p == pe )
		goto _out677;
case 677:
#line 17831 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st660;
		case 35: goto tr1440;
		case 41: goto tr1441;
	}
	goto st627;
tr1205:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
#line 99 "superredcloth_inline.rl"
	{act = 6;}
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st843;
st843:
	if ( ++p == pe )
		goto _out843;
case 843:
#line 17852 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr59;
		case 9: goto st632;
		case 10: goto st633;
		case 13: goto st634;
		case 32: goto st632;
		case 95: goto tr63;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr59;
	goto st631;
tr336:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st844;
st844:
	if ( ++p == pe )
		goto _out844;
case 844:
#line 17874 "superredcloth_inline.c"
	if ( (*p) == 96 )
		goto st678;
	goto tr83;
st678:
	if ( ++p == pe )
		goto _out678;
case 678:
	if ( (*p) == 96 )
		goto st679;
	goto tr777;
st679:
	if ( ++p == pe )
		goto _out679;
case 679:
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr1374;
tr1374:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st680;
st680:
	if ( ++p == pe )
		goto _out680;
case 680:
#line 17904 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st681;
		case 10: goto st682;
		case 13: goto st683;
		case 32: goto st681;
		case 96: goto tr786;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st680;
st681:
	if ( ++p == pe )
		goto _out681;
case 681:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st681;
		case 10: goto st682;
		case 13: goto st683;
		case 32: goto st681;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st680;
st682:
	if ( ++p == pe )
		goto _out682;
case 682:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st681;
		case 32: goto st681;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st680;
st683:
	if ( ++p == pe )
		goto _out683;
case 683:
	if ( (*p) == 10 )
		goto st682;
	goto tr777;
tr786:
#line 6 "superredcloth_inline.rl"
	{ STORE(text); }
	goto st684;
st684:
	if ( ++p == pe )
		goto _out684;
case 684:
#line 17957 "superredcloth_inline.c"
	if ( (*p) == 96 )
		goto st685;
	goto tr777;
st685:
	if ( ++p == pe )
		goto _out685;
case 685:
	if ( (*p) == 96 )
		goto tr1262;
	goto tr777;
tr337:
#line 1 "superredcloth_inline.rl"
	{tokend = p+1;}
#line 7 "superredcloth_inline.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st845;
st845:
	if ( ++p == pe )
		goto _out845;
case 845:
#line 17978 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr83;
		case 32: goto tr83;
		case 40: goto tr84;
		case 91: goto tr85;
		case 123: goto tr86;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr83;
	goto tr82;
tr82:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st686;
st686:
	if ( ++p == pe )
		goto _out686;
case 686:
#line 17997 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st687;
		case 10: goto st688;
		case 13: goto st689;
		case 32: goto st687;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st686;
st687:
	if ( ++p == pe )
		goto _out687;
case 687:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st687;
		case 10: goto st688;
		case 13: goto st689;
		case 32: goto st687;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto st686;
st688:
	if ( ++p == pe )
		goto _out688;
case 688:
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st687;
		case 32: goto st687;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto st686;
st689:
	if ( ++p == pe )
		goto _out689;
case 689:
	if ( (*p) == 10 )
		goto st688;
	goto tr777;
tr84:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st690;
st690:
	if ( ++p == pe )
		goto _out690;
case 690:
#line 18050 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr838;
		case 9: goto tr839;
		case 10: goto tr840;
		case 13: goto tr841;
		case 32: goto tr839;
		case 35: goto st711;
		case 41: goto st701;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr838;
	goto tr837;
tr837:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st691;
st691:
	if ( ++p == pe )
		goto _out691;
case 691:
#line 18072 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st692;
		case 9: goto st709;
		case 10: goto st710;
		case 13: goto st716;
		case 32: goto st709;
		case 35: goto tr614;
		case 41: goto tr615;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st692;
	goto st691;
tr838:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st692;
st692:
	if ( ++p == pe )
		goto _out692;
case 692:
#line 18094 "superredcloth_inline.c"
	switch( (*p) ) {
		case 35: goto tr1364;
		case 41: goto tr1365;
	}
	goto st692;
tr1364:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st693;
st693:
	if ( ++p == pe )
		goto _out693;
case 693:
#line 18108 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr777;
	goto tr929;
tr929:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st694;
st694:
	if ( ++p == pe )
		goto _out694;
case 694:
#line 18120 "superredcloth_inline.c"
	if ( (*p) == 41 )
		goto tr1356;
	goto st694;
tr1320:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st695;
tr1325:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st695;
tr1356:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st695;
tr1365:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st695;
st695:
	if ( ++p == pe )
		goto _out695;
case 695:
#line 18144 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 32: goto tr777;
		case 40: goto tr84;
		case 91: goto tr85;
		case 123: goto tr86;
	}
	if ( 9 <= (*p) && (*p) <= 13 )
		goto tr777;
	goto tr82;
tr85:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st696;
st696:
	if ( ++p == pe )
		goto _out696;
case 696:
#line 18163 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr989;
		case 9: goto tr990;
		case 10: goto tr991;
		case 13: goto tr992;
		case 32: goto tr990;
		case 93: goto st686;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr989;
	goto tr988;
tr988:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st697;
st697:
	if ( ++p == pe )
		goto _out697;
case 697:
#line 18184 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st698;
		case 9: goto st699;
		case 10: goto st700;
		case 13: goto st708;
		case 32: goto st699;
		case 93: goto tr380;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st698;
	goto st697;
tr989:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st698;
st698:
	if ( ++p == pe )
		goto _out698;
case 698:
#line 18205 "superredcloth_inline.c"
	if ( (*p) == 93 )
		goto tr1325;
	goto st698;
tr990:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st699;
st699:
	if ( ++p == pe )
		goto _out699;
case 699:
#line 18217 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st698;
		case 9: goto st699;
		case 10: goto st700;
		case 13: goto st708;
		case 32: goto st699;
		case 93: goto tr380;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st698;
	goto st697;
tr991:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st700;
st700:
	if ( ++p == pe )
		goto _out700;
case 700:
#line 18237 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st698;
		case 9: goto st699;
		case 32: goto st699;
		case 93: goto tr380;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st698;
	goto st697;
tr345:
#line 29 "superredcloth_inline.rl"
	{ STORE(style) }
	goto st701;
tr380:
#line 28 "superredcloth_inline.rl"
	{ STORE(lang) }
	goto st701;
tr519:
#line 27 "superredcloth_inline.rl"
	{STORE(id)}
	goto st701;
tr615:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st701;
st701:
	if ( ++p == pe )
		goto _out701;
case 701:
#line 18267 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr777;
		case 9: goto st687;
		case 10: goto st688;
		case 13: goto st689;
		case 32: goto st687;
		case 40: goto tr84;
		case 91: goto tr85;
		case 123: goto tr86;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr777;
	goto tr82;
tr86:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st702;
st702:
	if ( ++p == pe )
		goto _out702;
case 702:
#line 18290 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr1015;
		case 9: goto tr1016;
		case 10: goto tr1017;
		case 13: goto tr1018;
		case 32: goto tr1016;
		case 125: goto st686;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr1015;
	goto tr1014;
tr1014:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st703;
st703:
	if ( ++p == pe )
		goto _out703;
case 703:
#line 18311 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st704;
		case 9: goto st705;
		case 10: goto st706;
		case 13: goto st707;
		case 32: goto st705;
		case 125: goto tr345;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st704;
	goto st703;
tr1015:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st704;
st704:
	if ( ++p == pe )
		goto _out704;
case 704:
#line 18332 "superredcloth_inline.c"
	if ( (*p) == 125 )
		goto tr1320;
	goto st704;
tr1016:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st705;
st705:
	if ( ++p == pe )
		goto _out705;
case 705:
#line 18344 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st704;
		case 9: goto st705;
		case 10: goto st706;
		case 13: goto st707;
		case 32: goto st705;
		case 125: goto tr345;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st704;
	goto st703;
tr1017:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st706;
st706:
	if ( ++p == pe )
		goto _out706;
case 706:
#line 18364 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st704;
		case 9: goto st705;
		case 32: goto st705;
		case 125: goto tr345;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st704;
	goto st703;
tr1018:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st707;
st707:
	if ( ++p == pe )
		goto _out707;
case 707:
#line 18382 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st706;
		case 125: goto tr1320;
	}
	goto st704;
tr992:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st708;
st708:
	if ( ++p == pe )
		goto _out708;
case 708:
#line 18396 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st700;
		case 93: goto tr1325;
	}
	goto st698;
tr839:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st709;
st709:
	if ( ++p == pe )
		goto _out709;
case 709:
#line 18410 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st692;
		case 9: goto st709;
		case 10: goto st710;
		case 13: goto st716;
		case 32: goto st709;
		case 35: goto tr614;
		case 41: goto tr615;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st692;
	goto st691;
tr840:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st710;
st710:
	if ( ++p == pe )
		goto _out710;
case 710:
#line 18431 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st692;
		case 9: goto st709;
		case 32: goto st709;
		case 35: goto tr614;
		case 41: goto tr615;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st692;
	goto st691;
tr614:
#line 27 "superredcloth_inline.rl"
	{ STORE(class) }
	goto st711;
st711:
	if ( ++p == pe )
		goto _out711;
case 711:
#line 18450 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto tr929;
		case 9: goto tr930;
		case 10: goto tr931;
		case 13: goto tr932;
		case 32: goto tr930;
		case 41: goto st686;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto tr929;
	goto tr928;
tr928:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st712;
st712:
	if ( ++p == pe )
		goto _out712;
case 712:
#line 18471 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st694;
		case 9: goto st713;
		case 10: goto st714;
		case 13: goto st715;
		case 32: goto st713;
		case 41: goto tr519;
		case 126: goto tr346;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st694;
	goto st712;
tr930:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st713;
st713:
	if ( ++p == pe )
		goto _out713;
case 713:
#line 18492 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st694;
		case 9: goto st713;
		case 10: goto st714;
		case 13: goto st715;
		case 32: goto st713;
		case 41: goto tr519;
	}
	if ( 11 <= (*p) && (*p) <= 12 )
		goto st694;
	goto st712;
tr931:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st714;
st714:
	if ( ++p == pe )
		goto _out714;
case 714:
#line 18512 "superredcloth_inline.c"
	switch( (*p) ) {
		case 0: goto st694;
		case 9: goto st713;
		case 32: goto st713;
		case 41: goto tr519;
	}
	if ( 10 <= (*p) && (*p) <= 13 )
		goto st694;
	goto st712;
tr932:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st715;
st715:
	if ( ++p == pe )
		goto _out715;
case 715:
#line 18530 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st714;
		case 41: goto tr1356;
	}
	goto st694;
tr841:
#line 5 "superredcloth_inline.rl"
	{ reg = p; }
	goto st716;
st716:
	if ( ++p == pe )
		goto _out716;
case 716:
#line 18544 "superredcloth_inline.c"
	switch( (*p) ) {
		case 10: goto st710;
		case 35: goto tr1364;
		case 41: goto tr1365;
	}
	goto st692;
	}
	_out717: cs = 717; goto _out; 
	_out718: cs = 718; goto _out; 
	_out719: cs = 719; goto _out; 
	_out720: cs = 720; goto _out; 
	_out0: cs = 0; goto _out; 
	_out1: cs = 1; goto _out; 
	_out2: cs = 2; goto _out; 
	_out3: cs = 3; goto _out; 
	_out4: cs = 4; goto _out; 
	_out721: cs = 721; goto _out; 
	_out5: cs = 5; goto _out; 
	_out6: cs = 6; goto _out; 
	_out7: cs = 7; goto _out; 
	_out8: cs = 8; goto _out; 
	_out9: cs = 9; goto _out; 
	_out10: cs = 10; goto _out; 
	_out11: cs = 11; goto _out; 
	_out12: cs = 12; goto _out; 
	_out13: cs = 13; goto _out; 
	_out14: cs = 14; goto _out; 
	_out15: cs = 15; goto _out; 
	_out16: cs = 16; goto _out; 
	_out17: cs = 17; goto _out; 
	_out18: cs = 18; goto _out; 
	_out19: cs = 19; goto _out; 
	_out20: cs = 20; goto _out; 
	_out21: cs = 21; goto _out; 
	_out22: cs = 22; goto _out; 
	_out23: cs = 23; goto _out; 
	_out24: cs = 24; goto _out; 
	_out25: cs = 25; goto _out; 
	_out26: cs = 26; goto _out; 
	_out27: cs = 27; goto _out; 
	_out28: cs = 28; goto _out; 
	_out29: cs = 29; goto _out; 
	_out30: cs = 30; goto _out; 
	_out31: cs = 31; goto _out; 
	_out32: cs = 32; goto _out; 
	_out33: cs = 33; goto _out; 
	_out34: cs = 34; goto _out; 
	_out35: cs = 35; goto _out; 
	_out36: cs = 36; goto _out; 
	_out722: cs = 722; goto _out; 
	_out723: cs = 723; goto _out; 
	_out724: cs = 724; goto _out; 
	_out37: cs = 37; goto _out; 
	_out38: cs = 38; goto _out; 
	_out39: cs = 39; goto _out; 
	_out40: cs = 40; goto _out; 
	_out41: cs = 41; goto _out; 
	_out42: cs = 42; goto _out; 
	_out43: cs = 43; goto _out; 
	_out725: cs = 725; goto _out; 
	_out44: cs = 44; goto _out; 
	_out45: cs = 45; goto _out; 
	_out726: cs = 726; goto _out; 
	_out46: cs = 46; goto _out; 
	_out47: cs = 47; goto _out; 
	_out48: cs = 48; goto _out; 
	_out49: cs = 49; goto _out; 
	_out50: cs = 50; goto _out; 
	_out727: cs = 727; goto _out; 
	_out51: cs = 51; goto _out; 
	_out52: cs = 52; goto _out; 
	_out728: cs = 728; goto _out; 
	_out53: cs = 53; goto _out; 
	_out54: cs = 54; goto _out; 
	_out55: cs = 55; goto _out; 
	_out56: cs = 56; goto _out; 
	_out729: cs = 729; goto _out; 
	_out57: cs = 57; goto _out; 
	_out58: cs = 58; goto _out; 
	_out59: cs = 59; goto _out; 
	_out730: cs = 730; goto _out; 
	_out60: cs = 60; goto _out; 
	_out61: cs = 61; goto _out; 
	_out731: cs = 731; goto _out; 
	_out732: cs = 732; goto _out; 
	_out733: cs = 733; goto _out; 
	_out62: cs = 62; goto _out; 
	_out63: cs = 63; goto _out; 
	_out734: cs = 734; goto _out; 
	_out735: cs = 735; goto _out; 
	_out64: cs = 64; goto _out; 
	_out65: cs = 65; goto _out; 
	_out736: cs = 736; goto _out; 
	_out737: cs = 737; goto _out; 
	_out66: cs = 66; goto _out; 
	_out67: cs = 67; goto _out; 
	_out68: cs = 68; goto _out; 
	_out69: cs = 69; goto _out; 
	_out70: cs = 70; goto _out; 
	_out71: cs = 71; goto _out; 
	_out72: cs = 72; goto _out; 
	_out738: cs = 738; goto _out; 
	_out739: cs = 739; goto _out; 
	_out740: cs = 740; goto _out; 
	_out73: cs = 73; goto _out; 
	_out74: cs = 74; goto _out; 
	_out741: cs = 741; goto _out; 
	_out742: cs = 742; goto _out; 
	_out75: cs = 75; goto _out; 
	_out76: cs = 76; goto _out; 
	_out743: cs = 743; goto _out; 
	_out744: cs = 744; goto _out; 
	_out745: cs = 745; goto _out; 
	_out746: cs = 746; goto _out; 
	_out747: cs = 747; goto _out; 
	_out748: cs = 748; goto _out; 
	_out749: cs = 749; goto _out; 
	_out77: cs = 77; goto _out; 
	_out78: cs = 78; goto _out; 
	_out79: cs = 79; goto _out; 
	_out80: cs = 80; goto _out; 
	_out750: cs = 750; goto _out; 
	_out81: cs = 81; goto _out; 
	_out82: cs = 82; goto _out; 
	_out83: cs = 83; goto _out; 
	_out84: cs = 84; goto _out; 
	_out751: cs = 751; goto _out; 
	_out85: cs = 85; goto _out; 
	_out86: cs = 86; goto _out; 
	_out752: cs = 752; goto _out; 
	_out753: cs = 753; goto _out; 
	_out87: cs = 87; goto _out; 
	_out88: cs = 88; goto _out; 
	_out754: cs = 754; goto _out; 
	_out755: cs = 755; goto _out; 
	_out756: cs = 756; goto _out; 
	_out757: cs = 757; goto _out; 
	_out89: cs = 89; goto _out; 
	_out90: cs = 90; goto _out; 
	_out91: cs = 91; goto _out; 
	_out92: cs = 92; goto _out; 
	_out93: cs = 93; goto _out; 
	_out94: cs = 94; goto _out; 
	_out95: cs = 95; goto _out; 
	_out96: cs = 96; goto _out; 
	_out97: cs = 97; goto _out; 
	_out98: cs = 98; goto _out; 
	_out99: cs = 99; goto _out; 
	_out100: cs = 100; goto _out; 
	_out101: cs = 101; goto _out; 
	_out758: cs = 758; goto _out; 
	_out102: cs = 102; goto _out; 
	_out103: cs = 103; goto _out; 
	_out104: cs = 104; goto _out; 
	_out105: cs = 105; goto _out; 
	_out759: cs = 759; goto _out; 
	_out106: cs = 106; goto _out; 
	_out107: cs = 107; goto _out; 
	_out108: cs = 108; goto _out; 
	_out760: cs = 760; goto _out; 
	_out109: cs = 109; goto _out; 
	_out110: cs = 110; goto _out; 
	_out111: cs = 111; goto _out; 
	_out112: cs = 112; goto _out; 
	_out113: cs = 113; goto _out; 
	_out114: cs = 114; goto _out; 
	_out761: cs = 761; goto _out; 
	_out115: cs = 115; goto _out; 
	_out116: cs = 116; goto _out; 
	_out117: cs = 117; goto _out; 
	_out118: cs = 118; goto _out; 
	_out762: cs = 762; goto _out; 
	_out763: cs = 763; goto _out; 
	_out764: cs = 764; goto _out; 
	_out119: cs = 119; goto _out; 
	_out120: cs = 120; goto _out; 
	_out765: cs = 765; goto _out; 
	_out766: cs = 766; goto _out; 
	_out767: cs = 767; goto _out; 
	_out768: cs = 768; goto _out; 
	_out769: cs = 769; goto _out; 
	_out121: cs = 121; goto _out; 
	_out770: cs = 770; goto _out; 
	_out122: cs = 122; goto _out; 
	_out123: cs = 123; goto _out; 
	_out124: cs = 124; goto _out; 
	_out125: cs = 125; goto _out; 
	_out126: cs = 126; goto _out; 
	_out127: cs = 127; goto _out; 
	_out128: cs = 128; goto _out; 
	_out129: cs = 129; goto _out; 
	_out771: cs = 771; goto _out; 
	_out130: cs = 130; goto _out; 
	_out131: cs = 131; goto _out; 
	_out132: cs = 132; goto _out; 
	_out772: cs = 772; goto _out; 
	_out133: cs = 133; goto _out; 
	_out134: cs = 134; goto _out; 
	_out135: cs = 135; goto _out; 
	_out773: cs = 773; goto _out; 
	_out774: cs = 774; goto _out; 
	_out136: cs = 136; goto _out; 
	_out137: cs = 137; goto _out; 
	_out775: cs = 775; goto _out; 
	_out776: cs = 776; goto _out; 
	_out777: cs = 777; goto _out; 
	_out778: cs = 778; goto _out; 
	_out779: cs = 779; goto _out; 
	_out780: cs = 780; goto _out; 
	_out138: cs = 138; goto _out; 
	_out139: cs = 139; goto _out; 
	_out781: cs = 781; goto _out; 
	_out782: cs = 782; goto _out; 
	_out783: cs = 783; goto _out; 
	_out784: cs = 784; goto _out; 
	_out785: cs = 785; goto _out; 
	_out140: cs = 140; goto _out; 
	_out141: cs = 141; goto _out; 
	_out142: cs = 142; goto _out; 
	_out143: cs = 143; goto _out; 
	_out144: cs = 144; goto _out; 
	_out145: cs = 145; goto _out; 
	_out146: cs = 146; goto _out; 
	_out147: cs = 147; goto _out; 
	_out148: cs = 148; goto _out; 
	_out149: cs = 149; goto _out; 
	_out150: cs = 150; goto _out; 
	_out151: cs = 151; goto _out; 
	_out152: cs = 152; goto _out; 
	_out153: cs = 153; goto _out; 
	_out786: cs = 786; goto _out; 
	_out154: cs = 154; goto _out; 
	_out155: cs = 155; goto _out; 
	_out156: cs = 156; goto _out; 
	_out157: cs = 157; goto _out; 
	_out787: cs = 787; goto _out; 
	_out788: cs = 788; goto _out; 
	_out789: cs = 789; goto _out; 
	_out158: cs = 158; goto _out; 
	_out159: cs = 159; goto _out; 
	_out160: cs = 160; goto _out; 
	_out161: cs = 161; goto _out; 
	_out790: cs = 790; goto _out; 
	_out791: cs = 791; goto _out; 
	_out162: cs = 162; goto _out; 
	_out163: cs = 163; goto _out; 
	_out792: cs = 792; goto _out; 
	_out793: cs = 793; goto _out; 
	_out794: cs = 794; goto _out; 
	_out164: cs = 164; goto _out; 
	_out165: cs = 165; goto _out; 
	_out166: cs = 166; goto _out; 
	_out167: cs = 167; goto _out; 
	_out795: cs = 795; goto _out; 
	_out168: cs = 168; goto _out; 
	_out169: cs = 169; goto _out; 
	_out170: cs = 170; goto _out; 
	_out171: cs = 171; goto _out; 
	_out172: cs = 172; goto _out; 
	_out796: cs = 796; goto _out; 
	_out173: cs = 173; goto _out; 
	_out797: cs = 797; goto _out; 
	_out798: cs = 798; goto _out; 
	_out799: cs = 799; goto _out; 
	_out174: cs = 174; goto _out; 
	_out175: cs = 175; goto _out; 
	_out176: cs = 176; goto _out; 
	_out177: cs = 177; goto _out; 
	_out800: cs = 800; goto _out; 
	_out178: cs = 178; goto _out; 
	_out801: cs = 801; goto _out; 
	_out179: cs = 179; goto _out; 
	_out180: cs = 180; goto _out; 
	_out181: cs = 181; goto _out; 
	_out182: cs = 182; goto _out; 
	_out183: cs = 183; goto _out; 
	_out802: cs = 802; goto _out; 
	_out803: cs = 803; goto _out; 
	_out184: cs = 184; goto _out; 
	_out185: cs = 185; goto _out; 
	_out186: cs = 186; goto _out; 
	_out187: cs = 187; goto _out; 
	_out804: cs = 804; goto _out; 
	_out188: cs = 188; goto _out; 
	_out189: cs = 189; goto _out; 
	_out805: cs = 805; goto _out; 
	_out190: cs = 190; goto _out; 
	_out191: cs = 191; goto _out; 
	_out192: cs = 192; goto _out; 
	_out193: cs = 193; goto _out; 
	_out806: cs = 806; goto _out; 
	_out194: cs = 194; goto _out; 
	_out195: cs = 195; goto _out; 
	_out196: cs = 196; goto _out; 
	_out807: cs = 807; goto _out; 
	_out197: cs = 197; goto _out; 
	_out198: cs = 198; goto _out; 
	_out199: cs = 199; goto _out; 
	_out200: cs = 200; goto _out; 
	_out201: cs = 201; goto _out; 
	_out202: cs = 202; goto _out; 
	_out203: cs = 203; goto _out; 
	_out204: cs = 204; goto _out; 
	_out205: cs = 205; goto _out; 
	_out206: cs = 206; goto _out; 
	_out207: cs = 207; goto _out; 
	_out208: cs = 208; goto _out; 
	_out209: cs = 209; goto _out; 
	_out808: cs = 808; goto _out; 
	_out809: cs = 809; goto _out; 
	_out810: cs = 810; goto _out; 
	_out210: cs = 210; goto _out; 
	_out211: cs = 211; goto _out; 
	_out212: cs = 212; goto _out; 
	_out213: cs = 213; goto _out; 
	_out214: cs = 214; goto _out; 
	_out215: cs = 215; goto _out; 
	_out216: cs = 216; goto _out; 
	_out217: cs = 217; goto _out; 
	_out218: cs = 218; goto _out; 
	_out219: cs = 219; goto _out; 
	_out220: cs = 220; goto _out; 
	_out221: cs = 221; goto _out; 
	_out222: cs = 222; goto _out; 
	_out223: cs = 223; goto _out; 
	_out224: cs = 224; goto _out; 
	_out225: cs = 225; goto _out; 
	_out226: cs = 226; goto _out; 
	_out227: cs = 227; goto _out; 
	_out228: cs = 228; goto _out; 
	_out229: cs = 229; goto _out; 
	_out230: cs = 230; goto _out; 
	_out231: cs = 231; goto _out; 
	_out232: cs = 232; goto _out; 
	_out233: cs = 233; goto _out; 
	_out234: cs = 234; goto _out; 
	_out235: cs = 235; goto _out; 
	_out236: cs = 236; goto _out; 
	_out237: cs = 237; goto _out; 
	_out238: cs = 238; goto _out; 
	_out239: cs = 239; goto _out; 
	_out240: cs = 240; goto _out; 
	_out241: cs = 241; goto _out; 
	_out242: cs = 242; goto _out; 
	_out243: cs = 243; goto _out; 
	_out244: cs = 244; goto _out; 
	_out245: cs = 245; goto _out; 
	_out246: cs = 246; goto _out; 
	_out247: cs = 247; goto _out; 
	_out248: cs = 248; goto _out; 
	_out249: cs = 249; goto _out; 
	_out250: cs = 250; goto _out; 
	_out251: cs = 251; goto _out; 
	_out252: cs = 252; goto _out; 
	_out253: cs = 253; goto _out; 
	_out254: cs = 254; goto _out; 
	_out255: cs = 255; goto _out; 
	_out256: cs = 256; goto _out; 
	_out257: cs = 257; goto _out; 
	_out258: cs = 258; goto _out; 
	_out259: cs = 259; goto _out; 
	_out260: cs = 260; goto _out; 
	_out261: cs = 261; goto _out; 
	_out262: cs = 262; goto _out; 
	_out263: cs = 263; goto _out; 
	_out264: cs = 264; goto _out; 
	_out265: cs = 265; goto _out; 
	_out266: cs = 266; goto _out; 
	_out811: cs = 811; goto _out; 
	_out812: cs = 812; goto _out; 
	_out813: cs = 813; goto _out; 
	_out814: cs = 814; goto _out; 
	_out815: cs = 815; goto _out; 
	_out267: cs = 267; goto _out; 
	_out268: cs = 268; goto _out; 
	_out269: cs = 269; goto _out; 
	_out270: cs = 270; goto _out; 
	_out271: cs = 271; goto _out; 
	_out272: cs = 272; goto _out; 
	_out273: cs = 273; goto _out; 
	_out274: cs = 274; goto _out; 
	_out275: cs = 275; goto _out; 
	_out276: cs = 276; goto _out; 
	_out277: cs = 277; goto _out; 
	_out278: cs = 278; goto _out; 
	_out279: cs = 279; goto _out; 
	_out280: cs = 280; goto _out; 
	_out281: cs = 281; goto _out; 
	_out282: cs = 282; goto _out; 
	_out283: cs = 283; goto _out; 
	_out284: cs = 284; goto _out; 
	_out285: cs = 285; goto _out; 
	_out286: cs = 286; goto _out; 
	_out287: cs = 287; goto _out; 
	_out288: cs = 288; goto _out; 
	_out289: cs = 289; goto _out; 
	_out290: cs = 290; goto _out; 
	_out291: cs = 291; goto _out; 
	_out292: cs = 292; goto _out; 
	_out293: cs = 293; goto _out; 
	_out294: cs = 294; goto _out; 
	_out295: cs = 295; goto _out; 
	_out296: cs = 296; goto _out; 
	_out297: cs = 297; goto _out; 
	_out816: cs = 816; goto _out; 
	_out817: cs = 817; goto _out; 
	_out298: cs = 298; goto _out; 
	_out299: cs = 299; goto _out; 
	_out300: cs = 300; goto _out; 
	_out301: cs = 301; goto _out; 
	_out818: cs = 818; goto _out; 
	_out819: cs = 819; goto _out; 
	_out820: cs = 820; goto _out; 
	_out302: cs = 302; goto _out; 
	_out303: cs = 303; goto _out; 
	_out304: cs = 304; goto _out; 
	_out305: cs = 305; goto _out; 
	_out306: cs = 306; goto _out; 
	_out307: cs = 307; goto _out; 
	_out308: cs = 308; goto _out; 
	_out309: cs = 309; goto _out; 
	_out310: cs = 310; goto _out; 
	_out311: cs = 311; goto _out; 
	_out312: cs = 312; goto _out; 
	_out313: cs = 313; goto _out; 
	_out314: cs = 314; goto _out; 
	_out315: cs = 315; goto _out; 
	_out316: cs = 316; goto _out; 
	_out317: cs = 317; goto _out; 
	_out318: cs = 318; goto _out; 
	_out319: cs = 319; goto _out; 
	_out320: cs = 320; goto _out; 
	_out321: cs = 321; goto _out; 
	_out322: cs = 322; goto _out; 
	_out323: cs = 323; goto _out; 
	_out324: cs = 324; goto _out; 
	_out325: cs = 325; goto _out; 
	_out326: cs = 326; goto _out; 
	_out327: cs = 327; goto _out; 
	_out328: cs = 328; goto _out; 
	_out329: cs = 329; goto _out; 
	_out330: cs = 330; goto _out; 
	_out331: cs = 331; goto _out; 
	_out332: cs = 332; goto _out; 
	_out333: cs = 333; goto _out; 
	_out334: cs = 334; goto _out; 
	_out335: cs = 335; goto _out; 
	_out336: cs = 336; goto _out; 
	_out337: cs = 337; goto _out; 
	_out821: cs = 821; goto _out; 
	_out338: cs = 338; goto _out; 
	_out339: cs = 339; goto _out; 
	_out340: cs = 340; goto _out; 
	_out341: cs = 341; goto _out; 
	_out342: cs = 342; goto _out; 
	_out343: cs = 343; goto _out; 
	_out344: cs = 344; goto _out; 
	_out345: cs = 345; goto _out; 
	_out346: cs = 346; goto _out; 
	_out347: cs = 347; goto _out; 
	_out348: cs = 348; goto _out; 
	_out349: cs = 349; goto _out; 
	_out350: cs = 350; goto _out; 
	_out351: cs = 351; goto _out; 
	_out352: cs = 352; goto _out; 
	_out353: cs = 353; goto _out; 
	_out354: cs = 354; goto _out; 
	_out355: cs = 355; goto _out; 
	_out356: cs = 356; goto _out; 
	_out357: cs = 357; goto _out; 
	_out358: cs = 358; goto _out; 
	_out359: cs = 359; goto _out; 
	_out360: cs = 360; goto _out; 
	_out361: cs = 361; goto _out; 
	_out362: cs = 362; goto _out; 
	_out363: cs = 363; goto _out; 
	_out364: cs = 364; goto _out; 
	_out365: cs = 365; goto _out; 
	_out366: cs = 366; goto _out; 
	_out367: cs = 367; goto _out; 
	_out368: cs = 368; goto _out; 
	_out369: cs = 369; goto _out; 
	_out370: cs = 370; goto _out; 
	_out371: cs = 371; goto _out; 
	_out372: cs = 372; goto _out; 
	_out373: cs = 373; goto _out; 
	_out374: cs = 374; goto _out; 
	_out375: cs = 375; goto _out; 
	_out376: cs = 376; goto _out; 
	_out377: cs = 377; goto _out; 
	_out378: cs = 378; goto _out; 
	_out379: cs = 379; goto _out; 
	_out380: cs = 380; goto _out; 
	_out381: cs = 381; goto _out; 
	_out382: cs = 382; goto _out; 
	_out383: cs = 383; goto _out; 
	_out384: cs = 384; goto _out; 
	_out385: cs = 385; goto _out; 
	_out386: cs = 386; goto _out; 
	_out387: cs = 387; goto _out; 
	_out388: cs = 388; goto _out; 
	_out389: cs = 389; goto _out; 
	_out390: cs = 390; goto _out; 
	_out822: cs = 822; goto _out; 
	_out823: cs = 823; goto _out; 
	_out391: cs = 391; goto _out; 
	_out392: cs = 392; goto _out; 
	_out393: cs = 393; goto _out; 
	_out394: cs = 394; goto _out; 
	_out395: cs = 395; goto _out; 
	_out396: cs = 396; goto _out; 
	_out397: cs = 397; goto _out; 
	_out398: cs = 398; goto _out; 
	_out399: cs = 399; goto _out; 
	_out400: cs = 400; goto _out; 
	_out401: cs = 401; goto _out; 
	_out402: cs = 402; goto _out; 
	_out403: cs = 403; goto _out; 
	_out404: cs = 404; goto _out; 
	_out405: cs = 405; goto _out; 
	_out406: cs = 406; goto _out; 
	_out407: cs = 407; goto _out; 
	_out408: cs = 408; goto _out; 
	_out409: cs = 409; goto _out; 
	_out410: cs = 410; goto _out; 
	_out411: cs = 411; goto _out; 
	_out412: cs = 412; goto _out; 
	_out413: cs = 413; goto _out; 
	_out414: cs = 414; goto _out; 
	_out415: cs = 415; goto _out; 
	_out416: cs = 416; goto _out; 
	_out417: cs = 417; goto _out; 
	_out418: cs = 418; goto _out; 
	_out419: cs = 419; goto _out; 
	_out420: cs = 420; goto _out; 
	_out421: cs = 421; goto _out; 
	_out824: cs = 824; goto _out; 
	_out825: cs = 825; goto _out; 
	_out826: cs = 826; goto _out; 
	_out827: cs = 827; goto _out; 
	_out422: cs = 422; goto _out; 
	_out423: cs = 423; goto _out; 
	_out424: cs = 424; goto _out; 
	_out828: cs = 828; goto _out; 
	_out829: cs = 829; goto _out; 
	_out425: cs = 425; goto _out; 
	_out426: cs = 426; goto _out; 
	_out427: cs = 427; goto _out; 
	_out428: cs = 428; goto _out; 
	_out429: cs = 429; goto _out; 
	_out430: cs = 430; goto _out; 
	_out431: cs = 431; goto _out; 
	_out432: cs = 432; goto _out; 
	_out433: cs = 433; goto _out; 
	_out434: cs = 434; goto _out; 
	_out435: cs = 435; goto _out; 
	_out436: cs = 436; goto _out; 
	_out437: cs = 437; goto _out; 
	_out438: cs = 438; goto _out; 
	_out439: cs = 439; goto _out; 
	_out440: cs = 440; goto _out; 
	_out441: cs = 441; goto _out; 
	_out442: cs = 442; goto _out; 
	_out443: cs = 443; goto _out; 
	_out444: cs = 444; goto _out; 
	_out445: cs = 445; goto _out; 
	_out446: cs = 446; goto _out; 
	_out447: cs = 447; goto _out; 
	_out448: cs = 448; goto _out; 
	_out449: cs = 449; goto _out; 
	_out450: cs = 450; goto _out; 
	_out830: cs = 830; goto _out; 
	_out451: cs = 451; goto _out; 
	_out452: cs = 452; goto _out; 
	_out453: cs = 453; goto _out; 
	_out454: cs = 454; goto _out; 
	_out455: cs = 455; goto _out; 
	_out456: cs = 456; goto _out; 
	_out457: cs = 457; goto _out; 
	_out458: cs = 458; goto _out; 
	_out459: cs = 459; goto _out; 
	_out460: cs = 460; goto _out; 
	_out461: cs = 461; goto _out; 
	_out462: cs = 462; goto _out; 
	_out463: cs = 463; goto _out; 
	_out464: cs = 464; goto _out; 
	_out465: cs = 465; goto _out; 
	_out831: cs = 831; goto _out; 
	_out466: cs = 466; goto _out; 
	_out467: cs = 467; goto _out; 
	_out468: cs = 468; goto _out; 
	_out469: cs = 469; goto _out; 
	_out470: cs = 470; goto _out; 
	_out471: cs = 471; goto _out; 
	_out472: cs = 472; goto _out; 
	_out473: cs = 473; goto _out; 
	_out474: cs = 474; goto _out; 
	_out475: cs = 475; goto _out; 
	_out476: cs = 476; goto _out; 
	_out832: cs = 832; goto _out; 
	_out477: cs = 477; goto _out; 
	_out478: cs = 478; goto _out; 
	_out479: cs = 479; goto _out; 
	_out480: cs = 480; goto _out; 
	_out481: cs = 481; goto _out; 
	_out482: cs = 482; goto _out; 
	_out483: cs = 483; goto _out; 
	_out484: cs = 484; goto _out; 
	_out485: cs = 485; goto _out; 
	_out833: cs = 833; goto _out; 
	_out486: cs = 486; goto _out; 
	_out487: cs = 487; goto _out; 
	_out488: cs = 488; goto _out; 
	_out489: cs = 489; goto _out; 
	_out490: cs = 490; goto _out; 
	_out491: cs = 491; goto _out; 
	_out834: cs = 834; goto _out; 
	_out492: cs = 492; goto _out; 
	_out493: cs = 493; goto _out; 
	_out494: cs = 494; goto _out; 
	_out495: cs = 495; goto _out; 
	_out496: cs = 496; goto _out; 
	_out497: cs = 497; goto _out; 
	_out498: cs = 498; goto _out; 
	_out499: cs = 499; goto _out; 
	_out500: cs = 500; goto _out; 
	_out501: cs = 501; goto _out; 
	_out502: cs = 502; goto _out; 
	_out503: cs = 503; goto _out; 
	_out504: cs = 504; goto _out; 
	_out505: cs = 505; goto _out; 
	_out506: cs = 506; goto _out; 
	_out507: cs = 507; goto _out; 
	_out508: cs = 508; goto _out; 
	_out509: cs = 509; goto _out; 
	_out510: cs = 510; goto _out; 
	_out511: cs = 511; goto _out; 
	_out512: cs = 512; goto _out; 
	_out513: cs = 513; goto _out; 
	_out514: cs = 514; goto _out; 
	_out515: cs = 515; goto _out; 
	_out516: cs = 516; goto _out; 
	_out517: cs = 517; goto _out; 
	_out518: cs = 518; goto _out; 
	_out519: cs = 519; goto _out; 
	_out520: cs = 520; goto _out; 
	_out521: cs = 521; goto _out; 
	_out522: cs = 522; goto _out; 
	_out523: cs = 523; goto _out; 
	_out835: cs = 835; goto _out; 
	_out524: cs = 524; goto _out; 
	_out525: cs = 525; goto _out; 
	_out526: cs = 526; goto _out; 
	_out527: cs = 527; goto _out; 
	_out528: cs = 528; goto _out; 
	_out529: cs = 529; goto _out; 
	_out530: cs = 530; goto _out; 
	_out531: cs = 531; goto _out; 
	_out532: cs = 532; goto _out; 
	_out533: cs = 533; goto _out; 
	_out534: cs = 534; goto _out; 
	_out535: cs = 535; goto _out; 
	_out536: cs = 536; goto _out; 
	_out537: cs = 537; goto _out; 
	_out538: cs = 538; goto _out; 
	_out539: cs = 539; goto _out; 
	_out540: cs = 540; goto _out; 
	_out541: cs = 541; goto _out; 
	_out542: cs = 542; goto _out; 
	_out543: cs = 543; goto _out; 
	_out544: cs = 544; goto _out; 
	_out545: cs = 545; goto _out; 
	_out546: cs = 546; goto _out; 
	_out547: cs = 547; goto _out; 
	_out548: cs = 548; goto _out; 
	_out549: cs = 549; goto _out; 
	_out550: cs = 550; goto _out; 
	_out551: cs = 551; goto _out; 
	_out552: cs = 552; goto _out; 
	_out553: cs = 553; goto _out; 
	_out554: cs = 554; goto _out; 
	_out836: cs = 836; goto _out; 
	_out837: cs = 837; goto _out; 
	_out838: cs = 838; goto _out; 
	_out555: cs = 555; goto _out; 
	_out556: cs = 556; goto _out; 
	_out839: cs = 839; goto _out; 
	_out557: cs = 557; goto _out; 
	_out840: cs = 840; goto _out; 
	_out558: cs = 558; goto _out; 
	_out559: cs = 559; goto _out; 
	_out560: cs = 560; goto _out; 
	_out561: cs = 561; goto _out; 
	_out562: cs = 562; goto _out; 
	_out563: cs = 563; goto _out; 
	_out564: cs = 564; goto _out; 
	_out565: cs = 565; goto _out; 
	_out566: cs = 566; goto _out; 
	_out567: cs = 567; goto _out; 
	_out568: cs = 568; goto _out; 
	_out569: cs = 569; goto _out; 
	_out570: cs = 570; goto _out; 
	_out571: cs = 571; goto _out; 
	_out572: cs = 572; goto _out; 
	_out573: cs = 573; goto _out; 
	_out574: cs = 574; goto _out; 
	_out575: cs = 575; goto _out; 
	_out576: cs = 576; goto _out; 
	_out577: cs = 577; goto _out; 
	_out578: cs = 578; goto _out; 
	_out579: cs = 579; goto _out; 
	_out580: cs = 580; goto _out; 
	_out581: cs = 581; goto _out; 
	_out582: cs = 582; goto _out; 
	_out583: cs = 583; goto _out; 
	_out584: cs = 584; goto _out; 
	_out585: cs = 585; goto _out; 
	_out586: cs = 586; goto _out; 
	_out587: cs = 587; goto _out; 
	_out588: cs = 588; goto _out; 
	_out841: cs = 841; goto _out; 
	_out589: cs = 589; goto _out; 
	_out590: cs = 590; goto _out; 
	_out591: cs = 591; goto _out; 
	_out592: cs = 592; goto _out; 
	_out593: cs = 593; goto _out; 
	_out594: cs = 594; goto _out; 
	_out595: cs = 595; goto _out; 
	_out596: cs = 596; goto _out; 
	_out597: cs = 597; goto _out; 
	_out598: cs = 598; goto _out; 
	_out599: cs = 599; goto _out; 
	_out600: cs = 600; goto _out; 
	_out601: cs = 601; goto _out; 
	_out602: cs = 602; goto _out; 
	_out603: cs = 603; goto _out; 
	_out604: cs = 604; goto _out; 
	_out605: cs = 605; goto _out; 
	_out606: cs = 606; goto _out; 
	_out607: cs = 607; goto _out; 
	_out608: cs = 608; goto _out; 
	_out609: cs = 609; goto _out; 
	_out610: cs = 610; goto _out; 
	_out611: cs = 611; goto _out; 
	_out612: cs = 612; goto _out; 
	_out613: cs = 613; goto _out; 
	_out614: cs = 614; goto _out; 
	_out615: cs = 615; goto _out; 
	_out616: cs = 616; goto _out; 
	_out617: cs = 617; goto _out; 
	_out618: cs = 618; goto _out; 
	_out619: cs = 619; goto _out; 
	_out620: cs = 620; goto _out; 
	_out621: cs = 621; goto _out; 
	_out622: cs = 622; goto _out; 
	_out623: cs = 623; goto _out; 
	_out624: cs = 624; goto _out; 
	_out842: cs = 842; goto _out; 
	_out625: cs = 625; goto _out; 
	_out626: cs = 626; goto _out; 
	_out627: cs = 627; goto _out; 
	_out628: cs = 628; goto _out; 
	_out629: cs = 629; goto _out; 
	_out630: cs = 630; goto _out; 
	_out631: cs = 631; goto _out; 
	_out632: cs = 632; goto _out; 
	_out633: cs = 633; goto _out; 
	_out634: cs = 634; goto _out; 
	_out635: cs = 635; goto _out; 
	_out636: cs = 636; goto _out; 
	_out637: cs = 637; goto _out; 
	_out638: cs = 638; goto _out; 
	_out639: cs = 639; goto _out; 
	_out640: cs = 640; goto _out; 
	_out641: cs = 641; goto _out; 
	_out642: cs = 642; goto _out; 
	_out643: cs = 643; goto _out; 
	_out644: cs = 644; goto _out; 
	_out645: cs = 645; goto _out; 
	_out646: cs = 646; goto _out; 
	_out647: cs = 647; goto _out; 
	_out648: cs = 648; goto _out; 
	_out649: cs = 649; goto _out; 
	_out650: cs = 650; goto _out; 
	_out651: cs = 651; goto _out; 
	_out652: cs = 652; goto _out; 
	_out653: cs = 653; goto _out; 
	_out654: cs = 654; goto _out; 
	_out655: cs = 655; goto _out; 
	_out656: cs = 656; goto _out; 
	_out657: cs = 657; goto _out; 
	_out658: cs = 658; goto _out; 
	_out659: cs = 659; goto _out; 
	_out660: cs = 660; goto _out; 
	_out661: cs = 661; goto _out; 
	_out662: cs = 662; goto _out; 
	_out663: cs = 663; goto _out; 
	_out664: cs = 664; goto _out; 
	_out665: cs = 665; goto _out; 
	_out666: cs = 666; goto _out; 
	_out667: cs = 667; goto _out; 
	_out668: cs = 668; goto _out; 
	_out669: cs = 669; goto _out; 
	_out670: cs = 670; goto _out; 
	_out671: cs = 671; goto _out; 
	_out672: cs = 672; goto _out; 
	_out673: cs = 673; goto _out; 
	_out674: cs = 674; goto _out; 
	_out675: cs = 675; goto _out; 
	_out676: cs = 676; goto _out; 
	_out677: cs = 677; goto _out; 
	_out843: cs = 843; goto _out; 
	_out844: cs = 844; goto _out; 
	_out678: cs = 678; goto _out; 
	_out679: cs = 679; goto _out; 
	_out680: cs = 680; goto _out; 
	_out681: cs = 681; goto _out; 
	_out682: cs = 682; goto _out; 
	_out683: cs = 683; goto _out; 
	_out684: cs = 684; goto _out; 
	_out685: cs = 685; goto _out; 
	_out845: cs = 845; goto _out; 
	_out686: cs = 686; goto _out; 
	_out687: cs = 687; goto _out; 
	_out688: cs = 688; goto _out; 
	_out689: cs = 689; goto _out; 
	_out690: cs = 690; goto _out; 
	_out691: cs = 691; goto _out; 
	_out692: cs = 692; goto _out; 
	_out693: cs = 693; goto _out; 
	_out694: cs = 694; goto _out; 
	_out695: cs = 695; goto _out; 
	_out696: cs = 696; goto _out; 
	_out697: cs = 697; goto _out; 
	_out698: cs = 698; goto _out; 
	_out699: cs = 699; goto _out; 
	_out700: cs = 700; goto _out; 
	_out701: cs = 701; goto _out; 
	_out702: cs = 702; goto _out; 
	_out703: cs = 703; goto _out; 
	_out704: cs = 704; goto _out; 
	_out705: cs = 705; goto _out; 
	_out706: cs = 706; goto _out; 
	_out707: cs = 707; goto _out; 
	_out708: cs = 708; goto _out; 
	_out709: cs = 709; goto _out; 
	_out710: cs = 710; goto _out; 
	_out711: cs = 711; goto _out; 
	_out712: cs = 712; goto _out; 
	_out713: cs = 713; goto _out; 
	_out714: cs = 714; goto _out; 
	_out715: cs = 715; goto _out; 
	_out716: cs = 716; goto _out; 

	_out: {}
	}
#line 190 "superredcloth_inline.rl"

  return block;
}

void
rb_str_cat_escaped(str, tokstart, tokend)
  VALUE str;
  char *tokstart, *tokend;
{
  char *t = tokstart, *t2 = tokstart, *ch = NULL;
  if (tokend <= tokstart) return;

  while (t2 < tokend) {
    ch = NULL;
    switch (*t2)
    {
      case '&':  ch = "&amp;";    break;
      case '>':  ch = "&gt;";     break;
      case '<':  ch = "&lt;";     break;
      case '"':  ch = "&quot;";   break;
      case '\n': ch = "<br />\n"; break;
      case '\'': ch = "&#8217;";  break;
    }

    if (ch != NULL)
    {
      if (t2 > t)
        rb_str_cat(str, t, t2-t);
      rb_str_cat2(str, ch);
      t = t2 + 1;
    }

    t2++;
  }
  if (t2 > t)
    rb_str_cat(str, t, t2-t);
}

VALUE
superredcloth_inline2(str)
  VALUE str;
{
  StringValue(str);
  return superredcloth_inline(RSTRING(str)->ptr, RSTRING(str)->ptr + RSTRING(str)->len + 1);
}
