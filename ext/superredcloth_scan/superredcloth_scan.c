#line 1 "superredcloth_scan.rl"
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

#line 77 "superredcloth_scan.rl"



#line 22 "superredcloth_scan.c"
static const int superredcloth_scan_start = 660;

static const int superredcloth_scan_error = 588;

#line 80 "superredcloth_scan.rl"

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

  
#line 43 "superredcloth_scan.c"
	{
	cs = superredcloth_scan_start;
	tokstart = 0;
	tokend = 0;
	act = 0;
	}
#line 95 "superredcloth_scan.rl"

  
#line 53 "superredcloth_scan.c"
	{
	if ( p == pe )
		goto _out;
	switch ( cs )
	{
tr14:
#line 73 "superredcloth_scan.rl"
	{tokend = p;{ ASET(type, p); CAT(block); {{p = ((tokend))-1;}{goto st686;}} }{p = ((tokend))-1;}}
	goto st660;
tr16:
#line 69 "superredcloth_scan.rl"
	{tokend = p;{ {{p = ((tokend))-1;}{goto st686;}} }{p = ((tokend))-1;}}
	goto st660;
tr18:
#line 70 "superredcloth_scan.rl"
	{tokend = p;{ {{p = ((tokend))-1;}{goto st689;}} }{p = ((tokend))-1;}}
	goto st660;
tr114:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr129:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr159:
#line 72 "superredcloth_scan.rl"
	{tokend = p;{ INLINE(table, table_close); DONE(table); }{p = ((tokend))-1;}}
	goto st660;
tr175:
#line 73 "superredcloth_scan.rl"
	{tokend = p+1;{ ASET(type, p); CAT(block); {{p = ((tokend))-1;}{goto st686;}} }{p = ((tokend))-1;}}
	goto st660;
tr176:
#line 74 "superredcloth_scan.rl"
	{tokend = p+1;{p = ((tokend))-1;}}
	goto st660;
tr736:
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr757:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr768:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr779:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr790:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr801:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr812:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr823:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr835:
#line 72 "superredcloth_scan.rl"
	{{ INLINE(table, table_close); DONE(table); }{p = ((tokend))-1;}}
	goto st660;
tr949:
#line 1 "superredcloth_scan.rl"
	{	switch( act ) {
	case 14:
	{ INLINE(table, table_close); DONE(table); }
	break;
	case 15:
	{ ASET(type, p); CAT(block); {{p = ((tokend))-1;}{goto st686;}} }
	break;
	default: break;
	}
	{p = ((tokend))-1;}}
	goto st660;
tr1222:
#line 73 "superredcloth_scan.rl"
	{{ ASET(type, p); CAT(block); {{p = ((tokend))-1;}{goto st686;}} }{p = ((tokend))-1;}}
	goto st660;
tr1261:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr1406:
#line 68 "superredcloth_scan.rl"
	{tokend = p+1;{ ASET(type, notextile); {{p = ((tokend))-1;}{goto st684;}} }{p = ((tokend))-1;}}
	goto st660;
tr1715:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr1756:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
tr1767:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
#line 71 "superredcloth_scan.rl"
	{tokend = p+1;{ list_layout = rb_ary_new(); LIST_ITEM(); {{p = ((tokend))-1;}{goto st692;}} }{p = ((tokend))-1;}}
	goto st660;
st660:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out660;
case 660:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 200 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr176;
		case 35: goto tr177;
		case 40: goto tr178;
		case 41: goto tr179;
		case 42: goto tr180;
		case 45: goto tr181;
		case 46: goto tr182;
		case 60: goto tr183;
		case 61: goto tr184;
		case 62: goto tr185;
		case 91: goto tr186;
		case 94: goto tr187;
		case 98: goto tr188;
		case 102: goto tr189;
		case 104: goto tr190;
		case 112: goto tr191;
		case 116: goto tr192;
		case 123: goto tr193;
		case 124: goto tr194;
		case 126: goto tr195;
	}
	goto tr175;
tr177:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 33 "superredcloth_scan.rl"
	{nest = 0;}
	goto st661;
st661:
	if ( ++p == pe )
		goto _out661;
case 661:
#line 234 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr129;
		case 35: goto tr130;
		case 40: goto tr131;
		case 41: goto tr132;
		case 42: goto tr133;
		case 45: goto tr134;
		case 60: goto tr136;
		case 61: goto tr137;
		case 62: goto tr138;
		case 91: goto tr139;
		case 94: goto tr140;
		case 95: goto tr141;
		case 123: goto tr142;
		case 126: goto tr143;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr135;
	goto tr14;
tr115:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st0;
tr130:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st0;
st0:
	if ( ++p == pe )
		goto _out0;
case 0:
#line 266 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr129;
		case 35: goto tr130;
		case 40: goto tr131;
		case 41: goto tr132;
		case 42: goto tr133;
		case 45: goto tr134;
		case 60: goto tr136;
		case 61: goto tr137;
		case 62: goto tr138;
		case 91: goto tr139;
		case 94: goto tr140;
		case 95: goto tr141;
		case 123: goto tr142;
		case 126: goto tr143;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr135;
	goto tr1222;
tr1685:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1695:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1705:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1716:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1726:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1736:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1746:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr116:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr131:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1779:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1757:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
tr1768:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st1;
st1:
	if ( ++p == pe )
		goto _out1;
case 1:
#line 364 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1261;
		case 35: goto st3;
		case 40: goto tr1263;
		case 41: goto tr1264;
		case 45: goto tr1265;
		case 60: goto tr1266;
		case 61: goto tr1267;
		case 62: goto tr1268;
		case 91: goto tr1269;
		case 94: goto tr1270;
		case 123: goto tr1271;
		case 126: goto tr1272;
	}
	goto tr1260;
tr1260:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st2;
st2:
	if ( ++p == pe )
		goto _out2;
case 2:
#line 388 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr752;
		case 41: goto tr754;
	}
	goto st2;
tr752:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st3;
st3:
	if ( ++p == pe )
		goto _out3;
case 3:
#line 402 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1222;
	goto tr2371;
tr2371:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st4;
st4:
	if ( ++p == pe )
		goto _out4;
case 4:
#line 414 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr748;
	goto st4;
tr740:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st5;
tr744:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st5;
tr748:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st5;
tr754:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st5;
tr2081:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st5;
st5:
	if ( ++p == pe )
		goto _out5;
case 5:
#line 444 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr736;
		case 40: goto st6;
		case 91: goto st7;
		case 123: goto st9;
	}
	goto tr1222;
st6:
	if ( ++p == pe )
		goto _out6;
case 6:
	switch( (*p) ) {
		case 35: goto st3;
		case 41: goto st5;
	}
	goto tr1260;
tr1691:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st7;
tr1701:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st7;
tr1711:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st7;
tr1722:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st7;
tr1732:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st7;
tr1742:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st7;
tr1752:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st7;
tr124:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st7;
tr139:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st7;
tr1785:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st7;
tr1763:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st7;
tr1775:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st7;
st7:
	if ( ++p == pe )
		goto _out7;
case 7:
#line 515 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1222;
	goto tr2361;
tr2361:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st8;
st8:
	if ( ++p == pe )
		goto _out8;
case 8:
#line 527 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr744;
	goto st8;
tr1693:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st9;
tr1703:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st9;
tr1713:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st9;
tr1724:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st9;
tr1734:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st9;
tr1744:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st9;
tr1754:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st9;
tr127:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st9;
tr142:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st9;
tr1787:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st9;
tr1765:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st9;
tr1777:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st9;
st9:
	if ( ++p == pe )
		goto _out9;
case 9:
#line 585 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1222;
	goto tr2358;
tr2358:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st10;
st10:
	if ( ++p == pe )
		goto _out10;
case 10:
#line 597 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr740;
	goto st10;
tr1263:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr758:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr769:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr780:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr791:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr802:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr813:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
tr824:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st11;
st11:
	if ( ++p == pe )
		goto _out11;
case 11:
#line 655 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1261;
		case 35: goto tr752;
		case 40: goto tr1263;
		case 41: goto tr1273;
		case 45: goto tr1265;
		case 60: goto tr1266;
		case 61: goto tr1267;
		case 62: goto tr1268;
		case 91: goto tr1269;
		case 94: goto tr1270;
		case 123: goto tr1271;
		case 126: goto tr1272;
	}
	goto tr1260;
tr1264:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1686:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1696:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1706:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1717:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1727:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1737:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1747:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr117:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr132:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr759:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr770:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr781:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr792:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr803:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr814:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr1780:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr825:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr1273:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st12;
tr1758:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
tr1769:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st12;
st12:
	if ( ++p == pe )
		goto _out12;
case 12:
#line 821 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1715;
		case 40: goto tr1716;
		case 41: goto tr1717;
		case 45: goto tr1718;
		case 60: goto tr1719;
		case 61: goto tr1720;
		case 62: goto tr1721;
		case 91: goto tr1722;
		case 94: goto tr1723;
		case 123: goto tr1724;
		case 126: goto tr1725;
	}
	goto tr1222;
tr1687:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st13;
tr1697:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st13;
tr1707:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st13;
tr1718:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st13;
tr1728:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st13;
tr1738:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st13;
tr1748:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st13;
tr119:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st13;
tr134:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st13;
tr1781:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st13;
tr1759:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st13;
tr1770:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st13;
st13:
	if ( ++p == pe )
		goto _out13;
case 13:
#line 890 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr790;
		case 40: goto tr1726;
		case 41: goto tr1727;
		case 45: goto tr1728;
		case 60: goto tr1729;
		case 61: goto tr1730;
		case 62: goto tr1731;
		case 91: goto tr1732;
		case 94: goto tr1733;
		case 123: goto tr1734;
		case 126: goto tr1735;
	}
	goto tr1222;
tr1688:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st14;
tr1698:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st14;
tr1708:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st14;
tr1719:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st14;
tr1729:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st14;
tr1739:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st14;
tr1749:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st14;
tr121:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st14;
tr136:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st14;
tr1782:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st14;
tr1760:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st14;
tr1772:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st14;
st14:
	if ( ++p == pe )
		goto _out14;
case 14:
#line 959 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr757;
		case 40: goto tr1685;
		case 41: goto tr1686;
		case 45: goto tr1687;
		case 60: goto tr1688;
		case 61: goto tr1689;
		case 62: goto tr1690;
		case 91: goto tr1691;
		case 94: goto tr1692;
		case 123: goto tr1693;
		case 126: goto tr1694;
	}
	goto tr1222;
tr1689:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st15;
tr1699:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st15;
tr1709:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st15;
tr1720:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st15;
tr1730:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st15;
tr1740:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st15;
tr1750:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st15;
tr122:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st15;
tr137:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st15;
tr1783:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st15;
tr1761:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st15;
tr1773:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st15;
st15:
	if ( ++p == pe )
		goto _out15;
case 15:
#line 1028 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr779;
		case 40: goto tr1705;
		case 41: goto tr1706;
		case 45: goto tr1707;
		case 60: goto tr1708;
		case 61: goto tr1709;
		case 62: goto tr1710;
		case 91: goto tr1711;
		case 94: goto tr1712;
		case 123: goto tr1713;
		case 126: goto tr1714;
	}
	goto tr1222;
tr1700:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st16;
tr1710:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st16;
tr1721:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st16;
tr1731:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st16;
tr1741:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st16;
tr1751:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st16;
tr123:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st16;
tr138:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st16;
tr1784:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st16;
tr1762:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st16;
tr1774:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st16;
st16:
	if ( ++p == pe )
		goto _out16;
case 16:
#line 1093 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr768;
		case 40: goto tr1695;
		case 41: goto tr1696;
		case 45: goto tr1697;
		case 60: goto tr1698;
		case 61: goto tr1699;
		case 62: goto tr1700;
		case 91: goto tr1701;
		case 94: goto tr1702;
		case 123: goto tr1703;
		case 126: goto tr1704;
	}
	goto tr1222;
tr1692:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st17;
tr1702:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st17;
tr1712:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st17;
tr1723:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st17;
tr1733:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st17;
tr1743:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st17;
tr1753:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st17;
tr125:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st17;
tr140:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st17;
tr1786:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st17;
tr1764:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st17;
tr1776:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st17;
st17:
	if ( ++p == pe )
		goto _out17;
case 17:
#line 1162 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr801;
		case 40: goto tr1736;
		case 41: goto tr1737;
		case 45: goto tr1738;
		case 60: goto tr1739;
		case 61: goto tr1740;
		case 62: goto tr1741;
		case 91: goto tr1742;
		case 94: goto tr1743;
		case 123: goto tr1744;
		case 126: goto tr1745;
	}
	goto tr1222;
tr1694:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st18;
tr1704:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st18;
tr1714:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st18;
tr1725:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st18;
tr1735:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st18;
tr1745:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st18;
tr1755:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st18;
tr128:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st18;
tr143:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st18;
tr1788:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st18;
tr1766:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st18;
tr1778:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st18;
st18:
	if ( ++p == pe )
		goto _out18;
case 18:
#line 1231 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr812;
		case 40: goto tr1746;
		case 41: goto tr1747;
		case 45: goto tr1748;
		case 60: goto tr1749;
		case 61: goto tr1750;
		case 62: goto tr1751;
		case 91: goto tr1752;
		case 94: goto tr1753;
		case 123: goto tr1754;
		case 126: goto tr1755;
	}
	goto tr1222;
tr1690:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st19;
st19:
	if ( ++p == pe )
		goto _out19;
case 19:
#line 1254 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr823;
		case 40: goto tr1779;
		case 41: goto tr1780;
		case 45: goto tr1781;
		case 60: goto tr1782;
		case 61: goto tr1783;
		case 62: goto tr1784;
		case 91: goto tr1785;
		case 94: goto tr1786;
		case 123: goto tr1787;
		case 126: goto tr1788;
	}
	goto tr1222;
tr1265:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st20;
tr760:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st20;
tr771:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st20;
tr782:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st20;
tr793:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st20;
tr804:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st20;
tr815:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st20;
tr826:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st20;
st20:
	if ( ++p == pe )
		goto _out20;
case 20:
#line 1309 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr790;
		case 35: goto tr752;
		case 40: goto tr791;
		case 41: goto tr792;
		case 45: goto tr793;
		case 60: goto tr794;
		case 61: goto tr795;
		case 62: goto tr796;
		case 91: goto tr797;
		case 94: goto tr798;
		case 123: goto tr799;
		case 126: goto tr800;
	}
	goto st2;
tr1266:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st21;
tr761:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st21;
tr772:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st21;
tr783:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st21;
tr794:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st21;
tr805:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st21;
tr816:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st21;
tr827:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st21;
st21:
	if ( ++p == pe )
		goto _out21;
case 21:
#line 1365 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr757;
		case 35: goto tr752;
		case 40: goto tr758;
		case 41: goto tr759;
		case 45: goto tr760;
		case 60: goto tr761;
		case 61: goto tr762;
		case 62: goto tr763;
		case 91: goto tr764;
		case 94: goto tr765;
		case 123: goto tr766;
		case 126: goto tr767;
	}
	goto st2;
tr1267:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st22;
tr762:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st22;
tr773:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st22;
tr784:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st22;
tr795:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st22;
tr806:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st22;
tr817:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st22;
tr828:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st22;
st22:
	if ( ++p == pe )
		goto _out22;
case 22:
#line 1421 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr779;
		case 35: goto tr752;
		case 40: goto tr780;
		case 41: goto tr781;
		case 45: goto tr782;
		case 60: goto tr783;
		case 61: goto tr784;
		case 62: goto tr785;
		case 91: goto tr786;
		case 94: goto tr787;
		case 123: goto tr788;
		case 126: goto tr789;
	}
	goto st2;
tr1268:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st23;
tr774:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st23;
tr785:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st23;
tr796:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st23;
tr807:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st23;
tr818:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st23;
tr829:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st23;
st23:
	if ( ++p == pe )
		goto _out23;
case 23:
#line 1473 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr768;
		case 35: goto tr752;
		case 40: goto tr769;
		case 41: goto tr770;
		case 45: goto tr771;
		case 60: goto tr772;
		case 61: goto tr773;
		case 62: goto tr774;
		case 91: goto tr775;
		case 94: goto tr776;
		case 123: goto tr777;
		case 126: goto tr778;
	}
	goto st2;
tr1269:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st24;
tr764:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st24;
tr775:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st24;
tr786:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st24;
tr797:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st24;
tr808:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st24;
tr819:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st24;
tr830:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st24;
st24:
	if ( ++p == pe )
		goto _out24;
case 24:
#line 1529 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2390;
		case 41: goto tr2391;
		case 93: goto st2;
	}
	goto tr2278;
tr2278:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st25;
st25:
	if ( ++p == pe )
		goto _out25;
case 25:
#line 1544 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2047;
		case 41: goto tr2048;
		case 93: goto tr2049;
	}
	goto st25;
tr2047:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st26;
tr2390:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st26;
st26:
	if ( ++p == pe )
		goto _out26;
case 26:
#line 1565 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st8;
		case 93: goto tr2335;
	}
	goto tr2334;
tr2334:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st27;
st27:
	if ( ++p == pe )
		goto _out27;
case 27:
#line 1579 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1965;
		case 93: goto tr1966;
	}
	goto st27;
tr1886:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st28;
tr1965:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st28;
tr2048:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st28;
tr2347:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st28;
tr2373:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st28;
tr2391:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st28;
st28:
	if ( ++p == pe )
		goto _out28;
case 28:
#line 1619 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr736;
		case 40: goto st29;
		case 91: goto st47;
		case 93: goto tr744;
		case 123: goto st48;
	}
	goto st8;
st29:
	if ( ++p == pe )
		goto _out29;
case 29:
	switch( (*p) ) {
		case 35: goto st26;
		case 41: goto st28;
		case 93: goto tr2281;
	}
	goto tr2278;
tr2015:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st30;
tr2049:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st30;
tr2255:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st30;
tr2281:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st30;
st30:
	if ( ++p == pe )
		goto _out30;
case 30:
#line 1662 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr736;
		case 35: goto tr752;
		case 40: goto st31;
		case 41: goto tr754;
		case 91: goto st24;
		case 123: goto st32;
	}
	goto st2;
st31:
	if ( ++p == pe )
		goto _out31;
case 31:
	switch( (*p) ) {
		case 35: goto tr752;
		case 41: goto tr754;
	}
	goto tr1260;
tr1271:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st32;
tr766:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st32;
tr777:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st32;
tr788:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st32;
tr799:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st32;
tr810:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st32;
tr821:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st32;
tr832:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st32;
st32:
	if ( ++p == pe )
		goto _out32;
case 32:
#line 1721 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2404;
		case 41: goto tr2405;
		case 125: goto st2;
	}
	goto tr2252;
tr2252:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st33;
st33:
	if ( ++p == pe )
		goto _out33;
case 33:
#line 1736 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2013;
		case 41: goto tr2014;
		case 125: goto tr2015;
	}
	goto st33;
tr2013:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st34;
tr2404:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st34;
st34:
	if ( ++p == pe )
		goto _out34;
case 34:
#line 1757 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st10;
		case 125: goto tr2323;
	}
	goto tr2322;
tr2322:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st35;
st35:
	if ( ++p == pe )
		goto _out35;
case 35:
#line 1771 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1937;
		case 125: goto tr1938;
	}
	goto st35;
tr1885:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st36;
tr1937:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st36;
tr2014:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st36;
tr2363:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st36;
tr2380:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st36;
tr2405:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st36;
st36:
	if ( ++p == pe )
		goto _out36;
case 36:
#line 1811 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr736;
		case 40: goto st37;
		case 91: goto st38;
		case 123: goto st40;
		case 125: goto tr740;
	}
	goto st10;
st37:
	if ( ++p == pe )
		goto _out37;
case 37:
	switch( (*p) ) {
		case 35: goto st34;
		case 41: goto st36;
		case 125: goto tr2255;
	}
	goto tr2252;
st38:
	if ( ++p == pe )
		goto _out38;
case 38:
	switch( (*p) ) {
		case 93: goto st10;
		case 125: goto tr2347;
	}
	goto tr2346;
tr2346:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st39;
st39:
	if ( ++p == pe )
		goto _out39;
case 39:
#line 1847 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1885;
		case 125: goto tr1886;
	}
	goto st39;
st40:
	if ( ++p == pe )
		goto _out40;
case 40:
	if ( (*p) == 125 )
		goto tr740;
	goto tr2358;
tr1938:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st41;
tr1966:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st41;
tr2323:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st41;
tr2335:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st41;
st41:
	if ( ++p == pe )
		goto _out41;
case 41:
#line 1884 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr736;
		case 40: goto st42;
		case 41: goto tr748;
		case 91: goto st45;
		case 123: goto st46;
	}
	goto st4;
st42:
	if ( ++p == pe )
		goto _out42;
case 42:
	switch( (*p) ) {
		case 35: goto st44;
		case 41: goto tr748;
	}
	goto tr2306;
tr2306:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st43;
st43:
	if ( ++p == pe )
		goto _out43;
case 43:
#line 1910 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2080;
		case 41: goto tr2081;
	}
	goto st43;
tr2080:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st44;
st44:
	if ( ++p == pe )
		goto _out44;
case 44:
#line 1924 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr748;
	goto tr2371;
st45:
	if ( ++p == pe )
		goto _out45;
case 45:
	switch( (*p) ) {
		case 41: goto tr2373;
		case 93: goto st4;
	}
	goto tr2334;
st46:
	if ( ++p == pe )
		goto _out46;
case 46:
	switch( (*p) ) {
		case 41: goto tr2380;
		case 125: goto st4;
	}
	goto tr2322;
st47:
	if ( ++p == pe )
		goto _out47;
case 47:
	if ( (*p) == 93 )
		goto tr744;
	goto tr2361;
st48:
	if ( ++p == pe )
		goto _out48;
case 48:
	switch( (*p) ) {
		case 93: goto tr2363;
		case 125: goto st8;
	}
	goto tr2346;
tr1270:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st49;
tr765:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st49;
tr776:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st49;
tr787:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st49;
tr798:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st49;
tr809:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st49;
tr820:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st49;
tr831:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st49;
st49:
	if ( ++p == pe )
		goto _out49;
case 49:
#line 2002 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr801;
		case 35: goto tr752;
		case 40: goto tr802;
		case 41: goto tr803;
		case 45: goto tr804;
		case 60: goto tr805;
		case 61: goto tr806;
		case 62: goto tr807;
		case 91: goto tr808;
		case 94: goto tr809;
		case 123: goto tr810;
		case 126: goto tr811;
	}
	goto st2;
tr1272:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st50;
tr767:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st50;
tr778:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st50;
tr789:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st50;
tr800:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st50;
tr811:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st50;
tr822:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st50;
tr833:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st50;
st50:
	if ( ++p == pe )
		goto _out50;
case 50:
#line 2058 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr812;
		case 35: goto tr752;
		case 40: goto tr813;
		case 41: goto tr814;
		case 45: goto tr815;
		case 60: goto tr816;
		case 61: goto tr817;
		case 62: goto tr818;
		case 91: goto tr819;
		case 94: goto tr820;
		case 123: goto tr821;
		case 126: goto tr822;
	}
	goto st2;
tr763:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st51;
st51:
	if ( ++p == pe )
		goto _out51;
case 51:
#line 2082 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr823;
		case 35: goto tr752;
		case 40: goto tr824;
		case 41: goto tr825;
		case 45: goto tr826;
		case 60: goto tr827;
		case 61: goto tr828;
		case 62: goto tr829;
		case 91: goto tr830;
		case 94: goto tr831;
		case 123: goto tr832;
		case 126: goto tr833;
	}
	goto st2;
tr118:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st52;
tr133:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st52;
st52:
	if ( ++p == pe )
		goto _out52;
case 52:
#line 2110 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr114;
		case 35: goto tr115;
		case 40: goto tr116;
		case 41: goto tr117;
		case 42: goto tr118;
		case 45: goto tr119;
		case 60: goto tr121;
		case 61: goto tr122;
		case 62: goto tr123;
		case 91: goto tr124;
		case 94: goto tr125;
		case 95: goto tr126;
		case 123: goto tr127;
		case 126: goto tr128;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr120;
	goto tr1222;
tr120:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st53;
tr135:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st53;
st53:
	if ( ++p == pe )
		goto _out53;
case 53:
#line 2146 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1767;
		case 40: goto tr1768;
		case 41: goto tr1769;
		case 45: goto tr1770;
		case 60: goto tr1772;
		case 61: goto tr1773;
		case 62: goto tr1774;
		case 91: goto tr1775;
		case 94: goto tr1776;
		case 123: goto tr1777;
		case 126: goto tr1778;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st53;
	goto tr1222;
tr126:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st54;
tr141:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st54;
st54:
	if ( ++p == pe )
		goto _out54;
case 54:
#line 2175 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr1756;
		case 40: goto tr1757;
		case 41: goto tr1758;
		case 45: goto tr1759;
		case 60: goto tr1760;
		case 61: goto tr1761;
		case 62: goto tr1762;
		case 91: goto tr1763;
		case 94: goto tr1764;
		case 123: goto tr1765;
		case 126: goto tr1766;
	}
	goto tr1222;
tr178:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st662;
st662:
	if ( ++p == pe )
		goto _out662;
case 662:
#line 2208 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st56;
		case 40: goto tr2;
		case 41: goto tr3;
		case 45: goto tr4;
		case 46: goto tr5;
		case 60: goto tr6;
		case 61: goto tr7;
		case 62: goto tr8;
		case 91: goto tr9;
		case 94: goto tr10;
		case 123: goto tr11;
		case 126: goto tr12;
	}
	goto tr0;
tr0:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st55;
st55:
	if ( ++p == pe )
		goto _out55;
case 55:
#line 2232 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 41: goto tr1998;
	}
	goto st55;
tr1996:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st56;
st56:
	if ( ++p == pe )
		goto _out56;
case 56:
#line 2246 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1222;
	goto tr2471;
tr2471:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st57;
st57:
	if ( ++p == pe )
		goto _out57;
case 57:
#line 2258 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1925;
	goto st57;
tr1845:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st58;
tr1877:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st58;
tr1925:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st58;
tr1998:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st58;
tr2460:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st58;
st58:
	if ( ++p == pe )
		goto _out58;
case 58:
#line 2288 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st59;
		case 46: goto st60;
		case 91: goto st370;
		case 123: goto st372;
	}
	goto tr1222;
st59:
	if ( ++p == pe )
		goto _out59;
case 59:
	switch( (*p) ) {
		case 35: goto st56;
		case 41: goto st58;
	}
	goto tr0;
tr5:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st60;
tr39:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st60;
tr51:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st60;
tr62:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st60;
tr73:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st60;
tr84:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st60;
tr95:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st60;
tr106:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st60;
tr2223:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st60;
tr1673:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st60;
st60:
	if ( ++p == pe )
		goto _out60;
case 60:
#line 2353 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st60;
		case 124: goto st61;
	}
	goto tr1222;
tr1680:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st61;
st61:
	if ( ++p == pe )
		goto _out61;
case 61:
#line 2369 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1222;
		case 10: goto tr1222;
		case 40: goto tr145;
		case 41: goto tr146;
		case 45: goto tr147;
		case 46: goto tr148;
		case 47: goto tr149;
		case 60: goto tr150;
		case 61: goto tr151;
		case 62: goto tr152;
		case 91: goto tr153;
		case 92: goto tr154;
		case 94: goto tr155;
		case 123: goto tr156;
		case 126: goto tr157;
	}
	goto tr144;
tr1276:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st62;
tr144:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st62;
tr1809:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st62;
st62:
	if ( ++p == pe )
		goto _out62;
case 62:
#line 2410 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 124: goto tr202;
	}
	goto st62;
st63:
	if ( ++p == pe )
		goto _out63;
case 63:
	switch( (*p) ) {
		case 10: goto st64;
		case 13: goto st248;
	}
	goto tr949;
st64:
	if ( ++p == pe )
		goto _out64;
case 64:
	if ( (*p) == 124 )
		goto tr202;
	goto tr949;
tr202:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 6 "superredcloth_scan.rl"
	{ STORE(text); }
#line 39 "superredcloth_scan.rl"
	{PASS(table, text, td);}
#line 72 "superredcloth_scan.rl"
	{act = 14;}
	goto st663;
st663:
	if ( ++p == pe )
		goto _out663;
case 663:
#line 2447 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr159;
		case 10: goto tr160;
		case 13: goto tr1810;
		case 40: goto tr1811;
		case 41: goto tr1812;
		case 45: goto tr1813;
		case 46: goto tr1814;
		case 47: goto tr1815;
		case 60: goto tr1816;
		case 61: goto tr1817;
		case 62: goto tr1818;
		case 91: goto tr1819;
		case 92: goto tr1820;
		case 94: goto tr1821;
		case 123: goto tr1822;
		case 126: goto tr1823;
	}
	goto tr1809;
tr160:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_close);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st65;
st65:
	if ( ++p == pe )
		goto _out65;
case 65:
#line 2477 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1280;
		case 41: goto tr1281;
		case 45: goto tr1282;
		case 46: goto tr1283;
		case 60: goto tr1284;
		case 61: goto tr1285;
		case 62: goto tr1286;
		case 91: goto tr1287;
		case 94: goto tr1288;
		case 123: goto tr1289;
		case 124: goto tr1290;
		case 126: goto tr1291;
	}
	goto tr835;
tr1298:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1308:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1318:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1328:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1339:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1349:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1359:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1280:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
tr1369:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st66;
st66:
	if ( ++p == pe )
		goto _out66;
case 66:
#line 2553 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st68;
		case 40: goto tr1117;
		case 41: goto tr1118;
		case 45: goto tr1119;
		case 46: goto tr1120;
		case 60: goto tr1121;
		case 61: goto tr1122;
		case 62: goto tr1123;
		case 91: goto tr1124;
		case 94: goto tr1125;
		case 123: goto tr1126;
		case 126: goto tr1127;
	}
	goto tr1115;
tr1115:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st67;
st67:
	if ( ++p == pe )
		goto _out67;
case 67:
#line 2577 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 41: goto tr1986;
	}
	goto st67;
tr346:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st68;
st68:
	if ( ++p == pe )
		goto _out68;
case 68:
#line 2591 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr835;
	goto tr2467;
tr2467:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st69;
st69:
	if ( ++p == pe )
		goto _out69;
case 69:
#line 2603 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1917;
	goto st69;
tr1837:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st70;
tr1869:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st70;
tr1917:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st70;
tr1986:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st70;
tr2456:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st70;
st70:
	if ( ++p == pe )
		goto _out70;
case 70:
#line 2633 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st71;
		case 46: goto st72;
		case 91: goto st85;
		case 123: goto st88;
	}
	goto tr835;
st71:
	if ( ++p == pe )
		goto _out71;
case 71:
	switch( (*p) ) {
		case 35: goto st68;
		case 41: goto st70;
	}
	goto tr1115;
tr1120:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st72;
tr350:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st72;
tr408:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st72;
tr463:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st72;
tr1331:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st72;
tr518:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st72;
tr573:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st72;
tr628:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st72;
tr683:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st72;
tr1283:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st72;
st72:
	if ( ++p == pe )
		goto _out72;
case 72:
#line 2696 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st72;
		case 124: goto st73;
	}
	goto tr835;
tr1290:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st73;
st73:
	if ( ++p == pe )
		goto _out73;
case 73:
#line 2710 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto tr835;
		case 40: goto tr1796;
		case 41: goto tr1797;
		case 45: goto tr1798;
		case 46: goto tr1799;
		case 47: goto tr1800;
		case 60: goto tr1801;
		case 61: goto tr1802;
		case 62: goto tr1803;
		case 91: goto tr1804;
		case 92: goto tr1805;
		case 94: goto tr1806;
		case 123: goto tr1807;
		case 126: goto tr1808;
	}
	goto tr1795;
tr1274:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st74;
tr1795:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st74;
tr158:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st74;
st74:
	if ( ++p == pe )
		goto _out74;
case 74:
#line 2751 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 124: goto tr198;
	}
	goto st74;
st75:
	if ( ++p == pe )
		goto _out75;
case 75:
	switch( (*p) ) {
		case 10: goto st76;
		case 13: goto st79;
	}
	goto tr835;
st76:
	if ( ++p == pe )
		goto _out76;
case 76:
	if ( (*p) == 124 )
		goto tr198;
	goto tr835;
tr198:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 6 "superredcloth_scan.rl"
	{ STORE(text); }
#line 39 "superredcloth_scan.rl"
	{PASS(table, text, td);}
	goto st664;
st664:
	if ( ++p == pe )
		goto _out664;
case 664:
#line 2786 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr159;
		case 10: goto tr160;
		case 13: goto tr161;
		case 40: goto tr162;
		case 41: goto tr163;
		case 45: goto tr164;
		case 46: goto tr165;
		case 47: goto tr166;
		case 60: goto tr167;
		case 61: goto tr168;
		case 62: goto tr169;
		case 91: goto tr170;
		case 92: goto tr171;
		case 94: goto tr172;
		case 123: goto tr173;
		case 126: goto tr174;
	}
	goto tr158;
tr161:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_close);}
	goto st77;
st77:
	if ( ++p == pe )
		goto _out77;
case 77:
#line 2818 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st78;
		case 124: goto tr198;
	}
	goto st74;
st78:
	if ( ++p == pe )
		goto _out78;
case 78:
	switch( (*p) ) {
		case 10: goto st76;
		case 13: goto st79;
		case 40: goto tr1280;
		case 41: goto tr1281;
		case 45: goto tr1282;
		case 46: goto tr1283;
		case 60: goto tr1284;
		case 61: goto tr1285;
		case 62: goto tr1286;
		case 91: goto tr1287;
		case 94: goto tr1288;
		case 123: goto tr1289;
		case 124: goto tr1290;
		case 126: goto tr1291;
	}
	goto tr835;
st79:
	if ( ++p == pe )
		goto _out79;
case 79:
	if ( (*p) == 10 )
		goto st76;
	goto tr835;
tr1118:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1299:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1309:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1319:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1329:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1340:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1350:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1360:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr1281:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr348:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr406:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr461:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr516:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr571:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr626:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr1370:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st80;
tr681:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
tr1243:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st80;
st80:
	if ( ++p == pe )
		goto _out80;
case 80:
#line 2985 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1328;
		case 41: goto tr1329;
		case 45: goto tr1330;
		case 46: goto tr1331;
		case 60: goto tr1332;
		case 61: goto tr1333;
		case 62: goto tr1334;
		case 91: goto tr1335;
		case 94: goto tr1336;
		case 123: goto tr1337;
		case 126: goto tr1338;
	}
	goto tr835;
tr1300:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st81;
tr1310:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st81;
tr1320:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st81;
tr1330:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st81;
tr1341:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st81;
tr1351:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st81;
tr1361:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st81;
tr1371:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st81;
tr1282:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st81;
st81:
	if ( ++p == pe )
		goto _out81;
case 81:
#line 3042 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1339;
		case 41: goto tr1340;
		case 45: goto tr1341;
		case 46: goto tr518;
		case 60: goto tr1342;
		case 61: goto tr1343;
		case 62: goto tr1344;
		case 91: goto tr1345;
		case 94: goto tr1346;
		case 123: goto tr1347;
		case 126: goto tr1348;
	}
	goto tr835;
tr1301:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st82;
tr1311:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st82;
tr1321:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st82;
tr1332:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st82;
tr1342:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st82;
tr1352:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st82;
tr1362:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st82;
tr1372:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st82;
tr1284:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st82;
st82:
	if ( ++p == pe )
		goto _out82;
case 82:
#line 3099 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1298;
		case 41: goto tr1299;
		case 45: goto tr1300;
		case 46: goto tr350;
		case 60: goto tr1301;
		case 61: goto tr1302;
		case 62: goto tr1303;
		case 91: goto tr1304;
		case 94: goto tr1305;
		case 123: goto tr1306;
		case 126: goto tr1307;
	}
	goto tr835;
tr1302:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st83;
tr1312:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st83;
tr1322:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st83;
tr1333:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st83;
tr1343:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st83;
tr1353:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st83;
tr1363:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st83;
tr1373:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st83;
tr1285:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st83;
st83:
	if ( ++p == pe )
		goto _out83;
case 83:
#line 3156 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1318;
		case 41: goto tr1319;
		case 45: goto tr1320;
		case 46: goto tr463;
		case 60: goto tr1321;
		case 61: goto tr1322;
		case 62: goto tr1323;
		case 91: goto tr1324;
		case 94: goto tr1325;
		case 123: goto tr1326;
		case 126: goto tr1327;
	}
	goto tr835;
tr1313:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st84;
tr1323:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st84;
tr1334:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st84;
tr1344:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st84;
tr1354:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st84;
tr1364:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st84;
tr1374:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st84;
tr1286:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st84;
st84:
	if ( ++p == pe )
		goto _out84;
case 84:
#line 3209 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1308;
		case 41: goto tr1309;
		case 45: goto tr1310;
		case 46: goto tr408;
		case 60: goto tr1311;
		case 61: goto tr1312;
		case 62: goto tr1313;
		case 91: goto tr1314;
		case 94: goto tr1315;
		case 123: goto tr1316;
		case 126: goto tr1317;
	}
	goto tr835;
tr1304:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st85;
tr1314:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st85;
tr1324:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st85;
tr1335:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st85;
tr1345:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st85;
tr1355:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st85;
tr1365:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st85;
tr1375:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st85;
tr1287:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st85;
st85:
	if ( ++p == pe )
		goto _out85;
case 85:
#line 3266 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr835;
	goto tr2469;
tr2469:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st86;
st86:
	if ( ++p == pe )
		goto _out86;
case 86:
#line 3278 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1869;
	goto st86;
tr1305:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st87;
tr1315:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st87;
tr1325:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st87;
tr1336:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st87;
tr1346:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st87;
tr1356:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st87;
tr1366:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st87;
tr1376:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st87;
tr1288:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st87;
st87:
	if ( ++p == pe )
		goto _out87;
case 87:
#line 3324 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1349;
		case 41: goto tr1350;
		case 45: goto tr1351;
		case 46: goto tr573;
		case 60: goto tr1352;
		case 61: goto tr1353;
		case 62: goto tr1354;
		case 91: goto tr1355;
		case 94: goto tr1356;
		case 123: goto tr1357;
		case 126: goto tr1358;
	}
	goto tr835;
tr1306:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st88;
tr1316:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st88;
tr1326:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st88;
tr1337:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st88;
tr1347:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st88;
tr1357:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st88;
tr1367:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st88;
tr1377:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st88;
tr1289:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st88;
st88:
	if ( ++p == pe )
		goto _out88;
case 88:
#line 3381 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr835;
	goto tr2468;
tr2468:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st89;
st89:
	if ( ++p == pe )
		goto _out89;
case 89:
#line 3393 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1837;
	goto st89;
tr1307:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st90;
tr1317:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st90;
tr1327:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st90;
tr1338:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st90;
tr1348:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st90;
tr1358:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st90;
tr1368:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st90;
tr1378:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st90;
tr1291:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st90;
st90:
	if ( ++p == pe )
		goto _out90;
case 90:
#line 3439 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1359;
		case 41: goto tr1360;
		case 45: goto tr1361;
		case 46: goto tr628;
		case 60: goto tr1362;
		case 61: goto tr1363;
		case 62: goto tr1364;
		case 91: goto tr1365;
		case 94: goto tr1366;
		case 123: goto tr1367;
		case 126: goto tr1368;
	}
	goto tr835;
tr1303:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st91;
st91:
	if ( ++p == pe )
		goto _out91;
case 91:
#line 3462 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1369;
		case 41: goto tr1370;
		case 45: goto tr1371;
		case 46: goto tr683;
		case 60: goto tr1372;
		case 61: goto tr1373;
		case 62: goto tr1374;
		case 91: goto tr1375;
		case 94: goto tr1376;
		case 123: goto tr1377;
		case 126: goto tr1378;
	}
	goto tr835;
tr840:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr850:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr860:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr870:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr881:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr891:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr901:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr1796:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr162:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr939:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr911:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
tr925:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st92;
st92:
	if ( ++p == pe )
		goto _out92;
case 92:
#line 3557 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1061;
		case 10: goto tr1069;
		case 35: goto st108;
		case 40: goto tr1128;
		case 41: goto tr1129;
		case 45: goto tr1130;
		case 46: goto tr1131;
		case 60: goto tr1132;
		case 61: goto tr1133;
		case 62: goto tr1134;
		case 91: goto tr1135;
		case 94: goto tr1136;
		case 123: goto tr1137;
		case 124: goto tr198;
		case 126: goto tr1138;
	}
	goto tr1068;
tr1068:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st93;
st93:
	if ( ++p == pe )
		goto _out93;
case 93:
#line 3584 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 41: goto tr1242;
		case 124: goto tr198;
	}
	goto st93;
tr1061:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st94;
st94:
	if ( ++p == pe )
		goto _out94;
case 94:
#line 3601 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr286;
		case 41: goto tr287;
	}
	goto st94;
tr286:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st95;
st95:
	if ( ++p == pe )
		goto _out95;
case 95:
#line 3615 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr835;
	goto tr1179;
tr1179:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st96;
st96:
	if ( ++p == pe )
		goto _out96;
case 96:
#line 3627 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr244;
	goto st96;
tr197:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st97;
tr205:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st97;
tr244:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st97;
tr287:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st97;
tr339:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st97;
st97:
	if ( ++p == pe )
		goto _out97;
case 97:
#line 3657 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st98;
		case 46: goto st99;
		case 91: goto st101;
		case 123: goto st103;
	}
	goto tr835;
st98:
	if ( ++p == pe )
		goto _out98;
case 98:
	switch( (*p) ) {
		case 35: goto st95;
		case 41: goto st97;
	}
	goto tr1061;
st99:
	if ( ++p == pe )
		goto _out99;
case 99:
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto tr835;
		case 32: goto tr1275;
	}
	goto tr1274;
tr1275:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st100;
tr1131:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st100;
tr364:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st100;
tr419:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st100;
tr474:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st100;
tr873:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st100;
tr529:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st100;
tr584:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st100;
tr639:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st100;
tr1799:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st100;
tr165:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st100;
tr694:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st100;
tr914:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st100;
tr928:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st100;
st100:
	if ( ++p == pe )
		goto _out100;
case 100:
#line 3752 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 32: goto tr1275;
		case 124: goto tr198;
	}
	goto tr1274;
st101:
	if ( ++p == pe )
		goto _out101;
case 101:
	if ( (*p) == 93 )
		goto tr835;
	goto tr1207;
tr1207:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st102;
st102:
	if ( ++p == pe )
		goto _out102;
case 102:
#line 3775 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr205;
	goto st102;
st103:
	if ( ++p == pe )
		goto _out103;
case 103:
	if ( (*p) == 125 )
		goto tr835;
	goto tr1220;
tr1220:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st104;
st104:
	if ( ++p == pe )
		goto _out104;
case 104:
#line 3794 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr197;
	goto st104;
tr1069:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st105;
st105:
	if ( ++p == pe )
		goto _out105;
case 105:
#line 3806 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st106;
		case 13: goto st107;
		case 35: goto tr286;
		case 41: goto tr287;
	}
	goto st94;
st106:
	if ( ++p == pe )
		goto _out106;
case 106:
	switch( (*p) ) {
		case 35: goto tr286;
		case 41: goto tr287;
		case 124: goto tr198;
	}
	goto st94;
st107:
	if ( ++p == pe )
		goto _out107;
case 107:
	switch( (*p) ) {
		case 10: goto st106;
		case 35: goto tr286;
		case 41: goto tr287;
	}
	goto st94;
tr360:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st108;
st108:
	if ( ++p == pe )
		goto _out108;
case 108:
#line 3842 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1179;
		case 10: goto tr1180;
		case 41: goto st74;
		case 124: goto tr198;
	}
	goto tr1178;
tr1178:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st109;
st109:
	if ( ++p == pe )
		goto _out109;
case 109:
#line 3858 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st96;
		case 10: goto st110;
		case 41: goto tr1110;
		case 124: goto tr198;
	}
	goto st109;
tr1180:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st110;
st110:
	if ( ++p == pe )
		goto _out110;
case 110:
#line 3874 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st111;
		case 13: goto st112;
		case 41: goto tr244;
	}
	goto st96;
st111:
	if ( ++p == pe )
		goto _out111;
case 111:
	switch( (*p) ) {
		case 41: goto tr244;
		case 124: goto tr198;
	}
	goto st96;
st112:
	if ( ++p == pe )
		goto _out112;
case 112:
	switch( (*p) ) {
		case 10: goto st111;
		case 41: goto tr244;
	}
	goto st96;
tr1226:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st113;
tr1229:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st113;
tr1110:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st113;
tr1242:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st113;
tr2089:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st113;
st113:
	if ( ++p == pe )
		goto _out113;
case 113:
#line 3925 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto st114;
		case 46: goto st100;
		case 91: goto st115;
		case 123: goto st120;
		case 124: goto tr198;
	}
	goto st74;
st114:
	if ( ++p == pe )
		goto _out114;
case 114:
	switch( (*p) ) {
		case 0: goto tr1061;
		case 10: goto tr1069;
		case 35: goto st108;
		case 41: goto st113;
		case 124: goto tr198;
	}
	goto tr1068;
tr846:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st115;
tr856:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st115;
tr866:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st115;
tr877:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st115;
tr887:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st115;
tr897:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st115;
tr907:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st115;
tr1804:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st115;
tr170:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st115;
tr945:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st115;
tr920:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st115;
tr934:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st115;
st115:
	if ( ++p == pe )
		goto _out115;
case 115:
#line 4008 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1207;
		case 10: goto tr1208;
		case 93: goto st74;
		case 124: goto tr198;
	}
	goto tr1206;
tr1206:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st116;
st116:
	if ( ++p == pe )
		goto _out116;
case 116:
#line 4024 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st102;
		case 10: goto st117;
		case 93: goto tr1229;
		case 124: goto tr198;
	}
	goto st116;
tr1208:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st117;
st117:
	if ( ++p == pe )
		goto _out117;
case 117:
#line 4040 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st118;
		case 13: goto st119;
		case 93: goto tr205;
	}
	goto st102;
st118:
	if ( ++p == pe )
		goto _out118;
case 118:
	switch( (*p) ) {
		case 93: goto tr205;
		case 124: goto tr198;
	}
	goto st102;
st119:
	if ( ++p == pe )
		goto _out119;
case 119:
	switch( (*p) ) {
		case 10: goto st118;
		case 93: goto tr205;
	}
	goto st102;
tr848:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st120;
tr858:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st120;
tr868:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st120;
tr879:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st120;
tr889:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st120;
tr899:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st120;
tr909:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st120;
tr1807:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st120;
tr173:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st120;
tr947:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st120;
tr923:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st120;
tr937:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st120;
st120:
	if ( ++p == pe )
		goto _out120;
case 120:
#line 4125 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1220;
		case 10: goto tr1225;
		case 124: goto tr198;
		case 125: goto st74;
	}
	goto tr1224;
tr1224:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st121;
st121:
	if ( ++p == pe )
		goto _out121;
case 121:
#line 4141 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st104;
		case 10: goto st122;
		case 124: goto tr198;
		case 125: goto tr1226;
	}
	goto st121;
tr1225:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st122;
st122:
	if ( ++p == pe )
		goto _out122;
case 122:
#line 4157 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st123;
		case 13: goto st124;
		case 125: goto tr197;
	}
	goto st104;
st123:
	if ( ++p == pe )
		goto _out123;
case 123:
	switch( (*p) ) {
		case 124: goto tr198;
		case 125: goto tr197;
	}
	goto st104;
st124:
	if ( ++p == pe )
		goto _out124;
case 124:
	switch( (*p) ) {
		case 10: goto st123;
		case 125: goto tr197;
	}
	goto st104;
tr1128:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr361:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr416:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr471:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr526:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr581:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr636:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
tr691:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st125;
st125:
	if ( ++p == pe )
		goto _out125;
case 125:
#line 4236 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1061;
		case 10: goto tr1069;
		case 35: goto tr360;
		case 40: goto tr1128;
		case 41: goto tr1244;
		case 45: goto tr1130;
		case 46: goto tr1131;
		case 60: goto tr1132;
		case 61: goto tr1133;
		case 62: goto tr1134;
		case 91: goto tr1135;
		case 94: goto tr1136;
		case 123: goto tr1137;
		case 124: goto tr198;
		case 126: goto tr1138;
	}
	goto tr1068;
tr1129:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr841:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr851:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr861:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr871:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr882:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr892:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr902:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr1797:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr163:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr362:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr417:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr472:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr527:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr582:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr637:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr940:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr692:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
tr912:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr926:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st126;
tr1244:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st126;
st126:
	if ( ++p == pe )
		goto _out126;
case 126:
#line 4407 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr870;
		case 41: goto tr871;
		case 45: goto tr872;
		case 46: goto tr873;
		case 60: goto tr874;
		case 61: goto tr875;
		case 62: goto tr876;
		case 91: goto tr877;
		case 94: goto tr878;
		case 123: goto tr879;
		case 124: goto tr198;
		case 126: goto tr880;
	}
	goto st74;
tr842:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st127;
tr852:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st127;
tr862:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st127;
tr872:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st127;
tr883:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st127;
tr893:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st127;
tr903:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st127;
tr1798:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st127;
tr164:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st127;
tr941:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st127;
tr913:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st127;
tr927:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st127;
st127:
	if ( ++p == pe )
		goto _out127;
case 127:
#line 4485 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr881;
		case 41: goto tr882;
		case 45: goto tr883;
		case 46: goto tr529;
		case 60: goto tr884;
		case 61: goto tr885;
		case 62: goto tr886;
		case 91: goto tr887;
		case 94: goto tr888;
		case 123: goto tr889;
		case 124: goto tr198;
		case 126: goto tr890;
	}
	goto st74;
tr843:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st128;
tr853:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st128;
tr863:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st128;
tr874:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st128;
tr884:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st128;
tr894:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st128;
tr904:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st128;
tr1801:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr167:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st128;
tr942:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st128;
tr917:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st128;
tr931:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st128;
st128:
	if ( ++p == pe )
		goto _out128;
case 128:
#line 4563 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr840;
		case 41: goto tr841;
		case 45: goto tr842;
		case 46: goto tr364;
		case 60: goto tr843;
		case 61: goto tr844;
		case 62: goto tr845;
		case 91: goto tr846;
		case 94: goto tr847;
		case 123: goto tr848;
		case 124: goto tr198;
		case 126: goto tr849;
	}
	goto st74;
tr844:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st129;
tr854:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st129;
tr864:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st129;
tr875:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st129;
tr885:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st129;
tr895:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st129;
tr905:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st129;
tr1802:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr168:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st129;
tr943:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st129;
tr918:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st129;
tr932:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st129;
st129:
	if ( ++p == pe )
		goto _out129;
case 129:
#line 4641 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr860;
		case 41: goto tr861;
		case 45: goto tr862;
		case 46: goto tr474;
		case 60: goto tr863;
		case 61: goto tr864;
		case 62: goto tr865;
		case 91: goto tr866;
		case 94: goto tr867;
		case 123: goto tr868;
		case 124: goto tr198;
		case 126: goto tr869;
	}
	goto st74;
tr855:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st130;
tr865:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st130;
tr876:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st130;
tr886:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st130;
tr896:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st130;
tr906:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st130;
tr1803:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st130;
tr169:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st130;
tr944:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st130;
tr919:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st130;
tr933:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st130;
st130:
	if ( ++p == pe )
		goto _out130;
case 130:
#line 4715 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr850;
		case 41: goto tr851;
		case 45: goto tr852;
		case 46: goto tr419;
		case 60: goto tr853;
		case 61: goto tr854;
		case 62: goto tr855;
		case 91: goto tr856;
		case 94: goto tr857;
		case 123: goto tr858;
		case 124: goto tr198;
		case 126: goto tr859;
	}
	goto st74;
tr847:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st131;
tr857:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st131;
tr867:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st131;
tr878:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st131;
tr888:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st131;
tr898:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st131;
tr908:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st131;
tr1806:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st131;
tr172:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st131;
tr946:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st131;
tr922:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st131;
tr936:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st131;
st131:
	if ( ++p == pe )
		goto _out131;
case 131:
#line 4793 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr891;
		case 41: goto tr892;
		case 45: goto tr893;
		case 46: goto tr584;
		case 60: goto tr894;
		case 61: goto tr895;
		case 62: goto tr896;
		case 91: goto tr897;
		case 94: goto tr898;
		case 123: goto tr899;
		case 124: goto tr198;
		case 126: goto tr900;
	}
	goto st74;
tr849:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st132;
tr859:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st132;
tr869:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st132;
tr880:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st132;
tr890:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st132;
tr900:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st132;
tr910:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st132;
tr1808:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st132;
tr174:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st132;
tr948:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st132;
tr924:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st132;
tr938:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st132;
st132:
	if ( ++p == pe )
		goto _out132;
case 132:
#line 4871 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr901;
		case 41: goto tr902;
		case 45: goto tr903;
		case 46: goto tr639;
		case 60: goto tr904;
		case 61: goto tr905;
		case 62: goto tr906;
		case 91: goto tr907;
		case 94: goto tr908;
		case 123: goto tr909;
		case 124: goto tr198;
		case 126: goto tr910;
	}
	goto st74;
tr845:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st133;
st133:
	if ( ++p == pe )
		goto _out133;
case 133:
#line 4897 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr939;
		case 41: goto tr940;
		case 45: goto tr941;
		case 46: goto tr694;
		case 60: goto tr942;
		case 61: goto tr943;
		case 62: goto tr944;
		case 91: goto tr945;
		case 94: goto tr946;
		case 123: goto tr947;
		case 124: goto tr198;
		case 126: goto tr948;
	}
	goto st74;
tr1130:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st134;
tr363:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st134;
tr418:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st134;
tr473:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st134;
tr528:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st134;
tr583:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st134;
tr638:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st134;
tr693:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st134;
st134:
	if ( ++p == pe )
		goto _out134;
case 134:
#line 4955 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr526;
		case 41: goto tr527;
		case 45: goto tr528;
		case 46: goto tr529;
		case 60: goto tr530;
		case 61: goto tr531;
		case 62: goto tr532;
		case 91: goto tr533;
		case 94: goto tr534;
		case 123: goto tr535;
		case 124: goto tr198;
		case 126: goto tr536;
	}
	goto st93;
tr1132:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st135;
tr365:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st135;
tr420:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st135;
tr475:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st135;
tr530:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st135;
tr585:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st135;
tr640:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st135;
tr695:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st135;
st135:
	if ( ++p == pe )
		goto _out135;
case 135:
#line 5014 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr361;
		case 41: goto tr362;
		case 45: goto tr363;
		case 46: goto tr364;
		case 60: goto tr365;
		case 61: goto tr366;
		case 62: goto tr367;
		case 91: goto tr368;
		case 94: goto tr369;
		case 123: goto tr370;
		case 124: goto tr198;
		case 126: goto tr371;
	}
	goto st93;
tr1133:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st136;
tr366:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st136;
tr421:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st136;
tr476:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st136;
tr531:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st136;
tr586:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st136;
tr641:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st136;
tr696:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st136;
st136:
	if ( ++p == pe )
		goto _out136;
case 136:
#line 5073 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr471;
		case 41: goto tr472;
		case 45: goto tr473;
		case 46: goto tr474;
		case 60: goto tr475;
		case 61: goto tr476;
		case 62: goto tr477;
		case 91: goto tr478;
		case 94: goto tr479;
		case 123: goto tr480;
		case 124: goto tr198;
		case 126: goto tr481;
	}
	goto st93;
tr1134:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st137;
tr422:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st137;
tr477:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st137;
tr532:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st137;
tr587:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st137;
tr642:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st137;
tr697:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st137;
st137:
	if ( ++p == pe )
		goto _out137;
case 137:
#line 5128 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr416;
		case 41: goto tr417;
		case 45: goto tr418;
		case 46: goto tr419;
		case 60: goto tr420;
		case 61: goto tr421;
		case 62: goto tr422;
		case 91: goto tr423;
		case 94: goto tr424;
		case 123: goto tr425;
		case 124: goto tr198;
		case 126: goto tr426;
	}
	goto st93;
tr1135:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st138;
tr368:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st138;
tr423:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st138;
tr478:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st138;
tr533:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st138;
tr588:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st138;
tr643:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st138;
tr698:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st138;
st138:
	if ( ++p == pe )
		goto _out138;
case 138:
#line 5187 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1094;
		case 10: goto tr1095;
		case 35: goto tr1250;
		case 41: goto tr1251;
		case 93: goto st93;
		case 124: goto tr198;
	}
	goto tr1093;
tr1093:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st139;
st139:
	if ( ++p == pe )
		goto _out139;
case 139:
#line 5205 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st140;
		case 10: goto st165;
		case 35: goto tr316;
		case 41: goto tr317;
		case 93: goto tr318;
		case 124: goto tr198;
	}
	goto st139;
tr1094:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st140;
st140:
	if ( ++p == pe )
		goto _out140;
case 140:
#line 5223 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2050;
		case 41: goto tr2051;
		case 93: goto tr2052;
	}
	goto st140;
tr2050:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st141;
tr2392:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st141;
st141:
	if ( ++p == pe )
		goto _out141;
case 141:
#line 5244 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st102;
		case 93: goto tr2336;
	}
	goto tr1196;
tr1196:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st142;
st142:
	if ( ++p == pe )
		goto _out142;
case 142:
#line 5258 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1967;
		case 93: goto tr1968;
	}
	goto st142;
tr1888:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st143;
tr1967:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st143;
tr2051:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st143;
tr2348:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st143;
tr2374:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st143;
tr2393:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st143;
st143:
	if ( ++p == pe )
		goto _out143;
case 143:
#line 5298 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st144;
		case 46: goto st99;
		case 91: goto st163;
		case 93: goto tr205;
		case 123: goto st164;
	}
	goto st102;
st144:
	if ( ++p == pe )
		goto _out144;
case 144:
	switch( (*p) ) {
		case 35: goto st141;
		case 41: goto st143;
		case 93: goto tr2284;
	}
	goto tr1094;
tr2018:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st145;
tr2052:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st145;
tr2258:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st145;
tr2284:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st145;
st145:
	if ( ++p == pe )
		goto _out145;
case 145:
#line 5341 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr286;
		case 40: goto st146;
		case 41: goto tr287;
		case 46: goto st99;
		case 91: goto st147;
		case 123: goto st148;
	}
	goto st94;
st146:
	if ( ++p == pe )
		goto _out146;
case 146:
	switch( (*p) ) {
		case 35: goto tr286;
		case 41: goto tr287;
	}
	goto tr1061;
st147:
	if ( ++p == pe )
		goto _out147;
case 147:
	switch( (*p) ) {
		case 35: goto tr2392;
		case 41: goto tr2393;
		case 93: goto st94;
	}
	goto tr1094;
st148:
	if ( ++p == pe )
		goto _out148;
case 148:
	switch( (*p) ) {
		case 35: goto tr2406;
		case 41: goto tr2407;
		case 125: goto st94;
	}
	goto tr1073;
tr1073:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st149;
st149:
	if ( ++p == pe )
		goto _out149;
case 149:
#line 5388 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2016;
		case 41: goto tr2017;
		case 125: goto tr2018;
	}
	goto st149;
tr2016:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st150;
tr2406:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st150;
st150:
	if ( ++p == pe )
		goto _out150;
case 150:
#line 5409 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st104;
		case 125: goto tr2324;
	}
	goto tr1182;
tr1182:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st151;
st151:
	if ( ++p == pe )
		goto _out151;
case 151:
#line 5423 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1939;
		case 125: goto tr1940;
	}
	goto st151;
tr1887:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st152;
tr1939:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st152;
tr2017:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st152;
tr2364:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st152;
tr2381:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st152;
tr2407:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st152;
st152:
	if ( ++p == pe )
		goto _out152;
case 152:
#line 5463 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st153;
		case 46: goto st99;
		case 91: goto st154;
		case 123: goto st156;
		case 125: goto tr197;
	}
	goto st104;
st153:
	if ( ++p == pe )
		goto _out153;
case 153:
	switch( (*p) ) {
		case 35: goto st150;
		case 41: goto st152;
		case 125: goto tr2258;
	}
	goto tr1073;
st154:
	if ( ++p == pe )
		goto _out154;
case 154:
	switch( (*p) ) {
		case 93: goto st104;
		case 125: goto tr2348;
	}
	goto tr1210;
tr1210:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st155;
st155:
	if ( ++p == pe )
		goto _out155;
case 155:
#line 5499 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1887;
		case 125: goto tr1888;
	}
	goto st155;
st156:
	if ( ++p == pe )
		goto _out156;
case 156:
	if ( (*p) == 125 )
		goto tr197;
	goto tr1220;
tr1940:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st157;
tr1968:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st157;
tr2324:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st157;
tr2336:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st157;
st157:
	if ( ++p == pe )
		goto _out157;
case 157:
#line 5536 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st158;
		case 41: goto tr244;
		case 46: goto st99;
		case 91: goto st161;
		case 123: goto st162;
	}
	goto st96;
st158:
	if ( ++p == pe )
		goto _out158;
case 158:
	switch( (*p) ) {
		case 35: goto st160;
		case 41: goto tr244;
	}
	goto tr1105;
tr1105:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st159;
st159:
	if ( ++p == pe )
		goto _out159;
case 159:
#line 5562 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr338;
		case 41: goto tr339;
	}
	goto st159;
tr338:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st160;
st160:
	if ( ++p == pe )
		goto _out160;
case 160:
#line 5576 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr244;
	goto tr1179;
st161:
	if ( ++p == pe )
		goto _out161;
case 161:
	switch( (*p) ) {
		case 41: goto tr2374;
		case 93: goto st96;
	}
	goto tr1196;
st162:
	if ( ++p == pe )
		goto _out162;
case 162:
	switch( (*p) ) {
		case 41: goto tr2381;
		case 125: goto st96;
	}
	goto tr1182;
st163:
	if ( ++p == pe )
		goto _out163;
case 163:
	if ( (*p) == 93 )
		goto tr205;
	goto tr1207;
st164:
	if ( ++p == pe )
		goto _out164;
case 164:
	switch( (*p) ) {
		case 93: goto tr2364;
		case 125: goto st102;
	}
	goto tr1210;
tr1095:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st165;
st165:
	if ( ++p == pe )
		goto _out165;
case 165:
#line 5622 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st166;
		case 13: goto st167;
		case 35: goto tr2050;
		case 41: goto tr2051;
		case 93: goto tr2052;
	}
	goto st140;
st166:
	if ( ++p == pe )
		goto _out166;
case 166:
	switch( (*p) ) {
		case 35: goto tr2050;
		case 41: goto tr2051;
		case 93: goto tr2052;
		case 124: goto tr198;
	}
	goto st140;
st167:
	if ( ++p == pe )
		goto _out167;
case 167:
	switch( (*p) ) {
		case 10: goto st166;
		case 35: goto tr2050;
		case 41: goto tr2051;
		case 93: goto tr2052;
	}
	goto st140;
tr316:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st168;
tr1250:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st168;
st168:
	if ( ++p == pe )
		goto _out168;
case 168:
#line 5667 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1196;
		case 10: goto tr1197;
		case 41: goto st116;
		case 93: goto tr1199;
		case 124: goto tr198;
	}
	goto tr1195;
tr1195:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st169;
st169:
	if ( ++p == pe )
		goto _out169;
case 169:
#line 5684 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st142;
		case 10: goto st170;
		case 41: goto tr268;
		case 93: goto tr269;
		case 124: goto tr198;
	}
	goto st169;
tr1197:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st170;
st170:
	if ( ++p == pe )
		goto _out170;
case 170:
#line 5701 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st171;
		case 13: goto st172;
		case 41: goto tr1967;
		case 93: goto tr1968;
	}
	goto st142;
st171:
	if ( ++p == pe )
		goto _out171;
case 171:
	switch( (*p) ) {
		case 41: goto tr1967;
		case 93: goto tr1968;
		case 124: goto tr198;
	}
	goto st142;
st172:
	if ( ++p == pe )
		goto _out172;
case 172:
	switch( (*p) ) {
		case 10: goto st171;
		case 41: goto tr1967;
		case 93: goto tr1968;
	}
	goto st142;
tr213:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st173;
tr268:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st173;
tr317:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st173;
tr1212:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st173;
tr1236:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st173;
tr1251:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st173;
st173:
	if ( ++p == pe )
		goto _out173;
case 173:
#line 5763 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st102;
		case 10: goto st117;
		case 40: goto st174;
		case 46: goto st100;
		case 91: goto st204;
		case 93: goto tr1229;
		case 123: goto st205;
		case 124: goto tr198;
	}
	goto st116;
st174:
	if ( ++p == pe )
		goto _out174;
case 174:
	switch( (*p) ) {
		case 0: goto tr1094;
		case 10: goto tr1095;
		case 35: goto st168;
		case 41: goto st173;
		case 93: goto tr1098;
		case 124: goto tr198;
	}
	goto tr1093;
tr297:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st175;
tr318:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st175;
tr1077:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st175;
tr1098:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st175;
st175:
	if ( ++p == pe )
		goto _out175;
case 175:
#line 5812 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto st176;
		case 41: goto tr1242;
		case 46: goto st100;
		case 91: goto st138;
		case 123: goto st177;
		case 124: goto tr198;
	}
	goto st93;
st176:
	if ( ++p == pe )
		goto _out176;
case 176:
	switch( (*p) ) {
		case 0: goto tr1061;
		case 10: goto tr1069;
		case 35: goto tr360;
		case 41: goto tr1242;
		case 124: goto tr198;
	}
	goto tr1068;
tr1137:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st177;
tr370:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st177;
tr425:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st177;
tr480:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st177;
tr535:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st177;
tr590:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st177;
tr645:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st177;
tr700:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st177;
st177:
	if ( ++p == pe )
		goto _out177;
case 177:
#line 5877 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1073;
		case 10: goto tr1074;
		case 35: goto tr1256;
		case 41: goto tr1257;
		case 124: goto tr198;
		case 125: goto st93;
	}
	goto tr1072;
tr1072:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st178;
st178:
	if ( ++p == pe )
		goto _out178;
case 178:
#line 5895 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st149;
		case 10: goto st179;
		case 35: goto tr295;
		case 41: goto tr296;
		case 124: goto tr198;
		case 125: goto tr297;
	}
	goto st178;
tr1074:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st179;
st179:
	if ( ++p == pe )
		goto _out179;
case 179:
#line 5913 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st180;
		case 13: goto st181;
		case 35: goto tr2016;
		case 41: goto tr2017;
		case 125: goto tr2018;
	}
	goto st149;
st180:
	if ( ++p == pe )
		goto _out180;
case 180:
	switch( (*p) ) {
		case 35: goto tr2016;
		case 41: goto tr2017;
		case 124: goto tr198;
		case 125: goto tr2018;
	}
	goto st149;
st181:
	if ( ++p == pe )
		goto _out181;
case 181:
	switch( (*p) ) {
		case 10: goto st180;
		case 35: goto tr2016;
		case 41: goto tr2017;
		case 125: goto tr2018;
	}
	goto st149;
tr295:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st182;
tr1256:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st182;
st182:
	if ( ++p == pe )
		goto _out182;
case 182:
#line 5958 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1182;
		case 10: goto tr1183;
		case 41: goto st121;
		case 124: goto tr198;
		case 125: goto tr1185;
	}
	goto tr1181;
tr1181:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st183;
st183:
	if ( ++p == pe )
		goto _out183;
case 183:
#line 5975 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st151;
		case 10: goto st184;
		case 41: goto tr251;
		case 124: goto tr198;
		case 125: goto tr252;
	}
	goto st183;
tr1183:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st184;
st184:
	if ( ++p == pe )
		goto _out184;
case 184:
#line 5992 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st185;
		case 13: goto st186;
		case 41: goto tr1939;
		case 125: goto tr1940;
	}
	goto st151;
st185:
	if ( ++p == pe )
		goto _out185;
case 185:
	switch( (*p) ) {
		case 41: goto tr1939;
		case 124: goto tr198;
		case 125: goto tr1940;
	}
	goto st151;
st186:
	if ( ++p == pe )
		goto _out186;
case 186:
	switch( (*p) ) {
		case 10: goto st185;
		case 41: goto tr1939;
		case 125: goto tr1940;
	}
	goto st151;
tr212:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st187;
tr251:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st187;
tr296:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st187;
tr1232:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st187;
tr1240:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st187;
tr1257:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st187;
st187:
	if ( ++p == pe )
		goto _out187;
case 187:
#line 6054 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st104;
		case 10: goto st122;
		case 40: goto st188;
		case 46: goto st100;
		case 91: goto st189;
		case 123: goto st194;
		case 124: goto tr198;
		case 125: goto tr1226;
	}
	goto st121;
st188:
	if ( ++p == pe )
		goto _out188;
case 188:
	switch( (*p) ) {
		case 0: goto tr1073;
		case 10: goto tr1074;
		case 35: goto st182;
		case 41: goto st187;
		case 124: goto tr198;
		case 125: goto tr1077;
	}
	goto tr1072;
st189:
	if ( ++p == pe )
		goto _out189;
case 189:
	switch( (*p) ) {
		case 0: goto tr1210;
		case 10: goto tr1211;
		case 93: goto st121;
		case 124: goto tr198;
		case 125: goto tr1212;
	}
	goto tr1209;
tr1209:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st190;
st190:
	if ( ++p == pe )
		goto _out190;
case 190:
#line 6099 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st155;
		case 10: goto st191;
		case 93: goto tr212;
		case 124: goto tr198;
		case 125: goto tr213;
	}
	goto st190;
tr1211:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st191;
st191:
	if ( ++p == pe )
		goto _out191;
case 191:
#line 6116 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st192;
		case 13: goto st193;
		case 93: goto tr1887;
		case 125: goto tr1888;
	}
	goto st155;
st192:
	if ( ++p == pe )
		goto _out192;
case 192:
	switch( (*p) ) {
		case 93: goto tr1887;
		case 124: goto tr198;
		case 125: goto tr1888;
	}
	goto st155;
st193:
	if ( ++p == pe )
		goto _out193;
case 193:
	switch( (*p) ) {
		case 10: goto st192;
		case 93: goto tr1887;
		case 125: goto tr1888;
	}
	goto st155;
st194:
	if ( ++p == pe )
		goto _out194;
case 194:
	switch( (*p) ) {
		case 0: goto tr1220;
		case 10: goto tr1225;
		case 124: goto tr198;
		case 125: goto tr1226;
	}
	goto tr1224;
tr252:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st195;
tr269:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st195;
tr1185:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st195;
tr1199:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st195;
st195:
	if ( ++p == pe )
		goto _out195;
case 195:
#line 6179 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st96;
		case 10: goto st110;
		case 40: goto st196;
		case 41: goto tr1110;
		case 46: goto st100;
		case 91: goto st202;
		case 123: goto st203;
		case 124: goto tr198;
	}
	goto st109;
st196:
	if ( ++p == pe )
		goto _out196;
case 196:
	switch( (*p) ) {
		case 0: goto tr1105;
		case 10: goto tr1108;
		case 35: goto st201;
		case 41: goto tr1110;
		case 124: goto tr198;
	}
	goto tr1107;
tr1107:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st197;
st197:
	if ( ++p == pe )
		goto _out197;
case 197:
#line 6211 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st159;
		case 10: goto st198;
		case 35: goto tr2088;
		case 41: goto tr2089;
		case 124: goto tr198;
	}
	goto st197;
tr1108:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st198;
st198:
	if ( ++p == pe )
		goto _out198;
case 198:
#line 6228 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st199;
		case 13: goto st200;
		case 35: goto tr338;
		case 41: goto tr339;
	}
	goto st159;
st199:
	if ( ++p == pe )
		goto _out199;
case 199:
	switch( (*p) ) {
		case 35: goto tr338;
		case 41: goto tr339;
		case 124: goto tr198;
	}
	goto st159;
st200:
	if ( ++p == pe )
		goto _out200;
case 200:
	switch( (*p) ) {
		case 10: goto st199;
		case 35: goto tr338;
		case 41: goto tr339;
	}
	goto st159;
tr2088:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st201;
st201:
	if ( ++p == pe )
		goto _out201;
case 201:
#line 6264 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1179;
		case 10: goto tr1180;
		case 41: goto tr1110;
		case 124: goto tr198;
	}
	goto tr1178;
st202:
	if ( ++p == pe )
		goto _out202;
case 202:
	switch( (*p) ) {
		case 0: goto tr1196;
		case 10: goto tr1197;
		case 41: goto tr1236;
		case 93: goto st109;
		case 124: goto tr198;
	}
	goto tr1195;
st203:
	if ( ++p == pe )
		goto _out203;
case 203:
	switch( (*p) ) {
		case 0: goto tr1182;
		case 10: goto tr1183;
		case 41: goto tr1240;
		case 124: goto tr198;
		case 125: goto st109;
	}
	goto tr1181;
st204:
	if ( ++p == pe )
		goto _out204;
case 204:
	switch( (*p) ) {
		case 0: goto tr1207;
		case 10: goto tr1208;
		case 93: goto tr1229;
		case 124: goto tr198;
	}
	goto tr1206;
st205:
	if ( ++p == pe )
		goto _out205;
case 205:
	switch( (*p) ) {
		case 0: goto tr1210;
		case 10: goto tr1211;
		case 93: goto tr1232;
		case 124: goto tr198;
		case 125: goto st116;
	}
	goto tr1209;
tr1136:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st206;
tr369:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st206;
tr424:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st206;
tr479:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st206;
tr534:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st206;
tr589:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st206;
tr644:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st206;
tr699:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st206;
st206:
	if ( ++p == pe )
		goto _out206;
case 206:
#line 6359 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr581;
		case 41: goto tr582;
		case 45: goto tr583;
		case 46: goto tr584;
		case 60: goto tr585;
		case 61: goto tr586;
		case 62: goto tr587;
		case 91: goto tr588;
		case 94: goto tr589;
		case 123: goto tr590;
		case 124: goto tr198;
		case 126: goto tr591;
	}
	goto st93;
tr1138:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st207;
tr371:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st207;
tr426:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st207;
tr481:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st207;
tr536:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st207;
tr591:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st207;
tr646:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st207;
tr701:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st207;
st207:
	if ( ++p == pe )
		goto _out207;
case 207:
#line 6418 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr636;
		case 41: goto tr637;
		case 45: goto tr638;
		case 46: goto tr639;
		case 60: goto tr640;
		case 61: goto tr641;
		case 62: goto tr642;
		case 91: goto tr643;
		case 94: goto tr644;
		case 123: goto tr645;
		case 124: goto tr198;
		case 126: goto tr646;
	}
	goto st93;
tr367:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st208;
st208:
	if ( ++p == pe )
		goto _out208;
case 208:
#line 6445 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st94;
		case 10: goto st105;
		case 35: goto tr360;
		case 40: goto tr691;
		case 41: goto tr692;
		case 45: goto tr693;
		case 46: goto tr694;
		case 60: goto tr695;
		case 61: goto tr696;
		case 62: goto tr697;
		case 91: goto tr698;
		case 94: goto tr699;
		case 123: goto tr700;
		case 124: goto tr198;
		case 126: goto tr701;
	}
	goto st93;
tr1800:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st209;
tr166:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st209;
tr915:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st209;
tr929:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st209;
st209:
	if ( ++p == pe )
		goto _out209;
case 209:
#line 6490 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 124: goto tr198;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr2235;
	goto st74;
tr2235:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st210;
st210:
	if ( ++p == pe )
		goto _out210;
case 210:
#line 6507 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr925;
		case 41: goto tr926;
		case 45: goto tr927;
		case 46: goto tr928;
		case 47: goto tr929;
		case 60: goto tr931;
		case 61: goto tr932;
		case 62: goto tr933;
		case 91: goto tr934;
		case 92: goto tr935;
		case 94: goto tr936;
		case 123: goto tr937;
		case 124: goto tr198;
		case 126: goto tr938;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st210;
	goto st74;
tr1805:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st211;
tr171:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st211;
tr921:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st211;
tr935:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st211;
st211:
	if ( ++p == pe )
		goto _out211;
case 211:
#line 6555 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 124: goto tr198;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr839;
	goto st74;
tr839:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st212;
st212:
	if ( ++p == pe )
		goto _out212;
case 212:
#line 6572 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st75;
		case 40: goto tr911;
		case 41: goto tr912;
		case 45: goto tr913;
		case 46: goto tr914;
		case 47: goto tr915;
		case 60: goto tr917;
		case 61: goto tr918;
		case 62: goto tr919;
		case 91: goto tr920;
		case 92: goto tr921;
		case 94: goto tr922;
		case 123: goto tr923;
		case 124: goto tr198;
		case 126: goto tr924;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st212;
	goto st74;
tr1117:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr347:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr405:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr460:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr515:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr570:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr625:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
tr680:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st213;
st213:
	if ( ++p == pe )
		goto _out213;
case 213:
#line 6648 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr1117;
		case 41: goto tr1243;
		case 45: goto tr1119;
		case 46: goto tr1120;
		case 60: goto tr1121;
		case 61: goto tr1122;
		case 62: goto tr1123;
		case 91: goto tr1124;
		case 94: goto tr1125;
		case 123: goto tr1126;
		case 126: goto tr1127;
	}
	goto tr1115;
tr1119:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st214;
tr349:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st214;
tr407:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st214;
tr462:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st214;
tr517:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st214;
tr572:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st214;
tr627:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st214;
tr682:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st214;
st214:
	if ( ++p == pe )
		goto _out214;
case 214:
#line 6704 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr515;
		case 41: goto tr516;
		case 45: goto tr517;
		case 46: goto tr518;
		case 60: goto tr519;
		case 61: goto tr520;
		case 62: goto tr521;
		case 91: goto tr522;
		case 94: goto tr523;
		case 123: goto tr524;
		case 126: goto tr525;
	}
	goto st67;
tr1121:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st215;
tr351:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st215;
tr409:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st215;
tr464:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st215;
tr519:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st215;
tr574:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st215;
tr629:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st215;
tr684:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st215;
st215:
	if ( ++p == pe )
		goto _out215;
case 215:
#line 6760 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr347;
		case 41: goto tr348;
		case 45: goto tr349;
		case 46: goto tr350;
		case 60: goto tr351;
		case 61: goto tr352;
		case 62: goto tr353;
		case 91: goto tr354;
		case 94: goto tr355;
		case 123: goto tr356;
		case 126: goto tr357;
	}
	goto st67;
tr1122:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st216;
tr352:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st216;
tr410:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st216;
tr465:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st216;
tr520:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st216;
tr575:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st216;
tr630:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st216;
tr685:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st216;
st216:
	if ( ++p == pe )
		goto _out216;
case 216:
#line 6816 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr460;
		case 41: goto tr461;
		case 45: goto tr462;
		case 46: goto tr463;
		case 60: goto tr464;
		case 61: goto tr465;
		case 62: goto tr466;
		case 91: goto tr467;
		case 94: goto tr468;
		case 123: goto tr469;
		case 126: goto tr470;
	}
	goto st67;
tr1123:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st217;
tr411:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st217;
tr466:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st217;
tr521:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st217;
tr576:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st217;
tr631:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st217;
tr686:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st217;
st217:
	if ( ++p == pe )
		goto _out217;
case 217:
#line 6868 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr405;
		case 41: goto tr406;
		case 45: goto tr407;
		case 46: goto tr408;
		case 60: goto tr409;
		case 61: goto tr410;
		case 62: goto tr411;
		case 91: goto tr412;
		case 94: goto tr413;
		case 123: goto tr414;
		case 126: goto tr415;
	}
	goto st67;
tr1124:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st218;
tr354:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st218;
tr412:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st218;
tr467:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st218;
tr522:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st218;
tr577:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st218;
tr632:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st218;
tr687:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st218;
st218:
	if ( ++p == pe )
		goto _out218;
case 218:
#line 6924 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2396;
		case 41: goto tr2397;
		case 93: goto st67;
	}
	goto tr2288;
tr2288:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st219;
st219:
	if ( ++p == pe )
		goto _out219;
case 219:
#line 6939 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2057;
		case 41: goto tr2058;
		case 93: goto tr2059;
	}
	goto st219;
tr2057:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st220;
tr2396:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st220;
st220:
	if ( ++p == pe )
		goto _out220;
case 220:
#line 6960 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st86;
		case 93: goto tr2339;
	}
	goto tr2338;
tr2338:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st221;
st221:
	if ( ++p == pe )
		goto _out221;
case 221:
#line 6974 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1972;
		case 93: goto tr1973;
	}
	goto st221;
tr1893:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st222;
tr1972:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st222;
tr2058:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st222;
tr2351:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st222;
tr2376:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st222;
tr2397:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st222;
st222:
	if ( ++p == pe )
		goto _out222;
case 222:
#line 7014 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st223;
		case 46: goto st72;
		case 91: goto st241;
		case 93: goto tr1869;
		case 123: goto st242;
	}
	goto st86;
st223:
	if ( ++p == pe )
		goto _out223;
case 223:
	switch( (*p) ) {
		case 35: goto st220;
		case 41: goto st222;
		case 93: goto tr2291;
	}
	goto tr2288;
tr2025:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st224;
tr2059:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st224;
tr2265:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st224;
tr2291:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st224;
st224:
	if ( ++p == pe )
		goto _out224;
case 224:
#line 7057 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto st225;
		case 41: goto tr1986;
		case 46: goto st72;
		case 91: goto st218;
		case 123: goto st226;
	}
	goto st67;
st225:
	if ( ++p == pe )
		goto _out225;
case 225:
	switch( (*p) ) {
		case 35: goto tr346;
		case 41: goto tr1986;
	}
	goto tr1115;
tr1126:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st226;
tr356:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st226;
tr414:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st226;
tr469:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st226;
tr524:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st226;
tr579:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st226;
tr634:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st226;
tr689:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st226;
st226:
	if ( ++p == pe )
		goto _out226;
case 226:
#line 7116 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2410;
		case 41: goto tr2411;
		case 125: goto st67;
	}
	goto tr2262;
tr2262:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st227;
st227:
	if ( ++p == pe )
		goto _out227;
case 227:
#line 7131 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2023;
		case 41: goto tr2024;
		case 125: goto tr2025;
	}
	goto st227;
tr2023:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st228;
tr2410:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st228;
st228:
	if ( ++p == pe )
		goto _out228;
case 228:
#line 7152 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st89;
		case 125: goto tr2327;
	}
	goto tr2326;
tr2326:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st229;
st229:
	if ( ++p == pe )
		goto _out229;
case 229:
#line 7166 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1944;
		case 125: goto tr1945;
	}
	goto st229;
tr1892:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st230;
tr1944:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st230;
tr2024:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st230;
tr2366:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st230;
tr2383:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st230;
tr2411:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st230;
st230:
	if ( ++p == pe )
		goto _out230;
case 230:
#line 7206 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st231;
		case 46: goto st72;
		case 91: goto st232;
		case 123: goto st234;
		case 125: goto tr1837;
	}
	goto st89;
st231:
	if ( ++p == pe )
		goto _out231;
case 231:
	switch( (*p) ) {
		case 35: goto st228;
		case 41: goto st230;
		case 125: goto tr2265;
	}
	goto tr2262;
st232:
	if ( ++p == pe )
		goto _out232;
case 232:
	switch( (*p) ) {
		case 93: goto st89;
		case 125: goto tr2351;
	}
	goto tr2350;
tr2350:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st233;
st233:
	if ( ++p == pe )
		goto _out233;
case 233:
#line 7242 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1892;
		case 125: goto tr1893;
	}
	goto st233;
st234:
	if ( ++p == pe )
		goto _out234;
case 234:
	if ( (*p) == 125 )
		goto tr1837;
	goto tr2468;
tr1945:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st235;
tr1973:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st235;
tr2327:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st235;
tr2339:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st235;
st235:
	if ( ++p == pe )
		goto _out235;
case 235:
#line 7279 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st236;
		case 41: goto tr1917;
		case 46: goto st72;
		case 91: goto st239;
		case 123: goto st240;
	}
	goto st69;
st236:
	if ( ++p == pe )
		goto _out236;
case 236:
	switch( (*p) ) {
		case 35: goto st238;
		case 41: goto tr1917;
	}
	goto tr2462;
tr2462:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st237;
st237:
	if ( ++p == pe )
		goto _out237;
case 237:
#line 7305 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2455;
		case 41: goto tr2456;
	}
	goto st237;
tr2455:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st238;
st238:
	if ( ++p == pe )
		goto _out238;
case 238:
#line 7319 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1917;
	goto tr2467;
st239:
	if ( ++p == pe )
		goto _out239;
case 239:
	switch( (*p) ) {
		case 41: goto tr2376;
		case 93: goto st69;
	}
	goto tr2338;
st240:
	if ( ++p == pe )
		goto _out240;
case 240:
	switch( (*p) ) {
		case 41: goto tr2383;
		case 125: goto st69;
	}
	goto tr2326;
st241:
	if ( ++p == pe )
		goto _out241;
case 241:
	if ( (*p) == 93 )
		goto tr1869;
	goto tr2469;
st242:
	if ( ++p == pe )
		goto _out242;
case 242:
	switch( (*p) ) {
		case 93: goto tr2366;
		case 125: goto st86;
	}
	goto tr2350;
tr1125:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st243;
tr355:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st243;
tr413:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st243;
tr468:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st243;
tr523:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st243;
tr578:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st243;
tr633:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st243;
tr688:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st243;
st243:
	if ( ++p == pe )
		goto _out243;
case 243:
#line 7397 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr570;
		case 41: goto tr571;
		case 45: goto tr572;
		case 46: goto tr573;
		case 60: goto tr574;
		case 61: goto tr575;
		case 62: goto tr576;
		case 91: goto tr577;
		case 94: goto tr578;
		case 123: goto tr579;
		case 126: goto tr580;
	}
	goto st67;
tr1127:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st244;
tr357:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st244;
tr415:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st244;
tr470:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st244;
tr525:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st244;
tr580:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st244;
tr635:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st244;
tr690:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st244;
st244:
	if ( ++p == pe )
		goto _out244;
case 244:
#line 7453 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr625;
		case 41: goto tr626;
		case 45: goto tr627;
		case 46: goto tr628;
		case 60: goto tr629;
		case 61: goto tr630;
		case 62: goto tr631;
		case 91: goto tr632;
		case 94: goto tr633;
		case 123: goto tr634;
		case 126: goto tr635;
	}
	goto st67;
tr353:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st245;
st245:
	if ( ++p == pe )
		goto _out245;
case 245:
#line 7477 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr346;
		case 40: goto tr680;
		case 41: goto tr681;
		case 45: goto tr682;
		case 46: goto tr683;
		case 60: goto tr684;
		case 61: goto tr685;
		case 62: goto tr686;
		case 91: goto tr687;
		case 94: goto tr688;
		case 123: goto tr689;
		case 126: goto tr690;
	}
	goto st67;
tr1810:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_close);}
	goto st246;
st246:
	if ( ++p == pe )
		goto _out246;
case 246:
#line 7505 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr835;
		case 10: goto st247;
		case 124: goto tr202;
	}
	goto st62;
st247:
	if ( ++p == pe )
		goto _out247;
case 247:
	switch( (*p) ) {
		case 10: goto st64;
		case 13: goto st248;
		case 40: goto tr1280;
		case 41: goto tr1281;
		case 45: goto tr1282;
		case 46: goto tr1283;
		case 60: goto tr1284;
		case 61: goto tr1285;
		case 62: goto tr1286;
		case 91: goto tr1287;
		case 94: goto tr1288;
		case 123: goto tr1289;
		case 124: goto tr1290;
		case 126: goto tr1291;
	}
	goto tr835;
st248:
	if ( ++p == pe )
		goto _out248;
case 248:
	if ( (*p) == 10 )
		goto st64;
	goto tr949;
tr952:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr962:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr972:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr982:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr993:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr1003:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr1013:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr145:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr1811:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr1051:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr1023:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
tr1037:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st249;
st249:
	if ( ++p == pe )
		goto _out249;
case 249:
#line 7620 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1079;
		case 10: goto tr1080;
		case 35: goto st265;
		case 40: goto tr1139;
		case 41: goto tr1140;
		case 45: goto tr1141;
		case 46: goto tr1142;
		case 60: goto tr1143;
		case 61: goto tr1144;
		case 62: goto tr1145;
		case 91: goto tr1146;
		case 94: goto tr1147;
		case 123: goto tr1148;
		case 124: goto tr202;
		case 126: goto tr1149;
	}
	goto tr1078;
tr1078:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st250;
st250:
	if ( ++p == pe )
		goto _out250;
case 250:
#line 7647 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 41: goto tr302;
		case 124: goto tr202;
	}
	goto st250;
tr1079:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st251;
st251:
	if ( ++p == pe )
		goto _out251;
case 251:
#line 7664 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2001;
		case 41: goto tr2002;
	}
	goto st251;
tr2001:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st252;
st252:
	if ( ++p == pe )
		goto _out252;
case 252:
#line 7678 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr949;
	goto tr1187;
tr1187:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st253;
st253:
	if ( ++p == pe )
		goto _out253;
case 253:
#line 7690 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1911;
	goto st253;
tr1826:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st254;
tr1859:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st254;
tr1911:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st254;
tr2002:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st254;
tr2083:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st254;
st254:
	if ( ++p == pe )
		goto _out254;
case 254:
#line 7720 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st255;
		case 46: goto st256;
		case 91: goto st258;
		case 123: goto st260;
	}
	goto tr949;
st255:
	if ( ++p == pe )
		goto _out255;
case 255:
	switch( (*p) ) {
		case 35: goto st252;
		case 41: goto st254;
	}
	goto tr1079;
st256:
	if ( ++p == pe )
		goto _out256;
case 256:
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto tr949;
		case 32: goto tr1277;
	}
	goto tr1276;
tr1277:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st257;
tr1142:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st257;
tr375:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st257;
tr430:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st257;
tr485:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st257;
tr985:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st257;
tr540:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st257;
tr595:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st257;
tr650:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st257;
tr148:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st257;
tr1814:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st257;
tr705:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st257;
tr1026:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st257;
tr1040:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st257;
st257:
	if ( ++p == pe )
		goto _out257;
case 257:
#line 7815 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 32: goto tr1277;
		case 124: goto tr202;
	}
	goto tr1276;
st258:
	if ( ++p == pe )
		goto _out258;
case 258:
	if ( (*p) == 93 )
		goto tr949;
	goto tr1214;
tr1214:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st259;
st259:
	if ( ++p == pe )
		goto _out259;
case 259:
#line 7838 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1859;
	goto st259;
st260:
	if ( ++p == pe )
		goto _out260;
case 260:
	if ( (*p) == 125 )
		goto tr949;
	goto tr1223;
tr1223:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st261;
st261:
	if ( ++p == pe )
		goto _out261;
case 261:
#line 7857 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1826;
	goto st261;
tr1080:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st262;
st262:
	if ( ++p == pe )
		goto _out262;
case 262:
#line 7869 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st263;
		case 13: goto st264;
		case 35: goto tr2001;
		case 41: goto tr2002;
	}
	goto st251;
st263:
	if ( ++p == pe )
		goto _out263;
case 263:
	switch( (*p) ) {
		case 35: goto tr2001;
		case 41: goto tr2002;
		case 124: goto tr202;
	}
	goto st251;
st264:
	if ( ++p == pe )
		goto _out264;
case 264:
	switch( (*p) ) {
		case 10: goto st263;
		case 35: goto tr2001;
		case 41: goto tr2002;
	}
	goto st251;
tr301:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st265;
st265:
	if ( ++p == pe )
		goto _out265;
case 265:
#line 7905 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1187;
		case 10: goto tr1188;
		case 41: goto st62;
		case 124: goto tr202;
	}
	goto tr1186;
tr1186:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st266;
st266:
	if ( ++p == pe )
		goto _out266;
case 266:
#line 7921 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st253;
		case 10: goto st267;
		case 41: goto tr256;
		case 124: goto tr202;
	}
	goto st266;
tr1188:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st267;
st267:
	if ( ++p == pe )
		goto _out267;
case 267:
#line 7937 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st268;
		case 13: goto st269;
		case 41: goto tr1911;
	}
	goto st253;
st268:
	if ( ++p == pe )
		goto _out268;
case 268:
	switch( (*p) ) {
		case 41: goto tr1911;
		case 124: goto tr202;
	}
	goto st253;
st269:
	if ( ++p == pe )
		goto _out269;
case 269:
	switch( (*p) ) {
		case 10: goto st268;
		case 41: goto tr1911;
	}
	goto st253;
tr203:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st270;
tr217:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st270;
tr256:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st270;
tr302:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st270;
tr344:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st270;
st270:
	if ( ++p == pe )
		goto _out270;
case 270:
#line 7988 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto st271;
		case 46: goto st257;
		case 91: goto st272;
		case 123: goto st277;
		case 124: goto tr202;
	}
	goto st62;
st271:
	if ( ++p == pe )
		goto _out271;
case 271:
	switch( (*p) ) {
		case 0: goto tr1079;
		case 10: goto tr1080;
		case 35: goto st265;
		case 41: goto st270;
		case 124: goto tr202;
	}
	goto tr1078;
tr958:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st272;
tr968:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st272;
tr978:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st272;
tr989:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st272;
tr999:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st272;
tr1009:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st272;
tr1019:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st272;
tr153:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st272;
tr1819:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st272;
tr1057:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st272;
tr1032:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st272;
tr1046:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st272;
st272:
	if ( ++p == pe )
		goto _out272;
case 272:
#line 8071 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1214;
		case 10: goto tr1215;
		case 93: goto st62;
		case 124: goto tr202;
	}
	goto tr1213;
tr1213:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st273;
st273:
	if ( ++p == pe )
		goto _out273;
case 273:
#line 8087 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st259;
		case 10: goto st274;
		case 93: goto tr217;
		case 124: goto tr202;
	}
	goto st273;
tr1215:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st274;
st274:
	if ( ++p == pe )
		goto _out274;
case 274:
#line 8103 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st275;
		case 13: goto st276;
		case 93: goto tr1859;
	}
	goto st259;
st275:
	if ( ++p == pe )
		goto _out275;
case 275:
	switch( (*p) ) {
		case 93: goto tr1859;
		case 124: goto tr202;
	}
	goto st259;
st276:
	if ( ++p == pe )
		goto _out276;
case 276:
	switch( (*p) ) {
		case 10: goto st275;
		case 93: goto tr1859;
	}
	goto st259;
tr960:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st277;
tr970:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st277;
tr980:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st277;
tr991:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st277;
tr1001:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st277;
tr1011:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st277;
tr1021:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st277;
tr156:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st277;
tr1822:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st277;
tr1059:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st277;
tr1035:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st277;
tr1049:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st277;
st277:
	if ( ++p == pe )
		goto _out277;
case 277:
#line 8188 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1223;
		case 10: goto tr1228;
		case 124: goto tr202;
		case 125: goto st62;
	}
	goto tr1227;
tr1227:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st278;
st278:
	if ( ++p == pe )
		goto _out278;
case 278:
#line 8204 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st261;
		case 10: goto st279;
		case 124: goto tr202;
		case 125: goto tr203;
	}
	goto st278;
tr1228:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st279;
st279:
	if ( ++p == pe )
		goto _out279;
case 279:
#line 8220 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st280;
		case 13: goto st281;
		case 125: goto tr1826;
	}
	goto st261;
st280:
	if ( ++p == pe )
		goto _out280;
case 280:
	switch( (*p) ) {
		case 124: goto tr202;
		case 125: goto tr1826;
	}
	goto st261;
st281:
	if ( ++p == pe )
		goto _out281;
case 281:
	switch( (*p) ) {
		case 10: goto st280;
		case 125: goto tr1826;
	}
	goto st261;
tr1139:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr372:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr427:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr482:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr537:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr592:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr647:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
tr702:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st282;
st282:
	if ( ++p == pe )
		goto _out282;
case 282:
#line 8299 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1079;
		case 10: goto tr1080;
		case 35: goto tr301;
		case 40: goto tr1139;
		case 41: goto tr1245;
		case 45: goto tr1141;
		case 46: goto tr1142;
		case 60: goto tr1143;
		case 61: goto tr1144;
		case 62: goto tr1145;
		case 91: goto tr1146;
		case 94: goto tr1147;
		case 123: goto tr1148;
		case 124: goto tr202;
		case 126: goto tr1149;
	}
	goto tr1078;
tr1140:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr953:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr963:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr973:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr983:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr994:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr1004:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr1014:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr146:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr1812:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr373:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr428:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr483:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr538:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr593:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr648:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr1052:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr703:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
tr1024:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr1038:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st283;
tr1245:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st283;
st283:
	if ( ++p == pe )
		goto _out283;
case 283:
#line 8470 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr982;
		case 41: goto tr983;
		case 45: goto tr984;
		case 46: goto tr985;
		case 60: goto tr986;
		case 61: goto tr987;
		case 62: goto tr988;
		case 91: goto tr989;
		case 94: goto tr990;
		case 123: goto tr991;
		case 124: goto tr202;
		case 126: goto tr992;
	}
	goto st62;
tr954:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st284;
tr964:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st284;
tr974:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st284;
tr984:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st284;
tr995:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st284;
tr1005:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st284;
tr1015:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st284;
tr147:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st284;
tr1813:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st284;
tr1053:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st284;
tr1025:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st284;
tr1039:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st284;
st284:
	if ( ++p == pe )
		goto _out284;
case 284:
#line 8548 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr993;
		case 41: goto tr994;
		case 45: goto tr995;
		case 46: goto tr540;
		case 60: goto tr996;
		case 61: goto tr997;
		case 62: goto tr998;
		case 91: goto tr999;
		case 94: goto tr1000;
		case 123: goto tr1001;
		case 124: goto tr202;
		case 126: goto tr1002;
	}
	goto st62;
tr955:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st285;
tr965:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st285;
tr975:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st285;
tr986:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st285;
tr996:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st285;
tr1006:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st285;
tr1016:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st285;
tr150:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st285;
tr1816:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st285;
tr1054:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st285;
tr1029:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st285;
tr1043:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st285;
st285:
	if ( ++p == pe )
		goto _out285;
case 285:
#line 8626 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr952;
		case 41: goto tr953;
		case 45: goto tr954;
		case 46: goto tr375;
		case 60: goto tr955;
		case 61: goto tr956;
		case 62: goto tr957;
		case 91: goto tr958;
		case 94: goto tr959;
		case 123: goto tr960;
		case 124: goto tr202;
		case 126: goto tr961;
	}
	goto st62;
tr956:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st286;
tr966:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st286;
tr976:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st286;
tr987:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st286;
tr997:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st286;
tr1007:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st286;
tr1017:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st286;
tr151:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st286;
tr1817:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st286;
tr1055:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st286;
tr1030:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st286;
tr1044:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st286;
st286:
	if ( ++p == pe )
		goto _out286;
case 286:
#line 8704 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr972;
		case 41: goto tr973;
		case 45: goto tr974;
		case 46: goto tr485;
		case 60: goto tr975;
		case 61: goto tr976;
		case 62: goto tr977;
		case 91: goto tr978;
		case 94: goto tr979;
		case 123: goto tr980;
		case 124: goto tr202;
		case 126: goto tr981;
	}
	goto st62;
tr967:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st287;
tr977:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st287;
tr988:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st287;
tr998:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st287;
tr1008:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st287;
tr1018:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st287;
tr152:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st287;
tr1818:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st287;
tr1056:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st287;
tr1031:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st287;
tr1045:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st287;
st287:
	if ( ++p == pe )
		goto _out287;
case 287:
#line 8778 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr962;
		case 41: goto tr963;
		case 45: goto tr964;
		case 46: goto tr430;
		case 60: goto tr965;
		case 61: goto tr966;
		case 62: goto tr967;
		case 91: goto tr968;
		case 94: goto tr969;
		case 123: goto tr970;
		case 124: goto tr202;
		case 126: goto tr971;
	}
	goto st62;
tr959:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st288;
tr969:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st288;
tr979:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st288;
tr990:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st288;
tr1000:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st288;
tr1010:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st288;
tr1020:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st288;
tr155:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st288;
tr1821:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st288;
tr1058:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st288;
tr1034:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st288;
tr1048:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st288;
st288:
	if ( ++p == pe )
		goto _out288;
case 288:
#line 8856 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr1003;
		case 41: goto tr1004;
		case 45: goto tr1005;
		case 46: goto tr595;
		case 60: goto tr1006;
		case 61: goto tr1007;
		case 62: goto tr1008;
		case 91: goto tr1009;
		case 94: goto tr1010;
		case 123: goto tr1011;
		case 124: goto tr202;
		case 126: goto tr1012;
	}
	goto st62;
tr961:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st289;
tr971:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st289;
tr981:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st289;
tr992:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st289;
tr1002:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st289;
tr1012:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st289;
tr1022:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st289;
tr157:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st289;
tr1823:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st289;
tr1060:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st289;
tr1036:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st289;
tr1050:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st289;
st289:
	if ( ++p == pe )
		goto _out289;
case 289:
#line 8934 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr1013;
		case 41: goto tr1014;
		case 45: goto tr1015;
		case 46: goto tr650;
		case 60: goto tr1016;
		case 61: goto tr1017;
		case 62: goto tr1018;
		case 91: goto tr1019;
		case 94: goto tr1020;
		case 123: goto tr1021;
		case 124: goto tr202;
		case 126: goto tr1022;
	}
	goto st62;
tr957:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st290;
st290:
	if ( ++p == pe )
		goto _out290;
case 290:
#line 8960 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr1051;
		case 41: goto tr1052;
		case 45: goto tr1053;
		case 46: goto tr705;
		case 60: goto tr1054;
		case 61: goto tr1055;
		case 62: goto tr1056;
		case 91: goto tr1057;
		case 94: goto tr1058;
		case 123: goto tr1059;
		case 124: goto tr202;
		case 126: goto tr1060;
	}
	goto st62;
tr1141:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st291;
tr374:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st291;
tr429:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st291;
tr484:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st291;
tr539:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st291;
tr594:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st291;
tr649:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st291;
tr704:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st291;
st291:
	if ( ++p == pe )
		goto _out291;
case 291:
#line 9018 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr537;
		case 41: goto tr538;
		case 45: goto tr539;
		case 46: goto tr540;
		case 60: goto tr541;
		case 61: goto tr542;
		case 62: goto tr543;
		case 91: goto tr544;
		case 94: goto tr545;
		case 123: goto tr546;
		case 124: goto tr202;
		case 126: goto tr547;
	}
	goto st250;
tr1143:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st292;
tr376:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st292;
tr431:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st292;
tr486:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st292;
tr541:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st292;
tr596:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st292;
tr651:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st292;
tr706:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st292;
st292:
	if ( ++p == pe )
		goto _out292;
case 292:
#line 9077 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr372;
		case 41: goto tr373;
		case 45: goto tr374;
		case 46: goto tr375;
		case 60: goto tr376;
		case 61: goto tr377;
		case 62: goto tr378;
		case 91: goto tr379;
		case 94: goto tr380;
		case 123: goto tr381;
		case 124: goto tr202;
		case 126: goto tr382;
	}
	goto st250;
tr1144:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st293;
tr377:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st293;
tr432:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st293;
tr487:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st293;
tr542:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st293;
tr597:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st293;
tr652:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st293;
tr707:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st293;
st293:
	if ( ++p == pe )
		goto _out293;
case 293:
#line 9136 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr482;
		case 41: goto tr483;
		case 45: goto tr484;
		case 46: goto tr485;
		case 60: goto tr486;
		case 61: goto tr487;
		case 62: goto tr488;
		case 91: goto tr489;
		case 94: goto tr490;
		case 123: goto tr491;
		case 124: goto tr202;
		case 126: goto tr492;
	}
	goto st250;
tr1145:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st294;
tr433:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st294;
tr488:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st294;
tr543:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st294;
tr598:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st294;
tr653:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st294;
tr708:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st294;
st294:
	if ( ++p == pe )
		goto _out294;
case 294:
#line 9191 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr427;
		case 41: goto tr428;
		case 45: goto tr429;
		case 46: goto tr430;
		case 60: goto tr431;
		case 61: goto tr432;
		case 62: goto tr433;
		case 91: goto tr434;
		case 94: goto tr435;
		case 123: goto tr436;
		case 124: goto tr202;
		case 126: goto tr437;
	}
	goto st250;
tr1146:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st295;
tr379:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st295;
tr434:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st295;
tr489:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st295;
tr544:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st295;
tr599:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st295;
tr654:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st295;
tr709:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st295;
st295:
	if ( ++p == pe )
		goto _out295;
case 295:
#line 9250 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1100;
		case 10: goto tr1101;
		case 35: goto tr1252;
		case 41: goto tr1253;
		case 93: goto st250;
		case 124: goto tr202;
	}
	goto tr1099;
tr1099:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st296;
st296:
	if ( ++p == pe )
		goto _out296;
case 296:
#line 9268 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st297;
		case 10: goto st322;
		case 35: goto tr322;
		case 41: goto tr323;
		case 93: goto tr324;
		case 124: goto tr202;
	}
	goto st296;
tr1100:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st297;
st297:
	if ( ++p == pe )
		goto _out297;
case 297:
#line 9286 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2053;
		case 41: goto tr2054;
		case 93: goto tr2055;
	}
	goto st297;
tr2053:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st298;
tr2394:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st298;
st298:
	if ( ++p == pe )
		goto _out298;
case 298:
#line 9307 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st259;
		case 93: goto tr2337;
	}
	goto tr1201;
tr1201:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st299;
st299:
	if ( ++p == pe )
		goto _out299;
case 299:
#line 9321 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1969;
		case 93: goto tr1970;
	}
	goto st299;
tr1890:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st300;
tr1969:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st300;
tr2054:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st300;
tr2349:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st300;
tr2375:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st300;
tr2395:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st300;
st300:
	if ( ++p == pe )
		goto _out300;
case 300:
#line 9361 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st301;
		case 46: goto st256;
		case 91: goto st320;
		case 93: goto tr1859;
		case 123: goto st321;
	}
	goto st259;
st301:
	if ( ++p == pe )
		goto _out301;
case 301:
	switch( (*p) ) {
		case 35: goto st298;
		case 41: goto st300;
		case 93: goto tr2287;
	}
	goto tr1100;
tr2021:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st302;
tr2055:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st302;
tr2261:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st302;
tr2287:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st302;
st302:
	if ( ++p == pe )
		goto _out302;
case 302:
#line 9404 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2001;
		case 40: goto st303;
		case 41: goto tr2002;
		case 46: goto st256;
		case 91: goto st304;
		case 123: goto st305;
	}
	goto st251;
st303:
	if ( ++p == pe )
		goto _out303;
case 303:
	switch( (*p) ) {
		case 35: goto tr2001;
		case 41: goto tr2002;
	}
	goto tr1079;
st304:
	if ( ++p == pe )
		goto _out304;
case 304:
	switch( (*p) ) {
		case 35: goto tr2394;
		case 41: goto tr2395;
		case 93: goto st251;
	}
	goto tr1100;
st305:
	if ( ++p == pe )
		goto _out305;
case 305:
	switch( (*p) ) {
		case 35: goto tr2408;
		case 41: goto tr2409;
		case 125: goto st251;
	}
	goto tr1084;
tr1084:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st306;
st306:
	if ( ++p == pe )
		goto _out306;
case 306:
#line 9451 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2019;
		case 41: goto tr2020;
		case 125: goto tr2021;
	}
	goto st306;
tr2019:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st307;
tr2408:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st307;
st307:
	if ( ++p == pe )
		goto _out307;
case 307:
#line 9472 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st261;
		case 125: goto tr2325;
	}
	goto tr1190;
tr1190:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st308;
st308:
	if ( ++p == pe )
		goto _out308;
case 308:
#line 9486 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1941;
		case 125: goto tr1942;
	}
	goto st308;
tr1889:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st309;
tr1941:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st309;
tr2020:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st309;
tr2365:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st309;
tr2382:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st309;
tr2409:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st309;
st309:
	if ( ++p == pe )
		goto _out309;
case 309:
#line 9526 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st310;
		case 46: goto st256;
		case 91: goto st311;
		case 123: goto st313;
		case 125: goto tr1826;
	}
	goto st261;
st310:
	if ( ++p == pe )
		goto _out310;
case 310:
	switch( (*p) ) {
		case 35: goto st307;
		case 41: goto st309;
		case 125: goto tr2261;
	}
	goto tr1084;
st311:
	if ( ++p == pe )
		goto _out311;
case 311:
	switch( (*p) ) {
		case 93: goto st261;
		case 125: goto tr2349;
	}
	goto tr1217;
tr1217:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st312;
st312:
	if ( ++p == pe )
		goto _out312;
case 312:
#line 9562 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1889;
		case 125: goto tr1890;
	}
	goto st312;
st313:
	if ( ++p == pe )
		goto _out313;
case 313:
	if ( (*p) == 125 )
		goto tr1826;
	goto tr1223;
tr1942:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st314;
tr1970:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st314;
tr2325:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st314;
tr2337:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st314;
st314:
	if ( ++p == pe )
		goto _out314;
case 314:
#line 9599 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st315;
		case 41: goto tr1911;
		case 46: goto st256;
		case 91: goto st318;
		case 123: goto st319;
	}
	goto st253;
st315:
	if ( ++p == pe )
		goto _out315;
case 315:
	switch( (*p) ) {
		case 35: goto st317;
		case 41: goto tr1911;
	}
	goto tr1112;
tr1112:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st316;
st316:
	if ( ++p == pe )
		goto _out316;
case 316:
#line 9625 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2082;
		case 41: goto tr2083;
	}
	goto st316;
tr2082:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st317;
st317:
	if ( ++p == pe )
		goto _out317;
case 317:
#line 9639 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1911;
	goto tr1187;
st318:
	if ( ++p == pe )
		goto _out318;
case 318:
	switch( (*p) ) {
		case 41: goto tr2375;
		case 93: goto st253;
	}
	goto tr1201;
st319:
	if ( ++p == pe )
		goto _out319;
case 319:
	switch( (*p) ) {
		case 41: goto tr2382;
		case 125: goto st253;
	}
	goto tr1190;
st320:
	if ( ++p == pe )
		goto _out320;
case 320:
	if ( (*p) == 93 )
		goto tr1859;
	goto tr1214;
st321:
	if ( ++p == pe )
		goto _out321;
case 321:
	switch( (*p) ) {
		case 93: goto tr2365;
		case 125: goto st259;
	}
	goto tr1217;
tr1101:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st322;
st322:
	if ( ++p == pe )
		goto _out322;
case 322:
#line 9685 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st323;
		case 13: goto st324;
		case 35: goto tr2053;
		case 41: goto tr2054;
		case 93: goto tr2055;
	}
	goto st297;
st323:
	if ( ++p == pe )
		goto _out323;
case 323:
	switch( (*p) ) {
		case 35: goto tr2053;
		case 41: goto tr2054;
		case 93: goto tr2055;
		case 124: goto tr202;
	}
	goto st297;
st324:
	if ( ++p == pe )
		goto _out324;
case 324:
	switch( (*p) ) {
		case 10: goto st323;
		case 35: goto tr2053;
		case 41: goto tr2054;
		case 93: goto tr2055;
	}
	goto st297;
tr322:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st325;
tr1252:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st325;
st325:
	if ( ++p == pe )
		goto _out325;
case 325:
#line 9730 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1201;
		case 10: goto tr1202;
		case 41: goto st273;
		case 93: goto tr1203;
		case 124: goto tr202;
	}
	goto tr1200;
tr1200:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st326;
st326:
	if ( ++p == pe )
		goto _out326;
case 326:
#line 9747 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st299;
		case 10: goto st327;
		case 41: goto tr273;
		case 93: goto tr274;
		case 124: goto tr202;
	}
	goto st326;
tr1202:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st327;
st327:
	if ( ++p == pe )
		goto _out327;
case 327:
#line 9764 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st328;
		case 13: goto st329;
		case 41: goto tr1969;
		case 93: goto tr1970;
	}
	goto st299;
st328:
	if ( ++p == pe )
		goto _out328;
case 328:
	switch( (*p) ) {
		case 41: goto tr1969;
		case 93: goto tr1970;
		case 124: goto tr202;
	}
	goto st299;
st329:
	if ( ++p == pe )
		goto _out329;
case 329:
	switch( (*p) ) {
		case 10: goto st328;
		case 41: goto tr1969;
		case 93: goto tr1970;
	}
	goto st299;
tr222:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st330;
tr273:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st330;
tr323:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st330;
tr1219:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st330;
tr1238:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st330;
tr1253:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st330;
st330:
	if ( ++p == pe )
		goto _out330;
case 330:
#line 9826 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st259;
		case 10: goto st274;
		case 40: goto st331;
		case 46: goto st257;
		case 91: goto st361;
		case 93: goto tr217;
		case 123: goto st362;
		case 124: goto tr202;
	}
	goto st273;
st331:
	if ( ++p == pe )
		goto _out331;
case 331:
	switch( (*p) ) {
		case 0: goto tr1100;
		case 10: goto tr1101;
		case 35: goto st325;
		case 41: goto st330;
		case 93: goto tr1104;
		case 124: goto tr202;
	}
	goto tr1099;
tr308:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st332;
tr324:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st332;
tr1088:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st332;
tr1104:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st332;
st332:
	if ( ++p == pe )
		goto _out332;
case 332:
#line 9875 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto st333;
		case 41: goto tr302;
		case 46: goto st257;
		case 91: goto st295;
		case 123: goto st334;
		case 124: goto tr202;
	}
	goto st250;
st333:
	if ( ++p == pe )
		goto _out333;
case 333:
	switch( (*p) ) {
		case 0: goto tr1079;
		case 10: goto tr1080;
		case 35: goto tr301;
		case 41: goto tr302;
		case 124: goto tr202;
	}
	goto tr1078;
tr1148:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st334;
tr381:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st334;
tr436:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st334;
tr491:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st334;
tr546:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st334;
tr601:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st334;
tr656:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st334;
tr711:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st334;
st334:
	if ( ++p == pe )
		goto _out334;
case 334:
#line 9940 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1084;
		case 10: goto tr1085;
		case 35: goto tr1258;
		case 41: goto tr1259;
		case 124: goto tr202;
		case 125: goto st250;
	}
	goto tr1083;
tr1083:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st335;
st335:
	if ( ++p == pe )
		goto _out335;
case 335:
#line 9958 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st306;
		case 10: goto st336;
		case 35: goto tr306;
		case 41: goto tr307;
		case 124: goto tr202;
		case 125: goto tr308;
	}
	goto st335;
tr1085:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st336;
st336:
	if ( ++p == pe )
		goto _out336;
case 336:
#line 9976 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st337;
		case 13: goto st338;
		case 35: goto tr2019;
		case 41: goto tr2020;
		case 125: goto tr2021;
	}
	goto st306;
st337:
	if ( ++p == pe )
		goto _out337;
case 337:
	switch( (*p) ) {
		case 35: goto tr2019;
		case 41: goto tr2020;
		case 124: goto tr202;
		case 125: goto tr2021;
	}
	goto st306;
st338:
	if ( ++p == pe )
		goto _out338;
case 338:
	switch( (*p) ) {
		case 10: goto st337;
		case 35: goto tr2019;
		case 41: goto tr2020;
		case 125: goto tr2021;
	}
	goto st306;
tr306:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st339;
tr1258:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st339;
st339:
	if ( ++p == pe )
		goto _out339;
case 339:
#line 10021 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1190;
		case 10: goto tr1191;
		case 41: goto st278;
		case 124: goto tr202;
		case 125: goto tr1192;
	}
	goto tr1189;
tr1189:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st340;
st340:
	if ( ++p == pe )
		goto _out340;
case 340:
#line 10038 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st308;
		case 10: goto st341;
		case 41: goto tr260;
		case 124: goto tr202;
		case 125: goto tr261;
	}
	goto st340;
tr1191:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st341;
st341:
	if ( ++p == pe )
		goto _out341;
case 341:
#line 10055 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st342;
		case 13: goto st343;
		case 41: goto tr1941;
		case 125: goto tr1942;
	}
	goto st308;
st342:
	if ( ++p == pe )
		goto _out342;
case 342:
	switch( (*p) ) {
		case 41: goto tr1941;
		case 124: goto tr202;
		case 125: goto tr1942;
	}
	goto st308;
st343:
	if ( ++p == pe )
		goto _out343;
case 343:
	switch( (*p) ) {
		case 10: goto st342;
		case 41: goto tr1941;
		case 125: goto tr1942;
	}
	goto st308;
tr221:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st344;
tr260:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st344;
tr307:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st344;
tr1233:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st344;
tr1241:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st344;
tr1259:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st344;
st344:
	if ( ++p == pe )
		goto _out344;
case 344:
#line 10117 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st261;
		case 10: goto st279;
		case 40: goto st345;
		case 46: goto st257;
		case 91: goto st346;
		case 123: goto st351;
		case 124: goto tr202;
		case 125: goto tr203;
	}
	goto st278;
st345:
	if ( ++p == pe )
		goto _out345;
case 345:
	switch( (*p) ) {
		case 0: goto tr1084;
		case 10: goto tr1085;
		case 35: goto st339;
		case 41: goto st344;
		case 124: goto tr202;
		case 125: goto tr1088;
	}
	goto tr1083;
st346:
	if ( ++p == pe )
		goto _out346;
case 346:
	switch( (*p) ) {
		case 0: goto tr1217;
		case 10: goto tr1218;
		case 93: goto st278;
		case 124: goto tr202;
		case 125: goto tr1219;
	}
	goto tr1216;
tr1216:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st347;
st347:
	if ( ++p == pe )
		goto _out347;
case 347:
#line 10162 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st312;
		case 10: goto st348;
		case 93: goto tr221;
		case 124: goto tr202;
		case 125: goto tr222;
	}
	goto st347;
tr1218:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st348;
st348:
	if ( ++p == pe )
		goto _out348;
case 348:
#line 10179 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st349;
		case 13: goto st350;
		case 93: goto tr1889;
		case 125: goto tr1890;
	}
	goto st312;
st349:
	if ( ++p == pe )
		goto _out349;
case 349:
	switch( (*p) ) {
		case 93: goto tr1889;
		case 124: goto tr202;
		case 125: goto tr1890;
	}
	goto st312;
st350:
	if ( ++p == pe )
		goto _out350;
case 350:
	switch( (*p) ) {
		case 10: goto st349;
		case 93: goto tr1889;
		case 125: goto tr1890;
	}
	goto st312;
st351:
	if ( ++p == pe )
		goto _out351;
case 351:
	switch( (*p) ) {
		case 0: goto tr1223;
		case 10: goto tr1228;
		case 124: goto tr202;
		case 125: goto tr203;
	}
	goto tr1227;
tr261:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st352;
tr274:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st352;
tr1192:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st352;
tr1203:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st352;
st352:
	if ( ++p == pe )
		goto _out352;
case 352:
#line 10242 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st253;
		case 10: goto st267;
		case 40: goto st353;
		case 41: goto tr256;
		case 46: goto st257;
		case 91: goto st359;
		case 123: goto st360;
		case 124: goto tr202;
	}
	goto st266;
st353:
	if ( ++p == pe )
		goto _out353;
case 353:
	switch( (*p) ) {
		case 0: goto tr1112;
		case 10: goto tr1113;
		case 35: goto st358;
		case 41: goto tr256;
		case 124: goto tr202;
	}
	goto tr1111;
tr1111:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st354;
st354:
	if ( ++p == pe )
		goto _out354;
case 354:
#line 10274 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st316;
		case 10: goto st355;
		case 35: goto tr343;
		case 41: goto tr344;
		case 124: goto tr202;
	}
	goto st354;
tr1113:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st355;
st355:
	if ( ++p == pe )
		goto _out355;
case 355:
#line 10291 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st356;
		case 13: goto st357;
		case 35: goto tr2082;
		case 41: goto tr2083;
	}
	goto st316;
st356:
	if ( ++p == pe )
		goto _out356;
case 356:
	switch( (*p) ) {
		case 35: goto tr2082;
		case 41: goto tr2083;
		case 124: goto tr202;
	}
	goto st316;
st357:
	if ( ++p == pe )
		goto _out357;
case 357:
	switch( (*p) ) {
		case 10: goto st356;
		case 35: goto tr2082;
		case 41: goto tr2083;
	}
	goto st316;
tr343:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st358;
st358:
	if ( ++p == pe )
		goto _out358;
case 358:
#line 10327 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr1187;
		case 10: goto tr1188;
		case 41: goto tr256;
		case 124: goto tr202;
	}
	goto tr1186;
st359:
	if ( ++p == pe )
		goto _out359;
case 359:
	switch( (*p) ) {
		case 0: goto tr1201;
		case 10: goto tr1202;
		case 41: goto tr1238;
		case 93: goto st266;
		case 124: goto tr202;
	}
	goto tr1200;
st360:
	if ( ++p == pe )
		goto _out360;
case 360:
	switch( (*p) ) {
		case 0: goto tr1190;
		case 10: goto tr1191;
		case 41: goto tr1241;
		case 124: goto tr202;
		case 125: goto st266;
	}
	goto tr1189;
st361:
	if ( ++p == pe )
		goto _out361;
case 361:
	switch( (*p) ) {
		case 0: goto tr1214;
		case 10: goto tr1215;
		case 93: goto tr217;
		case 124: goto tr202;
	}
	goto tr1213;
st362:
	if ( ++p == pe )
		goto _out362;
case 362:
	switch( (*p) ) {
		case 0: goto tr1217;
		case 10: goto tr1218;
		case 93: goto tr1233;
		case 124: goto tr202;
		case 125: goto st273;
	}
	goto tr1216;
tr1147:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st363;
tr380:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st363;
tr435:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st363;
tr490:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st363;
tr545:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st363;
tr600:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st363;
tr655:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st363;
tr710:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st363;
st363:
	if ( ++p == pe )
		goto _out363;
case 363:
#line 10422 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr592;
		case 41: goto tr593;
		case 45: goto tr594;
		case 46: goto tr595;
		case 60: goto tr596;
		case 61: goto tr597;
		case 62: goto tr598;
		case 91: goto tr599;
		case 94: goto tr600;
		case 123: goto tr601;
		case 124: goto tr202;
		case 126: goto tr602;
	}
	goto st250;
tr1149:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st364;
tr382:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st364;
tr437:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st364;
tr492:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st364;
tr547:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st364;
tr602:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st364;
tr657:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st364;
tr712:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st364;
st364:
	if ( ++p == pe )
		goto _out364;
case 364:
#line 10481 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr647;
		case 41: goto tr648;
		case 45: goto tr649;
		case 46: goto tr650;
		case 60: goto tr651;
		case 61: goto tr652;
		case 62: goto tr653;
		case 91: goto tr654;
		case 94: goto tr655;
		case 123: goto tr656;
		case 124: goto tr202;
		case 126: goto tr657;
	}
	goto st250;
tr378:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st365;
st365:
	if ( ++p == pe )
		goto _out365;
case 365:
#line 10508 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st251;
		case 10: goto st262;
		case 35: goto tr301;
		case 40: goto tr702;
		case 41: goto tr703;
		case 45: goto tr704;
		case 46: goto tr705;
		case 60: goto tr706;
		case 61: goto tr707;
		case 62: goto tr708;
		case 91: goto tr709;
		case 94: goto tr710;
		case 123: goto tr711;
		case 124: goto tr202;
		case 126: goto tr712;
	}
	goto st250;
tr149:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st366;
tr1815:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st366;
tr1027:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st366;
tr1041:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st366;
st366:
	if ( ++p == pe )
		goto _out366;
case 366:
#line 10553 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 124: goto tr202;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr2239;
	goto st62;
tr2239:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st367;
st367:
	if ( ++p == pe )
		goto _out367;
case 367:
#line 10570 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr1037;
		case 41: goto tr1038;
		case 45: goto tr1039;
		case 46: goto tr1040;
		case 47: goto tr1041;
		case 60: goto tr1043;
		case 61: goto tr1044;
		case 62: goto tr1045;
		case 91: goto tr1046;
		case 92: goto tr1047;
		case 94: goto tr1048;
		case 123: goto tr1049;
		case 124: goto tr202;
		case 126: goto tr1050;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st367;
	goto st62;
tr154:
#line 41 "superredcloth_scan.rl"
	{INLINE(table, tr_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st368;
tr1820:
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st368;
tr1033:
#line 30 "superredcloth_scan.rl"
	{ STORE(colspan) }
	goto st368;
tr1047:
#line 31 "superredcloth_scan.rl"
	{ STORE(rowspan) }
	goto st368;
st368:
	if ( ++p == pe )
		goto _out368;
case 368:
#line 10618 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 124: goto tr202;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr951;
	goto st62;
tr951:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st369;
st369:
	if ( ++p == pe )
		goto _out369;
case 369:
#line 10635 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr949;
		case 10: goto st63;
		case 40: goto tr1023;
		case 41: goto tr1024;
		case 45: goto tr1025;
		case 46: goto tr1026;
		case 47: goto tr1027;
		case 60: goto tr1029;
		case 61: goto tr1030;
		case 62: goto tr1031;
		case 91: goto tr1032;
		case 92: goto tr1033;
		case 94: goto tr1034;
		case 123: goto tr1035;
		case 124: goto tr202;
		case 126: goto tr1036;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st369;
	goto st62;
tr43:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st370;
tr55:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st370;
tr66:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st370;
tr77:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st370;
tr88:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st370;
tr99:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st370;
tr110:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st370;
tr2432:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st370;
tr1677:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st370;
st370:
	if ( ++p == pe )
		goto _out370;
case 370:
#line 10701 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1222;
	goto tr15;
tr15:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st371;
st371:
	if ( ++p == pe )
		goto _out371;
case 371:
#line 10713 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1877;
	goto st371;
tr46:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st372;
tr57:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st372;
tr68:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st372;
tr79:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st372;
tr90:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st372;
tr101:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st372;
tr112:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st372;
tr2434:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st372;
tr1679:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st372;
st372:
	if ( ++p == pe )
		goto _out372;
case 372:
#line 10761 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1222;
	goto tr13;
tr13:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st373;
st373:
	if ( ++p == pe )
		goto _out373;
case 373:
#line 10773 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1845;
	goto st373;
tr2:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2100:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2120:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2140:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2160:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2180:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2200:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
tr2220:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st374;
st374:
	if ( ++p == pe )
		goto _out374;
case 374:
#line 10831 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2;
		case 41: goto tr2387;
		case 45: goto tr4;
		case 46: goto tr5;
		case 60: goto tr6;
		case 61: goto tr7;
		case 62: goto tr8;
		case 91: goto tr9;
		case 94: goto tr10;
		case 123: goto tr11;
		case 126: goto tr12;
	}
	goto tr0;
tr3:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr37:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr49:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr60:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr71:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr82:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr93:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr104:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr2101:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2121:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2141:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2161:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2181:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2201:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2427:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
tr2221:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr2387:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st375;
tr1671:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st375;
st375:
	if ( ++p == pe )
		goto _out375;
case 375:
#line 10981 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr70;
		case 41: goto tr71;
		case 45: goto tr72;
		case 46: goto tr73;
		case 60: goto tr74;
		case 61: goto tr75;
		case 62: goto tr76;
		case 91: goto tr77;
		case 94: goto tr78;
		case 123: goto tr79;
		case 126: goto tr80;
	}
	goto tr1222;
tr36:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr48:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr59:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr70:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr81:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr92:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr103:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr2426:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
tr1670:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st376;
st376:
	if ( ++p == pe )
		goto _out376;
case 376:
#line 11058 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st56;
		case 40: goto tr2;
		case 41: goto tr3;
		case 45: goto tr4;
		case 46: goto tr5;
		case 60: goto tr6;
		case 61: goto tr7;
		case 62: goto tr8;
		case 91: goto tr9;
		case 94: goto tr10;
		case 123: goto tr11;
		case 126: goto tr12;
	}
	goto tr0;
tr4:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st377;
tr2102:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st377;
tr2122:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st377;
tr2142:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st377;
tr2162:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st377;
tr2182:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st377;
tr2202:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st377;
tr2222:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st377;
st377:
	if ( ++p == pe )
		goto _out377;
case 377:
#line 11114 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2160;
		case 41: goto tr2161;
		case 45: goto tr2162;
		case 46: goto tr84;
		case 60: goto tr2163;
		case 61: goto tr2164;
		case 62: goto tr2165;
		case 91: goto tr2166;
		case 94: goto tr2167;
		case 123: goto tr2168;
		case 126: goto tr2169;
	}
	goto st55;
tr6:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st378;
tr2103:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st378;
tr2123:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st378;
tr2143:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st378;
tr2163:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st378;
tr2183:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st378;
tr2203:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st378;
tr2224:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st378;
st378:
	if ( ++p == pe )
		goto _out378;
case 378:
#line 11170 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2100;
		case 41: goto tr2101;
		case 45: goto tr2102;
		case 46: goto tr39;
		case 60: goto tr2103;
		case 61: goto tr2104;
		case 62: goto tr2105;
		case 91: goto tr2106;
		case 94: goto tr2107;
		case 123: goto tr2108;
		case 126: goto tr2109;
	}
	goto st55;
tr7:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st379;
tr2104:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st379;
tr2124:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st379;
tr2144:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st379;
tr2164:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st379;
tr2184:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st379;
tr2204:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st379;
tr2225:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st379;
st379:
	if ( ++p == pe )
		goto _out379;
case 379:
#line 11226 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2140;
		case 41: goto tr2141;
		case 45: goto tr2142;
		case 46: goto tr62;
		case 60: goto tr2143;
		case 61: goto tr2144;
		case 62: goto tr2145;
		case 91: goto tr2146;
		case 94: goto tr2147;
		case 123: goto tr2148;
		case 126: goto tr2149;
	}
	goto st55;
tr8:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st380;
tr2125:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st380;
tr2145:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st380;
tr2165:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st380;
tr2185:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st380;
tr2205:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st380;
tr2226:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st380;
st380:
	if ( ++p == pe )
		goto _out380;
case 380:
#line 11278 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2120;
		case 41: goto tr2121;
		case 45: goto tr2122;
		case 46: goto tr51;
		case 60: goto tr2123;
		case 61: goto tr2124;
		case 62: goto tr2125;
		case 91: goto tr2126;
		case 94: goto tr2127;
		case 123: goto tr2128;
		case 126: goto tr2129;
	}
	goto st55;
tr9:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st381;
tr2106:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st381;
tr2126:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st381;
tr2146:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st381;
tr2166:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st381;
tr2186:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st381;
tr2206:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st381;
tr2227:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st381;
st381:
	if ( ++p == pe )
		goto _out381;
case 381:
#line 11334 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2400;
		case 41: goto tr2401;
		case 93: goto st55;
	}
	goto tr2296;
tr2296:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st382;
st382:
	if ( ++p == pe )
		goto _out382;
case 382:
#line 11349 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2065;
		case 41: goto tr2066;
		case 93: goto tr2067;
	}
	goto st382;
tr2065:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st383;
tr2400:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st383;
st383:
	if ( ++p == pe )
		goto _out383;
case 383:
#line 11370 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st371;
		case 93: goto tr2343;
	}
	goto tr2342;
tr2342:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st384;
st384:
	if ( ++p == pe )
		goto _out384;
case 384:
#line 11384 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1978;
		case 93: goto tr1979;
	}
	goto st384;
tr1899:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st385;
tr1978:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st385;
tr2066:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st385;
tr2355:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st385;
tr2378:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st385;
tr2401:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st385;
st385:
	if ( ++p == pe )
		goto _out385;
case 385:
#line 11424 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st386;
		case 46: goto st60;
		case 91: goto st404;
		case 93: goto tr1877;
		case 123: goto st405;
	}
	goto st371;
st386:
	if ( ++p == pe )
		goto _out386;
case 386:
	switch( (*p) ) {
		case 35: goto st383;
		case 41: goto st385;
		case 93: goto tr2299;
	}
	goto tr2296;
tr2033:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st387;
tr2067:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st387;
tr2273:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st387;
tr2299:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st387;
st387:
	if ( ++p == pe )
		goto _out387;
case 387:
#line 11467 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto st388;
		case 41: goto tr1998;
		case 46: goto st60;
		case 91: goto st381;
		case 123: goto st389;
	}
	goto st55;
st388:
	if ( ++p == pe )
		goto _out388;
case 388:
	switch( (*p) ) {
		case 35: goto tr1996;
		case 41: goto tr1998;
	}
	goto tr0;
tr11:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st389;
tr2108:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st389;
tr2128:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st389;
tr2148:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st389;
tr2168:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st389;
tr2188:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st389;
tr2208:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st389;
tr2229:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st389;
st389:
	if ( ++p == pe )
		goto _out389;
case 389:
#line 11526 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2414;
		case 41: goto tr2415;
		case 125: goto st55;
	}
	goto tr2270;
tr2270:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st390;
st390:
	if ( ++p == pe )
		goto _out390;
case 390:
#line 11541 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2031;
		case 41: goto tr2032;
		case 125: goto tr2033;
	}
	goto st390;
tr2031:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st391;
tr2414:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st391;
st391:
	if ( ++p == pe )
		goto _out391;
case 391:
#line 11562 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st373;
		case 125: goto tr2331;
	}
	goto tr2330;
tr2330:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st392;
st392:
	if ( ++p == pe )
		goto _out392;
case 392:
#line 11576 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1950;
		case 125: goto tr1951;
	}
	goto st392;
tr1898:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st393;
tr1950:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st393;
tr2032:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st393;
tr2368:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st393;
tr2385:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st393;
tr2415:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st393;
st393:
	if ( ++p == pe )
		goto _out393;
case 393:
#line 11616 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st394;
		case 46: goto st60;
		case 91: goto st395;
		case 123: goto st397;
		case 125: goto tr1845;
	}
	goto st373;
st394:
	if ( ++p == pe )
		goto _out394;
case 394:
	switch( (*p) ) {
		case 35: goto st391;
		case 41: goto st393;
		case 125: goto tr2273;
	}
	goto tr2270;
st395:
	if ( ++p == pe )
		goto _out395;
case 395:
	switch( (*p) ) {
		case 93: goto st373;
		case 125: goto tr2355;
	}
	goto tr2354;
tr2354:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st396;
st396:
	if ( ++p == pe )
		goto _out396;
case 396:
#line 11652 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1898;
		case 125: goto tr1899;
	}
	goto st396;
st397:
	if ( ++p == pe )
		goto _out397;
case 397:
	if ( (*p) == 125 )
		goto tr1845;
	goto tr13;
tr1951:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st398;
tr1979:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st398;
tr2331:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st398;
tr2343:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st398;
st398:
	if ( ++p == pe )
		goto _out398;
case 398:
#line 11689 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st399;
		case 41: goto tr1925;
		case 46: goto st60;
		case 91: goto st402;
		case 123: goto st403;
	}
	goto st57;
st399:
	if ( ++p == pe )
		goto _out399;
case 399:
	switch( (*p) ) {
		case 35: goto st401;
		case 41: goto tr1925;
	}
	goto tr2464;
tr2464:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st400;
st400:
	if ( ++p == pe )
		goto _out400;
case 400:
#line 11715 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2459;
		case 41: goto tr2460;
	}
	goto st400;
tr2459:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st401;
st401:
	if ( ++p == pe )
		goto _out401;
case 401:
#line 11729 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1925;
	goto tr2471;
st402:
	if ( ++p == pe )
		goto _out402;
case 402:
	switch( (*p) ) {
		case 41: goto tr2378;
		case 93: goto st57;
	}
	goto tr2342;
st403:
	if ( ++p == pe )
		goto _out403;
case 403:
	switch( (*p) ) {
		case 41: goto tr2385;
		case 125: goto st57;
	}
	goto tr2330;
st404:
	if ( ++p == pe )
		goto _out404;
case 404:
	if ( (*p) == 93 )
		goto tr1877;
	goto tr15;
st405:
	if ( ++p == pe )
		goto _out405;
case 405:
	switch( (*p) ) {
		case 93: goto tr2368;
		case 125: goto st371;
	}
	goto tr2354;
tr10:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st406;
tr2107:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st406;
tr2127:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st406;
tr2147:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st406;
tr2167:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st406;
tr2187:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st406;
tr2207:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st406;
tr2228:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st406;
st406:
	if ( ++p == pe )
		goto _out406;
case 406:
#line 11807 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2180;
		case 41: goto tr2181;
		case 45: goto tr2182;
		case 46: goto tr95;
		case 60: goto tr2183;
		case 61: goto tr2184;
		case 62: goto tr2185;
		case 91: goto tr2186;
		case 94: goto tr2187;
		case 123: goto tr2188;
		case 126: goto tr2189;
	}
	goto st55;
tr12:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st407;
tr2109:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st407;
tr2129:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st407;
tr2149:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st407;
tr2169:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st407;
tr2189:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st407;
tr2209:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st407;
tr2230:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st407;
st407:
	if ( ++p == pe )
		goto _out407;
case 407:
#line 11863 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2200;
		case 41: goto tr2201;
		case 45: goto tr2202;
		case 46: goto tr106;
		case 60: goto tr2203;
		case 61: goto tr2204;
		case 62: goto tr2205;
		case 91: goto tr2206;
		case 94: goto tr2207;
		case 123: goto tr2208;
		case 126: goto tr2209;
	}
	goto st55;
tr2105:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st408;
st408:
	if ( ++p == pe )
		goto _out408;
case 408:
#line 11887 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1996;
		case 40: goto tr2220;
		case 41: goto tr2221;
		case 45: goto tr2222;
		case 46: goto tr2223;
		case 60: goto tr2224;
		case 61: goto tr2225;
		case 62: goto tr2226;
		case 91: goto tr2227;
		case 94: goto tr2228;
		case 123: goto tr2229;
		case 126: goto tr2230;
	}
	goto st55;
tr38:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st409;
tr50:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st409;
tr61:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st409;
tr72:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st409;
tr83:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st409;
tr94:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st409;
tr105:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st409;
tr2428:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st409;
tr1672:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st409;
st409:
	if ( ++p == pe )
		goto _out409;
case 409:
#line 11947 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr81;
		case 41: goto tr82;
		case 45: goto tr83;
		case 46: goto tr84;
		case 60: goto tr85;
		case 61: goto tr86;
		case 62: goto tr87;
		case 91: goto tr88;
		case 94: goto tr89;
		case 123: goto tr90;
		case 126: goto tr91;
	}
	goto tr1222;
tr40:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st410;
tr52:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st410;
tr63:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st410;
tr74:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st410;
tr85:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st410;
tr96:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st410;
tr107:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st410;
tr2429:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st410;
tr1674:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st410;
st410:
	if ( ++p == pe )
		goto _out410;
case 410:
#line 12006 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr36;
		case 41: goto tr37;
		case 45: goto tr38;
		case 46: goto tr39;
		case 60: goto tr40;
		case 61: goto tr41;
		case 62: goto tr42;
		case 91: goto tr43;
		case 94: goto tr44;
		case 123: goto tr46;
		case 126: goto tr47;
	}
	goto tr1222;
tr41:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st411;
tr53:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st411;
tr64:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st411;
tr75:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st411;
tr86:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st411;
tr97:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st411;
tr108:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st411;
tr2430:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st411;
tr1675:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st411;
st411:
	if ( ++p == pe )
		goto _out411;
case 411:
#line 12065 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr59;
		case 41: goto tr60;
		case 45: goto tr61;
		case 46: goto tr62;
		case 60: goto tr63;
		case 61: goto tr64;
		case 62: goto tr65;
		case 91: goto tr66;
		case 94: goto tr67;
		case 123: goto tr68;
		case 126: goto tr69;
	}
	goto tr1222;
tr54:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st412;
tr65:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st412;
tr76:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st412;
tr87:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st412;
tr98:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st412;
tr109:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st412;
tr2431:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st412;
tr1676:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st412;
st412:
	if ( ++p == pe )
		goto _out412;
case 412:
#line 12120 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr48;
		case 41: goto tr49;
		case 45: goto tr50;
		case 46: goto tr51;
		case 60: goto tr52;
		case 61: goto tr53;
		case 62: goto tr54;
		case 91: goto tr55;
		case 94: goto tr56;
		case 123: goto tr57;
		case 126: goto tr58;
	}
	goto tr1222;
tr44:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st413;
tr56:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st413;
tr67:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st413;
tr78:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st413;
tr89:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st413;
tr100:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st413;
tr111:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st413;
tr2433:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st413;
tr1678:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st413;
st413:
	if ( ++p == pe )
		goto _out413;
case 413:
#line 12179 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr92;
		case 41: goto tr93;
		case 45: goto tr94;
		case 46: goto tr95;
		case 60: goto tr96;
		case 61: goto tr97;
		case 62: goto tr98;
		case 91: goto tr99;
		case 94: goto tr100;
		case 123: goto tr101;
		case 126: goto tr102;
	}
	goto tr1222;
tr47:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st414;
tr58:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st414;
tr69:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st414;
tr80:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st414;
tr91:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st414;
tr102:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st414;
tr113:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st414;
tr2435:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st414;
tr1681:
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
	goto st414;
st414:
	if ( ++p == pe )
		goto _out414;
case 414:
#line 12238 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr103;
		case 41: goto tr104;
		case 45: goto tr105;
		case 46: goto tr106;
		case 60: goto tr107;
		case 61: goto tr108;
		case 62: goto tr109;
		case 91: goto tr110;
		case 94: goto tr111;
		case 123: goto tr112;
		case 126: goto tr113;
	}
	goto tr1222;
tr42:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st415;
st415:
	if ( ++p == pe )
		goto _out415;
case 415:
#line 12261 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr2426;
		case 41: goto tr2427;
		case 45: goto tr2428;
		case 46: goto tr2223;
		case 60: goto tr2429;
		case 61: goto tr2430;
		case 62: goto tr2431;
		case 91: goto tr2432;
		case 94: goto tr2433;
		case 123: goto tr2434;
		case 126: goto tr2435;
	}
	goto tr1222;
tr179:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st665;
st665:
	if ( ++p == pe )
		goto _out665;
case 665:
#line 12294 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr70;
		case 41: goto tr71;
		case 45: goto tr72;
		case 46: goto tr73;
		case 60: goto tr74;
		case 61: goto tr75;
		case 62: goto tr76;
		case 91: goto tr77;
		case 94: goto tr78;
		case 123: goto tr79;
		case 126: goto tr80;
	}
	goto tr14;
tr180:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 33 "superredcloth_scan.rl"
	{nest = 0;}
	goto st666;
st666:
	if ( ++p == pe )
		goto _out666;
case 666:
#line 12319 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr114;
		case 35: goto tr115;
		case 40: goto tr116;
		case 41: goto tr117;
		case 42: goto tr118;
		case 45: goto tr119;
		case 60: goto tr121;
		case 61: goto tr122;
		case 62: goto tr123;
		case 91: goto tr124;
		case 94: goto tr125;
		case 95: goto tr126;
		case 123: goto tr127;
		case 126: goto tr128;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr120;
	goto tr14;
tr181:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st667;
st667:
	if ( ++p == pe )
		goto _out667;
case 667:
#line 12355 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr81;
		case 41: goto tr82;
		case 45: goto tr83;
		case 46: goto tr84;
		case 60: goto tr85;
		case 61: goto tr86;
		case 62: goto tr87;
		case 91: goto tr88;
		case 94: goto tr89;
		case 123: goto tr90;
		case 126: goto tr91;
	}
	goto tr14;
tr182:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st668;
st668:
	if ( ++p == pe )
		goto _out668;
case 668:
#line 12386 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto st60;
		case 124: goto st61;
	}
	goto tr14;
tr183:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st669;
st669:
	if ( ++p == pe )
		goto _out669;
case 669:
#line 12408 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr36;
		case 41: goto tr37;
		case 45: goto tr38;
		case 46: goto tr39;
		case 60: goto tr40;
		case 61: goto tr41;
		case 62: goto tr42;
		case 91: goto tr43;
		case 94: goto tr44;
		case 110: goto st416;
		case 123: goto tr46;
		case 126: goto tr47;
	}
	goto tr14;
st416:
	if ( ++p == pe )
		goto _out416;
case 416:
	if ( (*p) == 111 )
		goto st417;
	goto tr1222;
st417:
	if ( ++p == pe )
		goto _out417;
case 417:
	if ( (*p) == 116 )
		goto st418;
	goto tr1222;
st418:
	if ( ++p == pe )
		goto _out418;
case 418:
	if ( (*p) == 101 )
		goto st419;
	goto tr1222;
st419:
	if ( ++p == pe )
		goto _out419;
case 419:
	if ( (*p) == 120 )
		goto st420;
	goto tr1222;
st420:
	if ( ++p == pe )
		goto _out420;
case 420:
	if ( (*p) == 116 )
		goto st421;
	goto tr1222;
st421:
	if ( ++p == pe )
		goto _out421;
case 421:
	if ( (*p) == 105 )
		goto st422;
	goto tr1222;
st422:
	if ( ++p == pe )
		goto _out422;
case 422:
	if ( (*p) == 108 )
		goto st423;
	goto tr1222;
st423:
	if ( ++p == pe )
		goto _out423;
case 423:
	if ( (*p) == 101 )
		goto st424;
	goto tr1222;
st424:
	if ( ++p == pe )
		goto _out424;
case 424:
	if ( (*p) == 62 )
		goto tr1406;
	goto tr1222;
tr184:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st670;
st670:
	if ( ++p == pe )
		goto _out670;
case 670:
#line 12503 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr59;
		case 41: goto tr60;
		case 45: goto tr61;
		case 46: goto tr62;
		case 60: goto tr63;
		case 61: goto tr64;
		case 62: goto tr65;
		case 91: goto tr66;
		case 94: goto tr67;
		case 123: goto tr68;
		case 126: goto tr69;
	}
	goto tr14;
tr185:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st671;
st671:
	if ( ++p == pe )
		goto _out671;
case 671:
#line 12534 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr48;
		case 41: goto tr49;
		case 45: goto tr50;
		case 46: goto tr51;
		case 60: goto tr52;
		case 61: goto tr53;
		case 62: goto tr54;
		case 91: goto tr55;
		case 94: goto tr56;
		case 123: goto tr57;
		case 126: goto tr58;
	}
	goto tr14;
tr186:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st672;
st672:
	if ( ++p == pe )
		goto _out672;
case 672:
#line 12565 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr14;
	goto tr15;
tr187:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st673;
st673:
	if ( ++p == pe )
		goto _out673;
case 673:
#line 12585 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr92;
		case 41: goto tr93;
		case 45: goto tr94;
		case 46: goto tr95;
		case 60: goto tr96;
		case 61: goto tr97;
		case 62: goto tr98;
		case 91: goto tr99;
		case 94: goto tr100;
		case 123: goto tr101;
		case 126: goto tr102;
	}
	goto tr14;
tr188:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st674;
st674:
	if ( ++p == pe )
		goto _out674;
case 674:
#line 12610 "superredcloth_scan.c"
	if ( (*p) == 113 )
		goto st425;
	goto tr14;
st425:
	if ( ++p == pe )
		goto _out425;
case 425:
	switch( (*p) ) {
		case 40: goto tr25;
		case 41: goto tr26;
		case 45: goto tr27;
		case 46: goto tr28;
		case 60: goto tr29;
		case 61: goto tr30;
		case 62: goto tr31;
		case 91: goto tr32;
		case 94: goto tr33;
		case 123: goto tr34;
		case 126: goto tr35;
	}
	goto tr1222;
tr25:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1431:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1462:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1493:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1524:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1557:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1588:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1619:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
tr1650:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st426;
st426:
	if ( ++p == pe )
		goto _out426;
case 426:
#line 12692 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st428;
		case 40: goto tr1152;
		case 41: goto tr1153;
		case 45: goto tr1154;
		case 46: goto tr1155;
		case 60: goto tr1156;
		case 61: goto tr1157;
		case 62: goto tr1158;
		case 91: goto tr1159;
		case 94: goto tr1160;
		case 123: goto tr1161;
		case 126: goto tr1162;
	}
	goto tr1150;
tr1150:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st427;
st427:
	if ( ++p == pe )
		goto _out427;
case 427:
#line 12716 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 41: goto tr328;
	}
	goto st427;
tr326:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st428;
st428:
	if ( ++p == pe )
		goto _out428;
case 428:
#line 12730 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1222;
	goto tr2369;
tr2369:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st429;
st429:
	if ( ++p == pe )
		goto _out429;
case 429:
#line 12742 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr277;
	goto st429;
tr227:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st430;
tr231:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st430;
tr277:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st430;
tr328:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st430;
tr2075:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st430;
st430:
	if ( ++p == pe )
		goto _out430;
case 430:
#line 12772 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st431;
		case 46: goto st675;
		case 91: goto st432;
		case 123: goto st434;
	}
	goto tr1222;
st431:
	if ( ++p == pe )
		goto _out431;
case 431:
	switch( (*p) ) {
		case 35: goto st428;
		case 41: goto st430;
	}
	goto tr1150;
tr1155:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st675;
tr28:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st675;
tr386:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st675;
tr441:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st675;
tr496:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st675;
tr1527:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st675;
tr551:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st675;
tr606:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st675;
tr661:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st675;
tr716:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st675;
st675:
	if ( ++p == pe )
		goto _out675;
case 675:
#line 12835 "superredcloth_scan.c"
	if ( (*p) == 32 )
		goto st675;
	goto tr16;
tr32:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st432;
tr1437:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st432;
tr1468:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st432;
tr1499:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st432;
tr1531:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st432;
tr1563:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st432;
tr1594:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st432;
tr1625:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st432;
tr1656:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st432;
st432:
	if ( ++p == pe )
		goto _out432;
case 432:
#line 12881 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1222;
	goto tr2359;
tr2359:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st433;
st433:
	if ( ++p == pe )
		goto _out433;
case 433:
#line 12893 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr231;
	goto st433;
tr34:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st434;
tr1439:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st434;
tr1470:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st434;
tr1501:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st434;
tr1533:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st434;
tr1565:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st434;
tr1596:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st434;
tr1627:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st434;
tr1658:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st434;
st434:
	if ( ++p == pe )
		goto _out434;
case 434:
#line 12939 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1222;
	goto tr2356;
tr2356:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st435;
st435:
	if ( ++p == pe )
		goto _out435;
case 435:
#line 12951 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr227;
	goto st435;
tr1152:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr383:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr438:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr493:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr548:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr603:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr658:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
tr713:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st436;
st436:
	if ( ++p == pe )
		goto _out436;
case 436:
#line 13009 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr1152;
		case 41: goto tr1246;
		case 45: goto tr1154;
		case 46: goto tr1155;
		case 60: goto tr1156;
		case 61: goto tr1157;
		case 62: goto tr1158;
		case 91: goto tr1159;
		case 94: goto tr1160;
		case 123: goto tr1161;
		case 126: goto tr1162;
	}
	goto tr1150;
tr1153:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr26:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1432:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1463:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1494:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1525:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1558:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1589:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr1620:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr384:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr439:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr494:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr549:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr604:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr659:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr1651:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st437;
tr714:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
tr1246:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st437;
st437:
	if ( ++p == pe )
		goto _out437;
case 437:
#line 13157 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1524;
		case 41: goto tr1525;
		case 45: goto tr1526;
		case 46: goto tr1527;
		case 60: goto tr1528;
		case 61: goto tr1529;
		case 62: goto tr1530;
		case 91: goto tr1531;
		case 94: goto tr1532;
		case 123: goto tr1533;
		case 126: goto tr1534;
	}
	goto tr1222;
tr27:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st438;
tr1433:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st438;
tr1464:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st438;
tr1495:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st438;
tr1526:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st438;
tr1559:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st438;
tr1590:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st438;
tr1621:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st438;
tr1652:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st438;
st438:
	if ( ++p == pe )
		goto _out438;
case 438:
#line 13214 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1557;
		case 41: goto tr1558;
		case 45: goto tr1559;
		case 46: goto tr551;
		case 60: goto tr1560;
		case 61: goto tr1561;
		case 62: goto tr1562;
		case 91: goto tr1563;
		case 94: goto tr1564;
		case 123: goto tr1565;
		case 126: goto tr1566;
	}
	goto tr1222;
tr29:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st439;
tr1434:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st439;
tr1465:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st439;
tr1496:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st439;
tr1528:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st439;
tr1560:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st439;
tr1591:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st439;
tr1622:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st439;
tr1653:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st439;
st439:
	if ( ++p == pe )
		goto _out439;
case 439:
#line 13271 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1431;
		case 41: goto tr1432;
		case 45: goto tr1433;
		case 46: goto tr386;
		case 60: goto tr1434;
		case 61: goto tr1435;
		case 62: goto tr1436;
		case 91: goto tr1437;
		case 94: goto tr1438;
		case 123: goto tr1439;
		case 126: goto tr1440;
	}
	goto tr1222;
tr30:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st440;
tr1435:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st440;
tr1466:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st440;
tr1497:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st440;
tr1529:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st440;
tr1561:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st440;
tr1592:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st440;
tr1623:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st440;
tr1654:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st440;
st440:
	if ( ++p == pe )
		goto _out440;
case 440:
#line 13328 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1493;
		case 41: goto tr1494;
		case 45: goto tr1495;
		case 46: goto tr496;
		case 60: goto tr1496;
		case 61: goto tr1497;
		case 62: goto tr1498;
		case 91: goto tr1499;
		case 94: goto tr1500;
		case 123: goto tr1501;
		case 126: goto tr1502;
	}
	goto tr1222;
tr31:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st441;
tr1467:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st441;
tr1498:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st441;
tr1530:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st441;
tr1562:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st441;
tr1593:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st441;
tr1624:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st441;
tr1655:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st441;
st441:
	if ( ++p == pe )
		goto _out441;
case 441:
#line 13381 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1462;
		case 41: goto tr1463;
		case 45: goto tr1464;
		case 46: goto tr441;
		case 60: goto tr1465;
		case 61: goto tr1466;
		case 62: goto tr1467;
		case 91: goto tr1468;
		case 94: goto tr1469;
		case 123: goto tr1470;
		case 126: goto tr1471;
	}
	goto tr1222;
tr33:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st442;
tr1438:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st442;
tr1469:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st442;
tr1500:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st442;
tr1532:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st442;
tr1564:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st442;
tr1595:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st442;
tr1626:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st442;
tr1657:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st442;
st442:
	if ( ++p == pe )
		goto _out442;
case 442:
#line 13438 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1588;
		case 41: goto tr1589;
		case 45: goto tr1590;
		case 46: goto tr606;
		case 60: goto tr1591;
		case 61: goto tr1592;
		case 62: goto tr1593;
		case 91: goto tr1594;
		case 94: goto tr1595;
		case 123: goto tr1596;
		case 126: goto tr1597;
	}
	goto tr1222;
tr35:
#line 26 "superredcloth_scan.rl"
	{ STORE(type) }
	goto st443;
tr1440:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st443;
tr1471:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st443;
tr1502:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st443;
tr1534:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st443;
tr1566:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st443;
tr1597:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st443;
tr1628:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st443;
tr1659:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st443;
st443:
	if ( ++p == pe )
		goto _out443;
case 443:
#line 13495 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1619;
		case 41: goto tr1620;
		case 45: goto tr1621;
		case 46: goto tr661;
		case 60: goto tr1622;
		case 61: goto tr1623;
		case 62: goto tr1624;
		case 91: goto tr1625;
		case 94: goto tr1626;
		case 123: goto tr1627;
		case 126: goto tr1628;
	}
	goto tr1222;
tr1436:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st444;
st444:
	if ( ++p == pe )
		goto _out444;
case 444:
#line 13518 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1650;
		case 41: goto tr1651;
		case 45: goto tr1652;
		case 46: goto tr716;
		case 60: goto tr1653;
		case 61: goto tr1654;
		case 62: goto tr1655;
		case 91: goto tr1656;
		case 94: goto tr1657;
		case 123: goto tr1658;
		case 126: goto tr1659;
	}
	goto tr1222;
tr1154:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st445;
tr385:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st445;
tr440:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st445;
tr495:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st445;
tr550:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st445;
tr605:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st445;
tr660:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st445;
tr715:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st445;
st445:
	if ( ++p == pe )
		goto _out445;
case 445:
#line 13573 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr548;
		case 41: goto tr549;
		case 45: goto tr550;
		case 46: goto tr551;
		case 60: goto tr552;
		case 61: goto tr553;
		case 62: goto tr554;
		case 91: goto tr555;
		case 94: goto tr556;
		case 123: goto tr557;
		case 126: goto tr558;
	}
	goto st427;
tr1156:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st446;
tr387:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st446;
tr442:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st446;
tr497:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st446;
tr552:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st446;
tr607:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st446;
tr662:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st446;
tr717:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st446;
st446:
	if ( ++p == pe )
		goto _out446;
case 446:
#line 13629 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr383;
		case 41: goto tr384;
		case 45: goto tr385;
		case 46: goto tr386;
		case 60: goto tr387;
		case 61: goto tr388;
		case 62: goto tr389;
		case 91: goto tr390;
		case 94: goto tr391;
		case 123: goto tr392;
		case 126: goto tr393;
	}
	goto st427;
tr1157:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st447;
tr388:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st447;
tr443:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st447;
tr498:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st447;
tr553:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st447;
tr608:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st447;
tr663:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st447;
tr718:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st447;
st447:
	if ( ++p == pe )
		goto _out447;
case 447:
#line 13685 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr493;
		case 41: goto tr494;
		case 45: goto tr495;
		case 46: goto tr496;
		case 60: goto tr497;
		case 61: goto tr498;
		case 62: goto tr499;
		case 91: goto tr500;
		case 94: goto tr501;
		case 123: goto tr502;
		case 126: goto tr503;
	}
	goto st427;
tr1158:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st448;
tr444:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st448;
tr499:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st448;
tr554:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st448;
tr609:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st448;
tr664:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st448;
tr719:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st448;
st448:
	if ( ++p == pe )
		goto _out448;
case 448:
#line 13737 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr438;
		case 41: goto tr439;
		case 45: goto tr440;
		case 46: goto tr441;
		case 60: goto tr442;
		case 61: goto tr443;
		case 62: goto tr444;
		case 91: goto tr445;
		case 94: goto tr446;
		case 123: goto tr447;
		case 126: goto tr448;
	}
	goto st427;
tr1159:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st449;
tr390:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st449;
tr445:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st449;
tr500:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st449;
tr555:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st449;
tr610:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st449;
tr665:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st449;
tr720:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st449;
st449:
	if ( ++p == pe )
		goto _out449;
case 449:
#line 13793 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1248;
		case 41: goto tr1249;
		case 93: goto st427;
	}
	goto tr1089;
tr1089:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st450;
st450:
	if ( ++p == pe )
		goto _out450;
case 450:
#line 13808 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr310;
		case 41: goto tr311;
		case 93: goto tr312;
	}
	goto st450;
tr310:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st451;
tr1248:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st451;
st451:
	if ( ++p == pe )
		goto _out451;
case 451:
#line 13829 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st433;
		case 93: goto tr1194;
	}
	goto tr1193;
tr1193:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st452;
st452:
	if ( ++p == pe )
		goto _out452;
case 452:
#line 13843 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr263;
		case 93: goto tr264;
	}
	goto st452;
tr208:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st453;
tr263:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st453;
tr311:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st453;
tr1205:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st453;
tr1235:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st453;
tr1249:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st453;
st453:
	if ( ++p == pe )
		goto _out453;
case 453:
#line 13883 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st454;
		case 46: goto st675;
		case 91: goto st472;
		case 93: goto tr231;
		case 123: goto st473;
	}
	goto st433;
st454:
	if ( ++p == pe )
		goto _out454;
case 454:
	switch( (*p) ) {
		case 35: goto st451;
		case 41: goto st453;
		case 93: goto tr1092;
	}
	goto tr1089;
tr291:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st455;
tr312:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st455;
tr1067:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st455;
tr1092:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st455;
st455:
	if ( ++p == pe )
		goto _out455;
case 455:
#line 13926 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto st456;
		case 41: goto tr328;
		case 46: goto st675;
		case 91: goto st449;
		case 123: goto st457;
	}
	goto st427;
st456:
	if ( ++p == pe )
		goto _out456;
case 456:
	switch( (*p) ) {
		case 35: goto tr326;
		case 41: goto tr328;
	}
	goto tr1150;
tr1161:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st457;
tr392:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st457;
tr447:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st457;
tr502:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st457;
tr557:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st457;
tr612:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st457;
tr667:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st457;
tr722:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st457;
st457:
	if ( ++p == pe )
		goto _out457;
case 457:
#line 13985 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1254;
		case 41: goto tr1255;
		case 125: goto st427;
	}
	goto tr1064;
tr1064:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st458;
st458:
	if ( ++p == pe )
		goto _out458;
case 458:
#line 14000 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr289;
		case 41: goto tr290;
		case 125: goto tr291;
	}
	goto st458;
tr289:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st459;
tr1254:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st459;
st459:
	if ( ++p == pe )
		goto _out459;
case 459:
#line 14021 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st435;
		case 125: goto tr1177;
	}
	goto tr1176;
tr1176:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st460;
st460:
	if ( ++p == pe )
		goto _out460;
case 460:
#line 14035 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr246;
		case 125: goto tr247;
	}
	goto st460;
tr207:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st461;
tr246:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st461;
tr290:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st461;
tr1231:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st461;
tr1239:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st461;
tr1255:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st461;
st461:
	if ( ++p == pe )
		goto _out461;
case 461:
#line 14075 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st462;
		case 46: goto st675;
		case 91: goto st463;
		case 123: goto st465;
		case 125: goto tr227;
	}
	goto st435;
st462:
	if ( ++p == pe )
		goto _out462;
case 462:
	switch( (*p) ) {
		case 35: goto st459;
		case 41: goto st461;
		case 125: goto tr1067;
	}
	goto tr1064;
st463:
	if ( ++p == pe )
		goto _out463;
case 463:
	switch( (*p) ) {
		case 93: goto st435;
		case 125: goto tr1205;
	}
	goto tr1204;
tr1204:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st464;
st464:
	if ( ++p == pe )
		goto _out464;
case 464:
#line 14111 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr207;
		case 125: goto tr208;
	}
	goto st464;
st465:
	if ( ++p == pe )
		goto _out465;
case 465:
	if ( (*p) == 125 )
		goto tr227;
	goto tr2356;
tr247:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st466;
tr264:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st466;
tr1177:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st466;
tr1194:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st466;
st466:
	if ( ++p == pe )
		goto _out466;
case 466:
#line 14148 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st467;
		case 41: goto tr277;
		case 46: goto st675;
		case 91: goto st470;
		case 123: goto st471;
	}
	goto st429;
st467:
	if ( ++p == pe )
		goto _out467;
case 467:
	switch( (*p) ) {
		case 35: goto st469;
		case 41: goto tr277;
	}
	goto tr2302;
tr2302:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st468;
st468:
	if ( ++p == pe )
		goto _out468;
case 468:
#line 14174 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2074;
		case 41: goto tr2075;
	}
	goto st468;
tr2074:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st469;
st469:
	if ( ++p == pe )
		goto _out469;
case 469:
#line 14188 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr277;
	goto tr2369;
st470:
	if ( ++p == pe )
		goto _out470;
case 470:
	switch( (*p) ) {
		case 41: goto tr1235;
		case 93: goto st429;
	}
	goto tr1193;
st471:
	if ( ++p == pe )
		goto _out471;
case 471:
	switch( (*p) ) {
		case 41: goto tr1239;
		case 125: goto st429;
	}
	goto tr1176;
st472:
	if ( ++p == pe )
		goto _out472;
case 472:
	if ( (*p) == 93 )
		goto tr231;
	goto tr2359;
st473:
	if ( ++p == pe )
		goto _out473;
case 473:
	switch( (*p) ) {
		case 93: goto tr1231;
		case 125: goto st433;
	}
	goto tr1204;
tr1160:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st474;
tr391:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st474;
tr446:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st474;
tr501:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st474;
tr556:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st474;
tr611:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st474;
tr666:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st474;
tr721:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st474;
st474:
	if ( ++p == pe )
		goto _out474;
case 474:
#line 14266 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr603;
		case 41: goto tr604;
		case 45: goto tr605;
		case 46: goto tr606;
		case 60: goto tr607;
		case 61: goto tr608;
		case 62: goto tr609;
		case 91: goto tr610;
		case 94: goto tr611;
		case 123: goto tr612;
		case 126: goto tr613;
	}
	goto st427;
tr1162:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st475;
tr393:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st475;
tr448:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st475;
tr503:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st475;
tr558:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st475;
tr613:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st475;
tr668:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st475;
tr723:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st475;
st475:
	if ( ++p == pe )
		goto _out475;
case 475:
#line 14322 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr658;
		case 41: goto tr659;
		case 45: goto tr660;
		case 46: goto tr661;
		case 60: goto tr662;
		case 61: goto tr663;
		case 62: goto tr664;
		case 91: goto tr665;
		case 94: goto tr666;
		case 123: goto tr667;
		case 126: goto tr668;
	}
	goto st427;
tr389:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st476;
st476:
	if ( ++p == pe )
		goto _out476;
case 476:
#line 14346 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr326;
		case 40: goto tr713;
		case 41: goto tr714;
		case 45: goto tr715;
		case 46: goto tr716;
		case 60: goto tr717;
		case 61: goto tr718;
		case 62: goto tr719;
		case 91: goto tr720;
		case 94: goto tr721;
		case 123: goto tr722;
		case 126: goto tr723;
	}
	goto st427;
tr189:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st676;
st676:
	if ( ++p == pe )
		goto _out676;
case 676:
#line 14372 "superredcloth_scan.c"
	if ( (*p) == 110 )
		goto st477;
	goto tr14;
st477:
	if ( ++p == pe )
		goto _out477;
case 477:
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr1407;
	goto tr1222;
tr1407:
#line 29 "superredcloth_scan.rl"
	{ STORE(type) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st478;
st478:
	if ( ++p == pe )
		goto _out478;
case 478:
#line 14393 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1408;
		case 41: goto tr1409;
		case 45: goto tr1410;
		case 46: goto tr1411;
		case 60: goto tr1413;
		case 61: goto tr1414;
		case 62: goto tr1415;
		case 91: goto tr1416;
		case 94: goto tr1417;
		case 123: goto tr1418;
		case 126: goto tr1419;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st478;
	goto tr1222;
tr1441:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1472:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1503:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1535:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1567:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1598:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1629:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1660:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
tr1408:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st479;
st479:
	if ( ++p == pe )
		goto _out479;
case 479:
#line 14470 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st481;
		case 40: goto tr1165;
		case 41: goto tr1166;
		case 45: goto tr1167;
		case 46: goto tr1168;
		case 60: goto tr1169;
		case 61: goto tr1170;
		case 62: goto tr1171;
		case 91: goto tr1172;
		case 94: goto tr1173;
		case 123: goto tr1174;
		case 126: goto tr1175;
	}
	goto tr1163;
tr1163:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st480;
st480:
	if ( ++p == pe )
		goto _out480;
case 480:
#line 14494 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 41: goto tr334;
	}
	goto st480;
tr332:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st481;
st481:
	if ( ++p == pe )
		goto _out481;
case 481:
#line 14508 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1222;
	goto tr2370;
tr2370:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st482;
st482:
	if ( ++p == pe )
		goto _out482;
case 482:
#line 14520 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr282;
	goto st482;
tr237:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st483;
tr241:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st483;
tr282:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st483;
tr334:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st483;
tr2078:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st483;
st483:
	if ( ++p == pe )
		goto _out483;
case 483:
#line 14550 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st484;
		case 46: goto st677;
		case 91: goto st485;
		case 123: goto st487;
	}
	goto tr1222;
st484:
	if ( ++p == pe )
		goto _out484;
case 484:
	switch( (*p) ) {
		case 35: goto st481;
		case 41: goto st483;
	}
	goto tr1163;
tr1168:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st677;
tr397:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st677;
tr452:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st677;
tr507:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st677;
tr1538:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st677;
tr562:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st677;
tr617:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st677;
tr672:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st677;
tr727:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st677;
tr1411:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st677;
st677:
	if ( ++p == pe )
		goto _out677;
case 677:
#line 14613 "superredcloth_scan.c"
	if ( (*p) == 32 )
		goto st677;
	goto tr18;
tr1447:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st485;
tr1478:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st485;
tr1509:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st485;
tr1542:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st485;
tr1573:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st485;
tr1604:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st485;
tr1635:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st485;
tr1666:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st485;
tr1416:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st485;
st485:
	if ( ++p == pe )
		goto _out485;
case 485:
#line 14659 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1222;
	goto tr2360;
tr2360:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st486;
st486:
	if ( ++p == pe )
		goto _out486;
case 486:
#line 14671 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr241;
	goto st486;
tr1449:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st487;
tr1480:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st487;
tr1511:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st487;
tr1544:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st487;
tr1575:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st487;
tr1606:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st487;
tr1637:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st487;
tr1668:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st487;
tr1418:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st487;
st487:
	if ( ++p == pe )
		goto _out487;
case 487:
#line 14717 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1222;
	goto tr2357;
tr2357:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st488;
st488:
	if ( ++p == pe )
		goto _out488;
case 488:
#line 14729 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr237;
	goto st488;
tr1165:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr394:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr449:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr504:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr559:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr614:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr669:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
tr724:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st489;
st489:
	if ( ++p == pe )
		goto _out489;
case 489:
#line 14787 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr1165;
		case 41: goto tr1247;
		case 45: goto tr1167;
		case 46: goto tr1168;
		case 60: goto tr1169;
		case 61: goto tr1170;
		case 62: goto tr1171;
		case 91: goto tr1172;
		case 94: goto tr1173;
		case 123: goto tr1174;
		case 126: goto tr1175;
	}
	goto tr1163;
tr1166:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1442:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1473:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1504:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1536:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1568:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1599:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr1630:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr395:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr450:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr505:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr560:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr615:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr670:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr1661:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
tr725:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr1247:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st490;
tr1409:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st490;
st490:
	if ( ++p == pe )
		goto _out490;
case 490:
#line 14935 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1535;
		case 41: goto tr1536;
		case 45: goto tr1537;
		case 46: goto tr1538;
		case 60: goto tr1539;
		case 61: goto tr1540;
		case 62: goto tr1541;
		case 91: goto tr1542;
		case 94: goto tr1543;
		case 123: goto tr1544;
		case 126: goto tr1545;
	}
	goto tr1222;
tr1443:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st491;
tr1474:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st491;
tr1505:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st491;
tr1537:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st491;
tr1569:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st491;
tr1600:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st491;
tr1631:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st491;
tr1662:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st491;
tr1410:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st491;
st491:
	if ( ++p == pe )
		goto _out491;
case 491:
#line 14992 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1567;
		case 41: goto tr1568;
		case 45: goto tr1569;
		case 46: goto tr562;
		case 60: goto tr1570;
		case 61: goto tr1571;
		case 62: goto tr1572;
		case 91: goto tr1573;
		case 94: goto tr1574;
		case 123: goto tr1575;
		case 126: goto tr1576;
	}
	goto tr1222;
tr1444:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st492;
tr1475:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st492;
tr1506:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st492;
tr1539:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st492;
tr1570:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st492;
tr1601:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st492;
tr1632:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st492;
tr1663:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st492;
tr1413:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st492;
st492:
	if ( ++p == pe )
		goto _out492;
case 492:
#line 15049 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1441;
		case 41: goto tr1442;
		case 45: goto tr1443;
		case 46: goto tr397;
		case 60: goto tr1444;
		case 61: goto tr1445;
		case 62: goto tr1446;
		case 91: goto tr1447;
		case 94: goto tr1448;
		case 123: goto tr1449;
		case 126: goto tr1450;
	}
	goto tr1222;
tr1445:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st493;
tr1476:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st493;
tr1507:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st493;
tr1540:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st493;
tr1571:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st493;
tr1602:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st493;
tr1633:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st493;
tr1664:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st493;
tr1414:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st493;
st493:
	if ( ++p == pe )
		goto _out493;
case 493:
#line 15106 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1503;
		case 41: goto tr1504;
		case 45: goto tr1505;
		case 46: goto tr507;
		case 60: goto tr1506;
		case 61: goto tr1507;
		case 62: goto tr1508;
		case 91: goto tr1509;
		case 94: goto tr1510;
		case 123: goto tr1511;
		case 126: goto tr1512;
	}
	goto tr1222;
tr1477:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st494;
tr1508:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st494;
tr1541:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st494;
tr1572:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st494;
tr1603:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st494;
tr1634:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st494;
tr1665:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st494;
tr1415:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st494;
st494:
	if ( ++p == pe )
		goto _out494;
case 494:
#line 15159 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1472;
		case 41: goto tr1473;
		case 45: goto tr1474;
		case 46: goto tr452;
		case 60: goto tr1475;
		case 61: goto tr1476;
		case 62: goto tr1477;
		case 91: goto tr1478;
		case 94: goto tr1479;
		case 123: goto tr1480;
		case 126: goto tr1481;
	}
	goto tr1222;
tr1448:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st495;
tr1479:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st495;
tr1510:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st495;
tr1543:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st495;
tr1574:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st495;
tr1605:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st495;
tr1636:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st495;
tr1667:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st495;
tr1417:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st495;
st495:
	if ( ++p == pe )
		goto _out495;
case 495:
#line 15216 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1598;
		case 41: goto tr1599;
		case 45: goto tr1600;
		case 46: goto tr617;
		case 60: goto tr1601;
		case 61: goto tr1602;
		case 62: goto tr1603;
		case 91: goto tr1604;
		case 94: goto tr1605;
		case 123: goto tr1606;
		case 126: goto tr1607;
	}
	goto tr1222;
tr1450:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st496;
tr1481:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st496;
tr1512:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st496;
tr1545:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st496;
tr1576:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st496;
tr1607:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st496;
tr1638:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st496;
tr1669:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st496;
tr1419:
#line 29 "superredcloth_scan.rl"
	{ STORE(id) }
	goto st496;
st496:
	if ( ++p == pe )
		goto _out496;
case 496:
#line 15273 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1629;
		case 41: goto tr1630;
		case 45: goto tr1631;
		case 46: goto tr672;
		case 60: goto tr1632;
		case 61: goto tr1633;
		case 62: goto tr1634;
		case 91: goto tr1635;
		case 94: goto tr1636;
		case 123: goto tr1637;
		case 126: goto tr1638;
	}
	goto tr1222;
tr1446:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st497;
st497:
	if ( ++p == pe )
		goto _out497;
case 497:
#line 15296 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1660;
		case 41: goto tr1661;
		case 45: goto tr1662;
		case 46: goto tr727;
		case 60: goto tr1663;
		case 61: goto tr1664;
		case 62: goto tr1665;
		case 91: goto tr1666;
		case 94: goto tr1667;
		case 123: goto tr1668;
		case 126: goto tr1669;
	}
	goto tr1222;
tr1167:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st498;
tr396:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st498;
tr451:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st498;
tr506:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st498;
tr561:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st498;
tr616:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st498;
tr671:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st498;
tr726:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st498;
st498:
	if ( ++p == pe )
		goto _out498;
case 498:
#line 15351 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr559;
		case 41: goto tr560;
		case 45: goto tr561;
		case 46: goto tr562;
		case 60: goto tr563;
		case 61: goto tr564;
		case 62: goto tr565;
		case 91: goto tr566;
		case 94: goto tr567;
		case 123: goto tr568;
		case 126: goto tr569;
	}
	goto st480;
tr1169:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st499;
tr398:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st499;
tr453:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st499;
tr508:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st499;
tr563:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st499;
tr618:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st499;
tr673:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st499;
tr728:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st499;
st499:
	if ( ++p == pe )
		goto _out499;
case 499:
#line 15407 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr394;
		case 41: goto tr395;
		case 45: goto tr396;
		case 46: goto tr397;
		case 60: goto tr398;
		case 61: goto tr399;
		case 62: goto tr400;
		case 91: goto tr401;
		case 94: goto tr402;
		case 123: goto tr403;
		case 126: goto tr404;
	}
	goto st480;
tr1170:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st500;
tr399:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st500;
tr454:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st500;
tr509:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st500;
tr564:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st500;
tr619:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st500;
tr674:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st500;
tr729:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st500;
st500:
	if ( ++p == pe )
		goto _out500;
case 500:
#line 15463 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr504;
		case 41: goto tr505;
		case 45: goto tr506;
		case 46: goto tr507;
		case 60: goto tr508;
		case 61: goto tr509;
		case 62: goto tr510;
		case 91: goto tr511;
		case 94: goto tr512;
		case 123: goto tr513;
		case 126: goto tr514;
	}
	goto st480;
tr1171:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st501;
tr455:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st501;
tr510:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st501;
tr565:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st501;
tr620:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st501;
tr675:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st501;
tr730:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st501;
st501:
	if ( ++p == pe )
		goto _out501;
case 501:
#line 15515 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr449;
		case 41: goto tr450;
		case 45: goto tr451;
		case 46: goto tr452;
		case 60: goto tr453;
		case 61: goto tr454;
		case 62: goto tr455;
		case 91: goto tr456;
		case 94: goto tr457;
		case 123: goto tr458;
		case 126: goto tr459;
	}
	goto st480;
tr1172:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st502;
tr401:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st502;
tr456:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st502;
tr511:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st502;
tr566:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st502;
tr621:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st502;
tr676:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st502;
tr731:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st502;
st502:
	if ( ++p == pe )
		goto _out502;
case 502:
#line 15571 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2388;
		case 41: goto tr2389;
		case 93: goto st480;
	}
	goto tr2274;
tr2274:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st503;
st503:
	if ( ++p == pe )
		goto _out503;
case 503:
#line 15586 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2043;
		case 41: goto tr2044;
		case 93: goto tr2045;
	}
	goto st503;
tr2043:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st504;
tr2388:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st504;
st504:
	if ( ++p == pe )
		goto _out504;
case 504:
#line 15607 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st486;
		case 93: goto tr2333;
	}
	goto tr2332;
tr2332:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st505;
st505:
	if ( ++p == pe )
		goto _out505;
case 505:
#line 15621 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1962;
		case 93: goto tr1963;
	}
	goto st505;
tr1883:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st506;
tr1962:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st506;
tr2044:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st506;
tr2345:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2372:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
tr2389:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st506;
st506:
	if ( ++p == pe )
		goto _out506;
case 506:
#line 15661 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st507;
		case 46: goto st677;
		case 91: goto st525;
		case 93: goto tr241;
		case 123: goto st526;
	}
	goto st486;
st507:
	if ( ++p == pe )
		goto _out507;
case 507:
	switch( (*p) ) {
		case 35: goto st504;
		case 41: goto st506;
		case 93: goto tr2277;
	}
	goto tr2274;
tr2011:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st508;
tr2045:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st508;
tr2251:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st508;
tr2277:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st508;
st508:
	if ( ++p == pe )
		goto _out508;
case 508:
#line 15704 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto st509;
		case 41: goto tr334;
		case 46: goto st677;
		case 91: goto st502;
		case 123: goto st510;
	}
	goto st480;
st509:
	if ( ++p == pe )
		goto _out509;
case 509:
	switch( (*p) ) {
		case 35: goto tr332;
		case 41: goto tr334;
	}
	goto tr1163;
tr1174:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st510;
tr403:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st510;
tr458:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st510;
tr513:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st510;
tr568:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st510;
tr623:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st510;
tr678:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st510;
tr733:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st510;
st510:
	if ( ++p == pe )
		goto _out510;
case 510:
#line 15763 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2402;
		case 41: goto tr2403;
		case 125: goto st480;
	}
	goto tr2248;
tr2248:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st511;
st511:
	if ( ++p == pe )
		goto _out511;
case 511:
#line 15778 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2009;
		case 41: goto tr2010;
		case 125: goto tr2011;
	}
	goto st511;
tr2009:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st512;
tr2402:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st512;
st512:
	if ( ++p == pe )
		goto _out512;
case 512:
#line 15799 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st488;
		case 125: goto tr2321;
	}
	goto tr2320;
tr2320:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st513;
st513:
	if ( ++p == pe )
		goto _out513;
case 513:
#line 15813 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1934;
		case 125: goto tr1935;
	}
	goto st513;
tr1882:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st514;
tr1934:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st514;
tr2010:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st514;
tr2362:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st514;
tr2379:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st514;
tr2403:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st514;
st514:
	if ( ++p == pe )
		goto _out514;
case 514:
#line 15853 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st515;
		case 46: goto st677;
		case 91: goto st516;
		case 123: goto st518;
		case 125: goto tr237;
	}
	goto st488;
st515:
	if ( ++p == pe )
		goto _out515;
case 515:
	switch( (*p) ) {
		case 35: goto st512;
		case 41: goto st514;
		case 125: goto tr2251;
	}
	goto tr2248;
st516:
	if ( ++p == pe )
		goto _out516;
case 516:
	switch( (*p) ) {
		case 93: goto st488;
		case 125: goto tr2345;
	}
	goto tr2344;
tr2344:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st517;
st517:
	if ( ++p == pe )
		goto _out517;
case 517:
#line 15889 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1882;
		case 125: goto tr1883;
	}
	goto st517;
st518:
	if ( ++p == pe )
		goto _out518;
case 518:
	if ( (*p) == 125 )
		goto tr237;
	goto tr2357;
tr1935:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st519;
tr1963:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st519;
tr2321:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st519;
tr2333:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st519;
st519:
	if ( ++p == pe )
		goto _out519;
case 519:
#line 15926 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st520;
		case 41: goto tr282;
		case 46: goto st677;
		case 91: goto st523;
		case 123: goto st524;
	}
	goto st482;
st520:
	if ( ++p == pe )
		goto _out520;
case 520:
	switch( (*p) ) {
		case 35: goto st522;
		case 41: goto tr282;
	}
	goto tr2304;
tr2304:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st521;
st521:
	if ( ++p == pe )
		goto _out521;
case 521:
#line 15952 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2077;
		case 41: goto tr2078;
	}
	goto st521;
tr2077:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st522;
st522:
	if ( ++p == pe )
		goto _out522;
case 522:
#line 15966 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr282;
	goto tr2370;
st523:
	if ( ++p == pe )
		goto _out523;
case 523:
	switch( (*p) ) {
		case 41: goto tr2372;
		case 93: goto st482;
	}
	goto tr2332;
st524:
	if ( ++p == pe )
		goto _out524;
case 524:
	switch( (*p) ) {
		case 41: goto tr2379;
		case 125: goto st482;
	}
	goto tr2320;
st525:
	if ( ++p == pe )
		goto _out525;
case 525:
	if ( (*p) == 93 )
		goto tr241;
	goto tr2360;
st526:
	if ( ++p == pe )
		goto _out526;
case 526:
	switch( (*p) ) {
		case 93: goto tr2362;
		case 125: goto st486;
	}
	goto tr2344;
tr1173:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st527;
tr402:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st527;
tr457:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st527;
tr512:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st527;
tr567:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st527;
tr622:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st527;
tr677:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st527;
tr732:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st527;
st527:
	if ( ++p == pe )
		goto _out527;
case 527:
#line 16044 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr614;
		case 41: goto tr615;
		case 45: goto tr616;
		case 46: goto tr617;
		case 60: goto tr618;
		case 61: goto tr619;
		case 62: goto tr620;
		case 91: goto tr621;
		case 94: goto tr622;
		case 123: goto tr623;
		case 126: goto tr624;
	}
	goto st480;
tr1175:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st528;
tr404:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st528;
tr459:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st528;
tr514:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st528;
tr569:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st528;
tr624:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st528;
tr679:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st528;
tr734:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st528;
st528:
	if ( ++p == pe )
		goto _out528;
case 528:
#line 16100 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr669;
		case 41: goto tr670;
		case 45: goto tr671;
		case 46: goto tr672;
		case 60: goto tr673;
		case 61: goto tr674;
		case 62: goto tr675;
		case 91: goto tr676;
		case 94: goto tr677;
		case 123: goto tr678;
		case 126: goto tr679;
	}
	goto st480;
tr400:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st529;
st529:
	if ( ++p == pe )
		goto _out529;
case 529:
#line 16124 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr332;
		case 40: goto tr724;
		case 41: goto tr725;
		case 45: goto tr726;
		case 46: goto tr727;
		case 60: goto tr728;
		case 61: goto tr729;
		case 62: goto tr730;
		case 91: goto tr731;
		case 94: goto tr732;
		case 123: goto tr733;
		case 126: goto tr734;
	}
	goto st480;
tr190:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st678;
st678:
	if ( ++p == pe )
		goto _out678;
case 678:
#line 16150 "superredcloth_scan.c"
	if ( 49 <= (*p) && (*p) <= 54 )
		goto st425;
	goto tr14;
tr191:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st679;
st679:
	if ( ++p == pe )
		goto _out679;
case 679:
#line 16164 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr25;
		case 41: goto tr26;
		case 45: goto tr27;
		case 46: goto tr28;
		case 60: goto tr29;
		case 61: goto tr30;
		case 62: goto tr31;
		case 91: goto tr32;
		case 94: goto tr33;
		case 123: goto tr34;
		case 126: goto tr35;
	}
	goto tr14;
tr192:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st680;
st680:
	if ( ++p == pe )
		goto _out680;
case 680:
#line 16193 "superredcloth_scan.c"
	if ( (*p) == 97 )
		goto st530;
	goto tr14;
st530:
	if ( ++p == pe )
		goto _out530;
case 530:
	if ( (*p) == 98 )
		goto st531;
	goto tr1222;
st531:
	if ( ++p == pe )
		goto _out531;
case 531:
	if ( (*p) == 108 )
		goto st532;
	goto tr1222;
st532:
	if ( ++p == pe )
		goto _out532;
case 532:
	if ( (*p) == 101 )
		goto st533;
	goto tr1222;
st533:
	if ( ++p == pe )
		goto _out533;
case 533:
	switch( (*p) ) {
		case 40: goto tr1391;
		case 41: goto tr1392;
		case 45: goto st549;
		case 46: goto st540;
		case 60: goto st550;
		case 61: goto st551;
		case 62: goto st552;
		case 91: goto st543;
		case 94: goto st553;
		case 123: goto st545;
		case 126: goto st554;
	}
	goto tr1222;
tr1391:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1420:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1451:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1482:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1513:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1546:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1577:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1608:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
tr1639:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st534;
st534:
	if ( ++p == pe )
		goto _out534;
case 534:
#line 16294 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto st536;
		case 40: goto tr2309;
		case 41: goto tr2310;
		case 45: goto tr2311;
		case 46: goto tr2312;
		case 60: goto tr2313;
		case 61: goto tr2314;
		case 62: goto tr2315;
		case 91: goto tr2316;
		case 94: goto tr2317;
		case 123: goto tr2318;
		case 126: goto tr2319;
	}
	goto tr2240;
tr2240:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st535;
st535:
	if ( ++p == pe )
		goto _out535;
case 535:
#line 16318 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 41: goto tr1991;
	}
	goto st535;
tr1990:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st536;
st536:
	if ( ++p == pe )
		goto _out536;
case 536:
#line 16332 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1222;
	goto tr1234;
tr1234:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st537;
st537:
	if ( ++p == pe )
		goto _out537;
case 537:
#line 16344 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1910;
	goto st537;
tr1825:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st538;
tr1858:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st538;
tr1910:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st538;
tr1991:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st538;
tr2072:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st538;
st538:
	if ( ++p == pe )
		goto _out538;
case 538:
#line 16374 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st539;
		case 46: goto st540;
		case 91: goto st543;
		case 123: goto st545;
	}
	goto tr1222;
st539:
	if ( ++p == pe )
		goto _out539;
case 539:
	switch( (*p) ) {
		case 35: goto st536;
		case 41: goto st538;
	}
	goto tr2240;
tr2312:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
	goto st540;
tr1423:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st540;
tr1454:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st540;
tr1485:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st540;
tr1516:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st540;
tr1549:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st540;
tr1580:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st540;
tr1611:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st540;
tr1642:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st540;
st540:
	if ( ++p == pe )
		goto _out540;
case 540:
#line 16433 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto st541;
		case 13: goto st542;
		case 32: goto st540;
	}
	goto tr1222;
st541:
	if ( ++p == pe )
		goto _out541;
case 541:
	switch( (*p) ) {
		case 40: goto tr1670;
		case 41: goto tr1671;
		case 45: goto tr1672;
		case 46: goto tr1673;
		case 60: goto tr1674;
		case 61: goto tr1675;
		case 62: goto tr1676;
		case 91: goto tr1677;
		case 94: goto tr1678;
		case 123: goto tr1679;
		case 124: goto tr1680;
		case 126: goto tr1681;
	}
	goto tr1222;
st542:
	if ( ++p == pe )
		goto _out542;
case 542:
	if ( (*p) == 10 )
		goto st541;
	goto tr1222;
tr1427:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st543;
tr1458:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st543;
tr1489:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st543;
tr1520:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st543;
tr1553:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st543;
tr1584:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st543;
tr1615:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st543;
tr1646:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st543;
st543:
	if ( ++p == pe )
		goto _out543;
case 543:
#line 16504 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1222;
	goto tr1230;
tr1230:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st544;
st544:
	if ( ++p == pe )
		goto _out544;
case 544:
#line 16516 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr1858;
	goto st544;
tr1429:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st545;
tr1460:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st545;
tr1491:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st545;
tr1522:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st545;
tr1555:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st545;
tr1586:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st545;
tr1617:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st545;
tr1648:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st545;
st545:
	if ( ++p == pe )
		goto _out545;
case 545:
#line 16558 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1222;
	goto tr1221;
tr1221:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st546;
st546:
	if ( ++p == pe )
		goto _out546;
case 546:
#line 16570 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr1825;
	goto st546;
tr2309:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2090:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2110:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2130:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2150:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2170:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2190:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
tr2210:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st547;
st547:
	if ( ++p == pe )
		goto _out547;
case 547:
#line 16628 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2309;
		case 41: goto tr2386;
		case 45: goto tr2311;
		case 46: goto tr2312;
		case 60: goto tr2313;
		case 61: goto tr2314;
		case 62: goto tr2315;
		case 91: goto tr2316;
		case 94: goto tr2317;
		case 123: goto tr2318;
		case 126: goto tr2319;
	}
	goto tr2240;
tr1392:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr2310:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1421:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1452:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1483:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1514:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1547:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1578:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr1609:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr2091:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr2111:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr2131:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr2151:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr2171:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr2191:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr1640:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st548;
tr2211:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
tr2386:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st548;
st548:
	if ( ++p == pe )
		goto _out548;
case 548:
#line 16774 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1513;
		case 41: goto tr1514;
		case 45: goto tr1515;
		case 46: goto tr1516;
		case 60: goto tr1517;
		case 61: goto tr1518;
		case 62: goto tr1519;
		case 91: goto tr1520;
		case 94: goto tr1521;
		case 123: goto tr1522;
		case 126: goto tr1523;
	}
	goto tr1222;
tr1422:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st549;
tr1453:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st549;
tr1484:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st549;
tr1515:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st549;
tr1548:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st549;
tr1579:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st549;
tr1610:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st549;
tr1641:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st549;
st549:
	if ( ++p == pe )
		goto _out549;
case 549:
#line 16827 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1546;
		case 41: goto tr1547;
		case 45: goto tr1548;
		case 46: goto tr1549;
		case 60: goto tr1550;
		case 61: goto tr1551;
		case 62: goto tr1552;
		case 91: goto tr1553;
		case 94: goto tr1554;
		case 123: goto tr1555;
		case 126: goto tr1556;
	}
	goto tr1222;
tr1424:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st550;
tr1455:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st550;
tr1486:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st550;
tr1517:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st550;
tr1550:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st550;
tr1581:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st550;
tr1612:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st550;
tr1643:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st550;
st550:
	if ( ++p == pe )
		goto _out550;
case 550:
#line 16880 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1420;
		case 41: goto tr1421;
		case 45: goto tr1422;
		case 46: goto tr1423;
		case 60: goto tr1424;
		case 61: goto tr1425;
		case 62: goto tr1426;
		case 91: goto tr1427;
		case 94: goto tr1428;
		case 123: goto tr1429;
		case 126: goto tr1430;
	}
	goto tr1222;
tr1425:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st551;
tr1456:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st551;
tr1487:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st551;
tr1518:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st551;
tr1551:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st551;
tr1582:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st551;
tr1613:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st551;
tr1644:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st551;
st551:
	if ( ++p == pe )
		goto _out551;
case 551:
#line 16933 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1482;
		case 41: goto tr1483;
		case 45: goto tr1484;
		case 46: goto tr1485;
		case 60: goto tr1486;
		case 61: goto tr1487;
		case 62: goto tr1488;
		case 91: goto tr1489;
		case 94: goto tr1490;
		case 123: goto tr1491;
		case 126: goto tr1492;
	}
	goto tr1222;
tr1457:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st552;
tr1488:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st552;
tr1519:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st552;
tr1552:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st552;
tr1583:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st552;
tr1614:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st552;
tr1645:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st552;
st552:
	if ( ++p == pe )
		goto _out552;
case 552:
#line 16982 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1451;
		case 41: goto tr1452;
		case 45: goto tr1453;
		case 46: goto tr1454;
		case 60: goto tr1455;
		case 61: goto tr1456;
		case 62: goto tr1457;
		case 91: goto tr1458;
		case 94: goto tr1459;
		case 123: goto tr1460;
		case 126: goto tr1461;
	}
	goto tr1222;
tr1428:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st553;
tr1459:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st553;
tr1490:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st553;
tr1521:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st553;
tr1554:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st553;
tr1585:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st553;
tr1616:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st553;
tr1647:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st553;
st553:
	if ( ++p == pe )
		goto _out553;
case 553:
#line 17035 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1577;
		case 41: goto tr1578;
		case 45: goto tr1579;
		case 46: goto tr1580;
		case 60: goto tr1581;
		case 61: goto tr1582;
		case 62: goto tr1583;
		case 91: goto tr1584;
		case 94: goto tr1585;
		case 123: goto tr1586;
		case 126: goto tr1587;
	}
	goto tr1222;
tr1430:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st554;
tr1461:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st554;
tr1492:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st554;
tr1523:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st554;
tr1556:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st554;
tr1587:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st554;
tr1618:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st554;
tr1649:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st554;
st554:
	if ( ++p == pe )
		goto _out554;
case 554:
#line 17088 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1608;
		case 41: goto tr1609;
		case 45: goto tr1610;
		case 46: goto tr1611;
		case 60: goto tr1612;
		case 61: goto tr1613;
		case 62: goto tr1614;
		case 91: goto tr1615;
		case 94: goto tr1616;
		case 123: goto tr1617;
		case 126: goto tr1618;
	}
	goto tr1222;
tr1426:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st555;
st555:
	if ( ++p == pe )
		goto _out555;
case 555:
#line 17111 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr1639;
		case 41: goto tr1640;
		case 45: goto tr1641;
		case 46: goto tr1642;
		case 60: goto tr1643;
		case 61: goto tr1644;
		case 62: goto tr1645;
		case 91: goto tr1646;
		case 94: goto tr1647;
		case 123: goto tr1648;
		case 126: goto tr1649;
	}
	goto tr1222;
tr2311:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st556;
tr2092:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st556;
tr2112:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st556;
tr2132:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st556;
tr2152:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st556;
tr2172:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st556;
tr2192:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st556;
tr2212:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st556;
st556:
	if ( ++p == pe )
		goto _out556;
case 556:
#line 17166 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2150;
		case 41: goto tr2151;
		case 45: goto tr2152;
		case 46: goto tr1549;
		case 60: goto tr2153;
		case 61: goto tr2154;
		case 62: goto tr2155;
		case 91: goto tr2156;
		case 94: goto tr2157;
		case 123: goto tr2158;
		case 126: goto tr2159;
	}
	goto st535;
tr2313:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st557;
tr2093:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st557;
tr2113:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st557;
tr2133:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st557;
tr2153:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st557;
tr2173:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st557;
tr2193:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st557;
tr2213:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st557;
st557:
	if ( ++p == pe )
		goto _out557;
case 557:
#line 17222 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2090;
		case 41: goto tr2091;
		case 45: goto tr2092;
		case 46: goto tr1423;
		case 60: goto tr2093;
		case 61: goto tr2094;
		case 62: goto tr2095;
		case 91: goto tr2096;
		case 94: goto tr2097;
		case 123: goto tr2098;
		case 126: goto tr2099;
	}
	goto st535;
tr2314:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st558;
tr2094:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st558;
tr2114:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st558;
tr2134:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st558;
tr2154:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st558;
tr2174:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st558;
tr2194:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st558;
tr2214:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st558;
st558:
	if ( ++p == pe )
		goto _out558;
case 558:
#line 17278 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2130;
		case 41: goto tr2131;
		case 45: goto tr2132;
		case 46: goto tr1485;
		case 60: goto tr2133;
		case 61: goto tr2134;
		case 62: goto tr2135;
		case 91: goto tr2136;
		case 94: goto tr2137;
		case 123: goto tr2138;
		case 126: goto tr2139;
	}
	goto st535;
tr2315:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st559;
tr2115:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st559;
tr2135:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st559;
tr2155:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st559;
tr2175:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st559;
tr2195:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st559;
tr2215:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st559;
st559:
	if ( ++p == pe )
		goto _out559;
case 559:
#line 17330 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2110;
		case 41: goto tr2111;
		case 45: goto tr2112;
		case 46: goto tr1454;
		case 60: goto tr2113;
		case 61: goto tr2114;
		case 62: goto tr2115;
		case 91: goto tr2116;
		case 94: goto tr2117;
		case 123: goto tr2118;
		case 126: goto tr2119;
	}
	goto st535;
tr2316:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st560;
tr2096:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st560;
tr2116:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st560;
tr2136:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st560;
tr2156:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st560;
tr2176:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st560;
tr2196:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st560;
tr2216:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st560;
st560:
	if ( ++p == pe )
		goto _out560;
case 560:
#line 17386 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2398;
		case 41: goto tr2399;
		case 93: goto st535;
	}
	goto tr2292;
tr2292:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st561;
st561:
	if ( ++p == pe )
		goto _out561;
case 561:
#line 17401 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2061;
		case 41: goto tr2062;
		case 93: goto tr2063;
	}
	goto st561;
tr2061:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st562;
tr2398:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st562;
st562:
	if ( ++p == pe )
		goto _out562;
case 562:
#line 17422 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st544;
		case 93: goto tr2341;
	}
	goto tr2340;
tr2340:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st563;
st563:
	if ( ++p == pe )
		goto _out563;
case 563:
#line 17436 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1975;
		case 93: goto tr1976;
	}
	goto st563;
tr1896:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st564;
tr1975:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st564;
tr2062:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st564;
tr2353:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st564;
tr2377:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st564;
tr2399:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st564;
st564:
	if ( ++p == pe )
		goto _out564;
case 564:
#line 17476 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st565;
		case 46: goto st540;
		case 91: goto st583;
		case 93: goto tr1858;
		case 123: goto st584;
	}
	goto st544;
st565:
	if ( ++p == pe )
		goto _out565;
case 565:
	switch( (*p) ) {
		case 35: goto st562;
		case 41: goto st564;
		case 93: goto tr2295;
	}
	goto tr2292;
tr2029:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st566;
tr2063:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st566;
tr2269:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st566;
tr2295:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st566;
st566:
	if ( ++p == pe )
		goto _out566;
case 566:
#line 17519 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto st567;
		case 41: goto tr1991;
		case 46: goto st540;
		case 91: goto st560;
		case 123: goto st568;
	}
	goto st535;
st567:
	if ( ++p == pe )
		goto _out567;
case 567:
	switch( (*p) ) {
		case 35: goto tr1990;
		case 41: goto tr1991;
	}
	goto tr2240;
tr2318:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st568;
tr2098:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st568;
tr2118:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st568;
tr2138:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st568;
tr2158:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st568;
tr2178:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st568;
tr2198:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st568;
tr2218:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st568;
st568:
	if ( ++p == pe )
		goto _out568;
case 568:
#line 17578 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2412;
		case 41: goto tr2413;
		case 125: goto st535;
	}
	goto tr2266;
tr2266:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st569;
st569:
	if ( ++p == pe )
		goto _out569;
case 569:
#line 17593 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2027;
		case 41: goto tr2028;
		case 125: goto tr2029;
	}
	goto st569;
tr2027:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st570;
tr2412:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st570;
st570:
	if ( ++p == pe )
		goto _out570;
case 570:
#line 17614 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st546;
		case 125: goto tr2329;
	}
	goto tr2328;
tr2328:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st571;
st571:
	if ( ++p == pe )
		goto _out571;
case 571:
#line 17628 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr1947;
		case 125: goto tr1948;
	}
	goto st571;
tr1895:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st572;
tr1947:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st572;
tr2028:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st572;
tr2367:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st572;
tr2384:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st572;
tr2413:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st572;
st572:
	if ( ++p == pe )
		goto _out572;
case 572:
#line 17668 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st573;
		case 46: goto st540;
		case 91: goto st574;
		case 123: goto st576;
		case 125: goto tr1825;
	}
	goto st546;
st573:
	if ( ++p == pe )
		goto _out573;
case 573:
	switch( (*p) ) {
		case 35: goto st570;
		case 41: goto st572;
		case 125: goto tr2269;
	}
	goto tr2266;
st574:
	if ( ++p == pe )
		goto _out574;
case 574:
	switch( (*p) ) {
		case 93: goto st546;
		case 125: goto tr2353;
	}
	goto tr2352;
tr2352:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st575;
st575:
	if ( ++p == pe )
		goto _out575;
case 575:
#line 17704 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr1895;
		case 125: goto tr1896;
	}
	goto st575;
st576:
	if ( ++p == pe )
		goto _out576;
case 576:
	if ( (*p) == 125 )
		goto tr1825;
	goto tr1221;
tr1948:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st577;
tr1976:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st577;
tr2329:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st577;
tr2341:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st577;
st577:
	if ( ++p == pe )
		goto _out577;
case 577:
#line 17741 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto st578;
		case 41: goto tr1910;
		case 46: goto st540;
		case 91: goto st581;
		case 123: goto st582;
	}
	goto st537;
st578:
	if ( ++p == pe )
		goto _out578;
case 578:
	switch( (*p) ) {
		case 35: goto st580;
		case 41: goto tr1910;
	}
	goto tr2300;
tr2300:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st579;
st579:
	if ( ++p == pe )
		goto _out579;
case 579:
#line 17767 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2071;
		case 41: goto tr2072;
	}
	goto st579;
tr2071:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st580;
st580:
	if ( ++p == pe )
		goto _out580;
case 580:
#line 17781 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr1910;
	goto tr1234;
st581:
	if ( ++p == pe )
		goto _out581;
case 581:
	switch( (*p) ) {
		case 41: goto tr2377;
		case 93: goto st537;
	}
	goto tr2340;
st582:
	if ( ++p == pe )
		goto _out582;
case 582:
	switch( (*p) ) {
		case 41: goto tr2384;
		case 125: goto st537;
	}
	goto tr2328;
st583:
	if ( ++p == pe )
		goto _out583;
case 583:
	if ( (*p) == 93 )
		goto tr1858;
	goto tr1230;
st584:
	if ( ++p == pe )
		goto _out584;
case 584:
	switch( (*p) ) {
		case 93: goto tr2367;
		case 125: goto st544;
	}
	goto tr2352;
tr2317:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st585;
tr2097:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st585;
tr2117:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st585;
tr2137:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st585;
tr2157:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st585;
tr2177:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st585;
tr2197:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st585;
tr2217:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st585;
st585:
	if ( ++p == pe )
		goto _out585;
case 585:
#line 17859 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2170;
		case 41: goto tr2171;
		case 45: goto tr2172;
		case 46: goto tr1580;
		case 60: goto tr2173;
		case 61: goto tr2174;
		case 62: goto tr2175;
		case 91: goto tr2176;
		case 94: goto tr2177;
		case 123: goto tr2178;
		case 126: goto tr2179;
	}
	goto st535;
tr2319:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st586;
tr2099:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st586;
tr2119:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st586;
tr2139:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st586;
tr2159:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st586;
tr2179:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st586;
tr2199:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st586;
tr2219:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st586;
st586:
	if ( ++p == pe )
		goto _out586;
case 586:
#line 17915 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2190;
		case 41: goto tr2191;
		case 45: goto tr2192;
		case 46: goto tr1611;
		case 60: goto tr2193;
		case 61: goto tr2194;
		case 62: goto tr2195;
		case 91: goto tr2196;
		case 94: goto tr2197;
		case 123: goto tr2198;
		case 126: goto tr2199;
	}
	goto st535;
tr2095:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st587;
st587:
	if ( ++p == pe )
		goto _out587;
case 587:
#line 17939 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr1990;
		case 40: goto tr2210;
		case 41: goto tr2211;
		case 45: goto tr2212;
		case 46: goto tr1642;
		case 60: goto tr2213;
		case 61: goto tr2214;
		case 62: goto tr2215;
		case 91: goto tr2216;
		case 94: goto tr2217;
		case 123: goto tr2218;
		case 126: goto tr2219;
	}
	goto st535;
tr193:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st681;
st681:
	if ( ++p == pe )
		goto _out681;
case 681:
#line 17971 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr14;
	goto tr13;
tr194:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st682;
st682:
	if ( ++p == pe )
		goto _out682;
case 682:
#line 17991 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr14;
		case 10: goto tr14;
		case 40: goto tr145;
		case 41: goto tr146;
		case 45: goto tr147;
		case 46: goto tr148;
		case 47: goto tr149;
		case 60: goto tr150;
		case 61: goto tr151;
		case 62: goto tr152;
		case 91: goto tr153;
		case 92: goto tr154;
		case 94: goto tr155;
		case 123: goto tr156;
		case 126: goto tr157;
	}
	goto tr144;
tr195:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
#line 44 "superredcloth_scan.rl"
	{ reg = NULL; }
#line 44 "superredcloth_scan.rl"
	{INLINE(table, table_open);}
#line 7 "superredcloth_scan.rl"
	{ regs = rb_hash_new(); reg = NULL; }
#line 73 "superredcloth_scan.rl"
	{act = 15;}
	goto st683;
st683:
	if ( ++p == pe )
		goto _out683;
case 683:
#line 18026 "superredcloth_scan.c"
	switch( (*p) ) {
		case 40: goto tr103;
		case 41: goto tr104;
		case 45: goto tr105;
		case 46: goto tr106;
		case 60: goto tr107;
		case 61: goto tr108;
		case 62: goto tr109;
		case 91: goto tr110;
		case 94: goto tr111;
		case 123: goto tr112;
		case 126: goto tr113;
	}
	goto tr14;
tr2472:
#line 8 "superredcloth_scan.rl"
	{tokend = p;{ CAT(block); }{p = ((tokend))-1;}}
	goto st684;
tr2474:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st684;
tr2477:
#line 8 "superredcloth_scan.rl"
	{{ CAT(block); }{p = ((tokend))-1;}}
	goto st684;
tr2485:
#line 47 "superredcloth_scan.rl"
	{tokend = p+1;{ DONE(block); {{p = ((tokend))-1;}{goto st660;}} }{p = ((tokend))-1;}}
	goto st684;
st684:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out684;
case 684:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18065 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto st588;
		case 60: goto tr2476;
	}
	goto tr2474;
st588:
	goto _out588;
tr2476:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st685;
st685:
	if ( ++p == pe )
		goto _out685;
case 685:
#line 18081 "superredcloth_scan.c"
	if ( (*p) == 47 )
		goto st589;
	goto tr2472;
st589:
	if ( ++p == pe )
		goto _out589;
case 589:
	if ( (*p) == 110 )
		goto st590;
	goto tr2477;
st590:
	if ( ++p == pe )
		goto _out590;
case 590:
	if ( (*p) == 111 )
		goto st591;
	goto tr2477;
st591:
	if ( ++p == pe )
		goto _out591;
case 591:
	if ( (*p) == 116 )
		goto st592;
	goto tr2477;
st592:
	if ( ++p == pe )
		goto _out592;
case 592:
	if ( (*p) == 101 )
		goto st593;
	goto tr2477;
st593:
	if ( ++p == pe )
		goto _out593;
case 593:
	if ( (*p) == 120 )
		goto st594;
	goto tr2477;
st594:
	if ( ++p == pe )
		goto _out594;
case 594:
	if ( (*p) == 116 )
		goto st595;
	goto tr2477;
st595:
	if ( ++p == pe )
		goto _out595;
case 595:
	if ( (*p) == 105 )
		goto st596;
	goto tr2477;
st596:
	if ( ++p == pe )
		goto _out596;
case 596:
	if ( (*p) == 108 )
		goto st597;
	goto tr2477;
st597:
	if ( ++p == pe )
		goto _out597;
case 597:
	if ( (*p) == 101 )
		goto st598;
	goto tr2477;
st598:
	if ( ++p == pe )
		goto _out598;
case 598:
	if ( (*p) == 62 )
		goto tr2485;
	goto tr2477;
tr2488:
#line 8 "superredcloth_scan.rl"
	{tokend = p;{ CAT(block); }{p = ((tokend))-1;}}
	goto st686;
tr2490:
#line 52 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); {{p = ((tokend))-1;}{goto st660;}} }{p = ((tokend))-1;}}
	goto st686;
tr2492:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st686;
tr2495:
#line 8 "superredcloth_scan.rl"
	{{ CAT(block); }{p = ((tokend))-1;}}
	goto st686;
st686:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out686;
case 686:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18179 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2490;
		case 10: goto tr2493;
		case 13: goto tr2494;
	}
	goto tr2492;
tr2493:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st687;
st687:
	if ( ++p == pe )
		goto _out687;
case 687:
#line 18194 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto tr2490;
		case 13: goto st599;
	}
	goto tr2488;
st599:
	if ( ++p == pe )
		goto _out599;
case 599:
	if ( (*p) == 10 )
		goto tr2490;
	goto tr2495;
tr2494:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st688;
st688:
	if ( ++p == pe )
		goto _out688;
case 688:
#line 18215 "superredcloth_scan.c"
	if ( (*p) == 10 )
		goto st600;
	goto tr2488;
st600:
	if ( ++p == pe )
		goto _out600;
case 600:
	switch( (*p) ) {
		case 10: goto tr2490;
		case 13: goto st599;
	}
	goto tr2495;
tr2496:
#line 8 "superredcloth_scan.rl"
	{tokend = p;{ CAT(block); }{p = ((tokend))-1;}}
	goto st689;
tr2498:
#line 57 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); {{p = ((tokend))-1;}{goto st660;}} }{p = ((tokend))-1;}}
	goto st689;
tr2500:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st689;
tr2503:
#line 8 "superredcloth_scan.rl"
	{{ CAT(block); }{p = ((tokend))-1;}}
	goto st689;
st689:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out689;
case 689:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18252 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2498;
		case 10: goto tr2501;
		case 13: goto tr2502;
	}
	goto tr2500;
tr2501:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st690;
st690:
	if ( ++p == pe )
		goto _out690;
case 690:
#line 18267 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto tr2498;
		case 13: goto st601;
	}
	goto tr2496;
st601:
	if ( ++p == pe )
		goto _out601;
case 601:
	if ( (*p) == 10 )
		goto tr2498;
	goto tr2503;
tr2502:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st691;
st691:
	if ( ++p == pe )
		goto _out691;
case 691:
#line 18288 "superredcloth_scan.c"
	if ( (*p) == 10 )
		goto st602;
	goto tr2496;
st602:
	if ( ++p == pe )
		goto _out602;
case 602:
	switch( (*p) ) {
		case 10: goto tr2498;
		case 13: goto st601;
	}
	goto tr2503;
tr2504:
#line 8 "superredcloth_scan.rl"
	{tokend = p;{ CAT(block); }{p = ((tokend))-1;}}
	goto st692;
tr2506:
#line 63 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); nest = 0; LIST_ITEM(); {{p = ((tokend))-1;}{goto st660;}} }{p = ((tokend))-1;}}
	goto st692;
tr2510:
#line 8 "superredcloth_scan.rl"
	{tokend = p+1;{ CAT(block); }{p = ((tokend))-1;}}
	goto st692;
tr2542:
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2555:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2566:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2577:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2588:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2599:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2610:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2621:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2652:
#line 8 "superredcloth_scan.rl"
	{{ CAT(block); }{p = ((tokend))-1;}}
	goto st692;
tr2662:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2677:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2692:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2737:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2778:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
tr2789:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
#line 62 "superredcloth_scan.rl"
	{tokend = p+1;{ ADD_BLOCK(); LIST_ITEM(); }{p = ((tokend))-1;}}
	goto st692;
st692:
#line 1 "superredcloth_scan.rl"
	{tokstart = 0;}
	if ( ++p == pe )
		goto _out692;
case 692:
#line 1 "superredcloth_scan.rl"
	{tokstart = p;}
#line 18409 "superredcloth_scan.c"
	switch( (*p) ) {
		case 0: goto tr2506;
		case 10: goto tr2511;
		case 13: goto tr2512;
	}
	goto tr2510;
tr2511:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st693;
st693:
	if ( ++p == pe )
		goto _out693;
case 693:
#line 18424 "superredcloth_scan.c"
	switch( (*p) ) {
		case 10: goto tr2506;
		case 13: goto st603;
		case 35: goto tr2508;
		case 42: goto tr2509;
	}
	goto tr2504;
st603:
	if ( ++p == pe )
		goto _out603;
case 603:
	if ( (*p) == 10 )
		goto tr2506;
	goto tr2652;
tr2678:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st604;
tr2693:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st604;
tr2508:
#line 33 "superredcloth_scan.rl"
	{nest = 0;}
	goto st604;
st604:
	if ( ++p == pe )
		goto _out604;
case 604:
#line 18455 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2692;
		case 35: goto tr2693;
		case 40: goto tr2694;
		case 41: goto tr2695;
		case 42: goto tr2696;
		case 45: goto tr2697;
		case 60: goto tr2699;
		case 61: goto tr2700;
		case 62: goto tr2701;
		case 91: goto tr2702;
		case 94: goto tr2703;
		case 95: goto tr2704;
		case 123: goto tr2705;
		case 126: goto tr2706;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr2698;
	goto tr2652;
tr2707:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2717:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2727:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2738:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2748:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2758:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2768:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2679:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2694:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2801:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2779:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
tr2790:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st605;
st605:
	if ( ++p == pe )
		goto _out605;
case 605:
#line 18553 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2662;
		case 35: goto st607;
		case 40: goto tr2663;
		case 41: goto tr2664;
		case 45: goto tr2665;
		case 60: goto tr2666;
		case 61: goto tr2667;
		case 62: goto tr2668;
		case 91: goto tr2669;
		case 94: goto tr2670;
		case 123: goto tr2671;
		case 126: goto tr2672;
	}
	goto tr2632;
tr2632:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st606;
st606:
	if ( ++p == pe )
		goto _out606;
case 606:
#line 18577 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2529;
		case 41: goto tr2530;
	}
	goto st606;
tr2529:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st607;
st607:
	if ( ++p == pe )
		goto _out607;
case 607:
#line 18591 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2652;
	goto tr2655;
tr2655:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st608;
st608:
	if ( ++p == pe )
		goto _out608;
case 608:
#line 18603 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2521;
	goto st608;
tr2514:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st609;
tr2516:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st609;
tr2521:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st609;
tr2530:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st609;
tr2541:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st609;
st609:
	if ( ++p == pe )
		goto _out609;
case 609:
#line 18633 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2542;
		case 40: goto st610;
		case 91: goto st611;
		case 123: goto st613;
	}
	goto tr2652;
st610:
	if ( ++p == pe )
		goto _out610;
case 610:
	switch( (*p) ) {
		case 35: goto st607;
		case 41: goto st609;
	}
	goto tr2632;
tr2713:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st611;
tr2723:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st611;
tr2733:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st611;
tr2744:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st611;
tr2754:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st611;
tr2764:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st611;
tr2774:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st611;
tr2687:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st611;
tr2702:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st611;
tr2807:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st611;
tr2785:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st611;
tr2797:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st611;
st611:
	if ( ++p == pe )
		goto _out611;
case 611:
#line 18704 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr2652;
	goto tr2653;
tr2653:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st612;
st612:
	if ( ++p == pe )
		goto _out612;
case 612:
#line 18716 "superredcloth_scan.c"
	if ( (*p) == 93 )
		goto tr2516;
	goto st612;
tr2715:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st613;
tr2725:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st613;
tr2735:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st613;
tr2746:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st613;
tr2756:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st613;
tr2766:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st613;
tr2776:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st613;
tr2690:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st613;
tr2705:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st613;
tr2809:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st613;
tr2787:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st613;
tr2799:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st613;
st613:
	if ( ++p == pe )
		goto _out613;
case 613:
#line 18774 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr2652;
	goto tr2651;
tr2651:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st614;
st614:
	if ( ++p == pe )
		goto _out614;
case 614:
#line 18786 "superredcloth_scan.c"
	if ( (*p) == 125 )
		goto tr2514;
	goto st614;
tr2663:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2556:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2567:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2578:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2589:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2600:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2611:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
tr2622:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st615;
st615:
	if ( ++p == pe )
		goto _out615;
case 615:
#line 18844 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2662;
		case 35: goto tr2529;
		case 40: goto tr2663;
		case 41: goto tr2673;
		case 45: goto tr2665;
		case 60: goto tr2666;
		case 61: goto tr2667;
		case 62: goto tr2668;
		case 91: goto tr2669;
		case 94: goto tr2670;
		case 123: goto tr2671;
		case 126: goto tr2672;
	}
	goto tr2632;
tr2664:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2708:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2718:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2728:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2739:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2749:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2759:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2769:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2680:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2695:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2557:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2568:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2579:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2590:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2601:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2612:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2802:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2623:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2673:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st616;
tr2780:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
tr2791:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st616;
st616:
	if ( ++p == pe )
		goto _out616;
case 616:
#line 19010 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2737;
		case 40: goto tr2738;
		case 41: goto tr2739;
		case 45: goto tr2740;
		case 60: goto tr2741;
		case 61: goto tr2742;
		case 62: goto tr2743;
		case 91: goto tr2744;
		case 94: goto tr2745;
		case 123: goto tr2746;
		case 126: goto tr2747;
	}
	goto tr2652;
tr2709:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st617;
tr2719:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st617;
tr2729:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st617;
tr2740:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st617;
tr2750:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st617;
tr2760:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st617;
tr2770:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st617;
tr2682:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st617;
tr2697:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st617;
tr2803:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st617;
tr2781:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st617;
tr2792:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st617;
st617:
	if ( ++p == pe )
		goto _out617;
case 617:
#line 19079 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2588;
		case 40: goto tr2748;
		case 41: goto tr2749;
		case 45: goto tr2750;
		case 60: goto tr2751;
		case 61: goto tr2752;
		case 62: goto tr2753;
		case 91: goto tr2754;
		case 94: goto tr2755;
		case 123: goto tr2756;
		case 126: goto tr2757;
	}
	goto tr2652;
tr2710:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st618;
tr2720:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st618;
tr2730:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st618;
tr2741:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st618;
tr2751:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st618;
tr2761:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st618;
tr2771:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st618;
tr2684:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st618;
tr2699:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st618;
tr2804:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st618;
tr2782:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st618;
tr2794:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st618;
st618:
	if ( ++p == pe )
		goto _out618;
case 618:
#line 19148 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2555;
		case 40: goto tr2707;
		case 41: goto tr2708;
		case 45: goto tr2709;
		case 60: goto tr2710;
		case 61: goto tr2711;
		case 62: goto tr2712;
		case 91: goto tr2713;
		case 94: goto tr2714;
		case 123: goto tr2715;
		case 126: goto tr2716;
	}
	goto tr2652;
tr2711:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st619;
tr2721:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st619;
tr2731:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st619;
tr2742:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st619;
tr2752:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st619;
tr2762:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st619;
tr2772:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st619;
tr2685:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st619;
tr2700:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st619;
tr2805:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st619;
tr2783:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st619;
tr2795:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st619;
st619:
	if ( ++p == pe )
		goto _out619;
case 619:
#line 19217 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2577;
		case 40: goto tr2727;
		case 41: goto tr2728;
		case 45: goto tr2729;
		case 60: goto tr2730;
		case 61: goto tr2731;
		case 62: goto tr2732;
		case 91: goto tr2733;
		case 94: goto tr2734;
		case 123: goto tr2735;
		case 126: goto tr2736;
	}
	goto tr2652;
tr2722:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st620;
tr2732:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st620;
tr2743:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st620;
tr2753:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st620;
tr2763:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st620;
tr2773:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st620;
tr2686:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st620;
tr2701:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st620;
tr2806:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st620;
tr2784:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st620;
tr2796:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st620;
st620:
	if ( ++p == pe )
		goto _out620;
case 620:
#line 19282 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2566;
		case 40: goto tr2717;
		case 41: goto tr2718;
		case 45: goto tr2719;
		case 60: goto tr2720;
		case 61: goto tr2721;
		case 62: goto tr2722;
		case 91: goto tr2723;
		case 94: goto tr2724;
		case 123: goto tr2725;
		case 126: goto tr2726;
	}
	goto tr2652;
tr2714:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st621;
tr2724:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st621;
tr2734:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st621;
tr2745:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st621;
tr2755:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st621;
tr2765:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st621;
tr2775:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st621;
tr2688:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st621;
tr2703:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st621;
tr2808:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st621;
tr2786:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st621;
tr2798:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st621;
st621:
	if ( ++p == pe )
		goto _out621;
case 621:
#line 19351 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2599;
		case 40: goto tr2758;
		case 41: goto tr2759;
		case 45: goto tr2760;
		case 60: goto tr2761;
		case 61: goto tr2762;
		case 62: goto tr2763;
		case 91: goto tr2764;
		case 94: goto tr2765;
		case 123: goto tr2766;
		case 126: goto tr2767;
	}
	goto tr2652;
tr2716:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st622;
tr2726:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st622;
tr2736:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st622;
tr2747:
#line 23 "superredcloth_scan.rl"
	{ AINC(padding-right) }
	goto st622;
tr2757:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st622;
tr2767:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st622;
tr2777:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st622;
tr2691:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st622;
tr2706:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st622;
tr2810:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st622;
tr2788:
#line 36 "superredcloth_scan.rl"
	{ ASET(start, continue) }
	goto st622;
tr2800:
#line 37 "superredcloth_scan.rl"
	{ STORE(start) }
	goto st622;
st622:
	if ( ++p == pe )
		goto _out622;
case 622:
#line 19420 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2610;
		case 40: goto tr2768;
		case 41: goto tr2769;
		case 45: goto tr2770;
		case 60: goto tr2771;
		case 61: goto tr2772;
		case 62: goto tr2773;
		case 91: goto tr2774;
		case 94: goto tr2775;
		case 123: goto tr2776;
		case 126: goto tr2777;
	}
	goto tr2652;
tr2712:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st623;
st623:
	if ( ++p == pe )
		goto _out623;
case 623:
#line 19443 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2621;
		case 40: goto tr2801;
		case 41: goto tr2802;
		case 45: goto tr2803;
		case 60: goto tr2804;
		case 61: goto tr2805;
		case 62: goto tr2806;
		case 91: goto tr2807;
		case 94: goto tr2808;
		case 123: goto tr2809;
		case 126: goto tr2810;
	}
	goto tr2652;
tr2665:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st624;
tr2558:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st624;
tr2569:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st624;
tr2580:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st624;
tr2591:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st624;
tr2602:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st624;
tr2613:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st624;
tr2624:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st624;
st624:
	if ( ++p == pe )
		goto _out624;
case 624:
#line 19498 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2588;
		case 35: goto tr2529;
		case 40: goto tr2589;
		case 41: goto tr2590;
		case 45: goto tr2591;
		case 60: goto tr2592;
		case 61: goto tr2593;
		case 62: goto tr2594;
		case 91: goto tr2595;
		case 94: goto tr2596;
		case 123: goto tr2597;
		case 126: goto tr2598;
	}
	goto st606;
tr2666:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st625;
tr2559:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st625;
tr2570:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st625;
tr2581:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st625;
tr2592:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st625;
tr2603:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st625;
tr2614:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st625;
tr2625:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st625;
st625:
	if ( ++p == pe )
		goto _out625;
case 625:
#line 19554 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2555;
		case 35: goto tr2529;
		case 40: goto tr2556;
		case 41: goto tr2557;
		case 45: goto tr2558;
		case 60: goto tr2559;
		case 61: goto tr2560;
		case 62: goto tr2561;
		case 91: goto tr2562;
		case 94: goto tr2563;
		case 123: goto tr2564;
		case 126: goto tr2565;
	}
	goto st606;
tr2667:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st626;
tr2560:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st626;
tr2571:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st626;
tr2582:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st626;
tr2593:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st626;
tr2604:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st626;
tr2615:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st626;
tr2626:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st626;
st626:
	if ( ++p == pe )
		goto _out626;
case 626:
#line 19610 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2577;
		case 35: goto tr2529;
		case 40: goto tr2578;
		case 41: goto tr2579;
		case 45: goto tr2580;
		case 60: goto tr2581;
		case 61: goto tr2582;
		case 62: goto tr2583;
		case 91: goto tr2584;
		case 94: goto tr2585;
		case 123: goto tr2586;
		case 126: goto tr2587;
	}
	goto st606;
tr2668:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st627;
tr2572:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st627;
tr2583:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st627;
tr2594:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st627;
tr2605:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st627;
tr2616:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st627;
tr2627:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st627;
st627:
	if ( ++p == pe )
		goto _out627;
case 627:
#line 19662 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2566;
		case 35: goto tr2529;
		case 40: goto tr2567;
		case 41: goto tr2568;
		case 45: goto tr2569;
		case 60: goto tr2570;
		case 61: goto tr2571;
		case 62: goto tr2572;
		case 91: goto tr2573;
		case 94: goto tr2574;
		case 123: goto tr2575;
		case 126: goto tr2576;
	}
	goto st606;
tr2669:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st628;
tr2562:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st628;
tr2573:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st628;
tr2584:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st628;
tr2595:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st628;
tr2606:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st628;
tr2617:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st628;
tr2628:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st628;
st628:
	if ( ++p == pe )
		goto _out628;
case 628:
#line 19718 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2658;
		case 41: goto tr2659;
		case 93: goto st606;
	}
	goto tr2639;
tr2639:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st629;
st629:
	if ( ++p == pe )
		goto _out629;
case 629:
#line 19733 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2536;
		case 41: goto tr2537;
		case 93: goto tr2538;
	}
	goto st629;
tr2536:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st630;
tr2658:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st630;
st630:
	if ( ++p == pe )
		goto _out630;
case 630:
#line 19754 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st612;
		case 93: goto tr2648;
	}
	goto tr2647;
tr2647:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st631;
st631:
	if ( ++p == pe )
		goto _out631;
case 631:
#line 19768 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2526;
		case 93: goto tr2527;
	}
	goto st631;
tr2519:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st632;
tr2526:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st632;
tr2537:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st632;
tr2650:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st632;
tr2656:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st632;
tr2659:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st632;
st632:
	if ( ++p == pe )
		goto _out632;
case 632:
#line 19808 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2542;
		case 40: goto st633;
		case 91: goto st651;
		case 93: goto tr2516;
		case 123: goto st652;
	}
	goto st612;
st633:
	if ( ++p == pe )
		goto _out633;
case 633:
	switch( (*p) ) {
		case 35: goto st630;
		case 41: goto st632;
		case 93: goto tr2642;
	}
	goto tr2639;
tr2534:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st634;
tr2538:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st634;
tr2638:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st634;
tr2642:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st634;
st634:
	if ( ++p == pe )
		goto _out634;
case 634:
#line 19851 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2542;
		case 35: goto tr2529;
		case 40: goto st635;
		case 41: goto tr2530;
		case 91: goto st628;
		case 123: goto st636;
	}
	goto st606;
st635:
	if ( ++p == pe )
		goto _out635;
case 635:
	switch( (*p) ) {
		case 35: goto tr2529;
		case 41: goto tr2530;
	}
	goto tr2632;
tr2671:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st636;
tr2564:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st636;
tr2575:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st636;
tr2586:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st636;
tr2597:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st636;
tr2608:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st636;
tr2619:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st636;
tr2630:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st636;
st636:
	if ( ++p == pe )
		goto _out636;
case 636:
#line 19910 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2660;
		case 41: goto tr2661;
		case 125: goto st606;
	}
	goto tr2635;
tr2635:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st637;
st637:
	if ( ++p == pe )
		goto _out637;
case 637:
#line 19925 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2532;
		case 41: goto tr2533;
		case 125: goto tr2534;
	}
	goto st637;
tr2532:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st638;
tr2660:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st638;
st638:
	if ( ++p == pe )
		goto _out638;
case 638:
#line 19946 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto st614;
		case 125: goto tr2646;
	}
	goto tr2645;
tr2645:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st639;
st639:
	if ( ++p == pe )
		goto _out639;
case 639:
#line 19960 "superredcloth_scan.c"
	switch( (*p) ) {
		case 41: goto tr2523;
		case 125: goto tr2524;
	}
	goto st639;
tr2518:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st640;
tr2523:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
	goto st640;
tr2533:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st640;
tr2654:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st640;
tr2657:
#line 27 "superredcloth_scan.rl"
	{STORE(id)}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st640;
tr2661:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st640;
st640:
	if ( ++p == pe )
		goto _out640;
case 640:
#line 20000 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2542;
		case 40: goto st641;
		case 91: goto st642;
		case 123: goto st644;
		case 125: goto tr2514;
	}
	goto st614;
st641:
	if ( ++p == pe )
		goto _out641;
case 641:
	switch( (*p) ) {
		case 35: goto st638;
		case 41: goto st640;
		case 125: goto tr2638;
	}
	goto tr2635;
st642:
	if ( ++p == pe )
		goto _out642;
case 642:
	switch( (*p) ) {
		case 93: goto st614;
		case 125: goto tr2650;
	}
	goto tr2649;
tr2649:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st643;
st643:
	if ( ++p == pe )
		goto _out643;
case 643:
#line 20036 "superredcloth_scan.c"
	switch( (*p) ) {
		case 93: goto tr2518;
		case 125: goto tr2519;
	}
	goto st643;
st644:
	if ( ++p == pe )
		goto _out644;
case 644:
	if ( (*p) == 125 )
		goto tr2514;
	goto tr2651;
tr2524:
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st645;
tr2527:
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st645;
tr2646:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 29 "superredcloth_scan.rl"
	{ STORE(style) }
	goto st645;
tr2648:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
#line 28 "superredcloth_scan.rl"
	{ STORE(lang) }
	goto st645;
st645:
	if ( ++p == pe )
		goto _out645;
case 645:
#line 20073 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2542;
		case 40: goto st646;
		case 41: goto tr2521;
		case 91: goto st649;
		case 123: goto st650;
	}
	goto st608;
st646:
	if ( ++p == pe )
		goto _out646;
case 646:
	switch( (*p) ) {
		case 35: goto st648;
		case 41: goto tr2521;
	}
	goto tr2643;
tr2643:
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st647;
st647:
	if ( ++p == pe )
		goto _out647;
case 647:
#line 20099 "superredcloth_scan.c"
	switch( (*p) ) {
		case 35: goto tr2540;
		case 41: goto tr2541;
	}
	goto st647;
tr2540:
#line 27 "superredcloth_scan.rl"
	{ STORE(class) }
	goto st648;
st648:
	if ( ++p == pe )
		goto _out648;
case 648:
#line 20113 "superredcloth_scan.c"
	if ( (*p) == 41 )
		goto tr2521;
	goto tr2655;
st649:
	if ( ++p == pe )
		goto _out649;
case 649:
	switch( (*p) ) {
		case 41: goto tr2656;
		case 93: goto st608;
	}
	goto tr2647;
st650:
	if ( ++p == pe )
		goto _out650;
case 650:
	switch( (*p) ) {
		case 41: goto tr2657;
		case 125: goto st608;
	}
	goto tr2645;
st651:
	if ( ++p == pe )
		goto _out651;
case 651:
	if ( (*p) == 93 )
		goto tr2516;
	goto tr2653;
st652:
	if ( ++p == pe )
		goto _out652;
case 652:
	switch( (*p) ) {
		case 93: goto tr2654;
		case 125: goto st612;
	}
	goto tr2649;
tr2670:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st653;
tr2563:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st653;
tr2574:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st653;
tr2585:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st653;
tr2596:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st653;
tr2607:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st653;
tr2618:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st653;
tr2629:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st653;
st653:
	if ( ++p == pe )
		goto _out653;
case 653:
#line 20191 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2599;
		case 35: goto tr2529;
		case 40: goto tr2600;
		case 41: goto tr2601;
		case 45: goto tr2602;
		case 60: goto tr2603;
		case 61: goto tr2604;
		case 62: goto tr2605;
		case 91: goto tr2606;
		case 94: goto tr2607;
		case 123: goto tr2608;
		case 126: goto tr2609;
	}
	goto st606;
tr2672:
#line 22 "superredcloth_scan.rl"
	{ AINC(padding-left) }
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st654;
tr2565:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st654;
tr2576:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
	goto st654;
tr2587:
#line 21 "superredcloth_scan.rl"
	{ ASET(align, center) }
	goto st654;
tr2598:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, middle) }
	goto st654;
tr2609:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, top) }
	goto st654;
tr2620:
#line 26 "superredcloth_scan.rl"
	{ ASET(valign, bottom) }
	goto st654;
tr2631:
#line 19 "superredcloth_scan.rl"
	{ ASET(align, right) }
#line 20 "superredcloth_scan.rl"
	{ ASET(align, justified) }
	goto st654;
st654:
	if ( ++p == pe )
		goto _out654;
case 654:
#line 20247 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2610;
		case 35: goto tr2529;
		case 40: goto tr2611;
		case 41: goto tr2612;
		case 45: goto tr2613;
		case 60: goto tr2614;
		case 61: goto tr2615;
		case 62: goto tr2616;
		case 91: goto tr2617;
		case 94: goto tr2618;
		case 123: goto tr2619;
		case 126: goto tr2620;
	}
	goto st606;
tr2561:
#line 18 "superredcloth_scan.rl"
	{ ASET(align, left) }
	goto st655;
st655:
	if ( ++p == pe )
		goto _out655;
case 655:
#line 20271 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2621;
		case 35: goto tr2529;
		case 40: goto tr2622;
		case 41: goto tr2623;
		case 45: goto tr2624;
		case 60: goto tr2625;
		case 61: goto tr2626;
		case 62: goto tr2627;
		case 91: goto tr2628;
		case 94: goto tr2629;
		case 123: goto tr2630;
		case 126: goto tr2631;
	}
	goto st606;
tr2681:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st656;
tr2696:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st656;
tr2509:
#line 33 "superredcloth_scan.rl"
	{nest = 0;}
	goto st656;
st656:
	if ( ++p == pe )
		goto _out656;
case 656:
#line 20303 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2677;
		case 35: goto tr2678;
		case 40: goto tr2679;
		case 41: goto tr2680;
		case 42: goto tr2681;
		case 45: goto tr2682;
		case 60: goto tr2684;
		case 61: goto tr2685;
		case 62: goto tr2686;
		case 91: goto tr2687;
		case 94: goto tr2688;
		case 95: goto tr2689;
		case 123: goto tr2690;
		case 126: goto tr2691;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto tr2683;
	goto tr2652;
tr2683:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st657;
tr2698:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
#line 5 "superredcloth_scan.rl"
	{ reg = p; }
	goto st657;
st657:
	if ( ++p == pe )
		goto _out657;
case 657:
#line 20339 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2789;
		case 40: goto tr2790;
		case 41: goto tr2791;
		case 45: goto tr2792;
		case 60: goto tr2794;
		case 61: goto tr2795;
		case 62: goto tr2796;
		case 91: goto tr2797;
		case 94: goto tr2798;
		case 123: goto tr2799;
		case 126: goto tr2800;
	}
	if ( 48 <= (*p) && (*p) <= 57 )
		goto st657;
	goto tr2652;
tr2689:
#line 31 "superredcloth_scan.rl"
	{nest++; list_type = "ul";}
	goto st658;
tr2704:
#line 32 "superredcloth_scan.rl"
	{nest++; list_type = "ol";}
	goto st658;
st658:
	if ( ++p == pe )
		goto _out658;
case 658:
#line 20368 "superredcloth_scan.c"
	switch( (*p) ) {
		case 32: goto tr2778;
		case 40: goto tr2779;
		case 41: goto tr2780;
		case 45: goto tr2781;
		case 60: goto tr2782;
		case 61: goto tr2783;
		case 62: goto tr2784;
		case 91: goto tr2785;
		case 94: goto tr2786;
		case 123: goto tr2787;
		case 126: goto tr2788;
	}
	goto tr2652;
tr2512:
#line 1 "superredcloth_scan.rl"
	{tokend = p+1;}
	goto st694;
st694:
	if ( ++p == pe )
		goto _out694;
case 694:
#line 20391 "superredcloth_scan.c"
	if ( (*p) == 10 )
		goto st659;
	goto tr2504;
st659:
	if ( ++p == pe )
		goto _out659;
case 659:
	switch( (*p) ) {
		case 10: goto tr2506;
		case 13: goto st603;
		case 35: goto tr2508;
		case 42: goto tr2509;
	}
	goto tr2652;
	}
	_out660: cs = 660; goto _out; 
	_out661: cs = 661; goto _out; 
	_out0: cs = 0; goto _out; 
	_out1: cs = 1; goto _out; 
	_out2: cs = 2; goto _out; 
	_out3: cs = 3; goto _out; 
	_out4: cs = 4; goto _out; 
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
	_out37: cs = 37; goto _out; 
	_out38: cs = 38; goto _out; 
	_out39: cs = 39; goto _out; 
	_out40: cs = 40; goto _out; 
	_out41: cs = 41; goto _out; 
	_out42: cs = 42; goto _out; 
	_out43: cs = 43; goto _out; 
	_out44: cs = 44; goto _out; 
	_out45: cs = 45; goto _out; 
	_out46: cs = 46; goto _out; 
	_out47: cs = 47; goto _out; 
	_out48: cs = 48; goto _out; 
	_out49: cs = 49; goto _out; 
	_out50: cs = 50; goto _out; 
	_out51: cs = 51; goto _out; 
	_out52: cs = 52; goto _out; 
	_out53: cs = 53; goto _out; 
	_out54: cs = 54; goto _out; 
	_out662: cs = 662; goto _out; 
	_out55: cs = 55; goto _out; 
	_out56: cs = 56; goto _out; 
	_out57: cs = 57; goto _out; 
	_out58: cs = 58; goto _out; 
	_out59: cs = 59; goto _out; 
	_out60: cs = 60; goto _out; 
	_out61: cs = 61; goto _out; 
	_out62: cs = 62; goto _out; 
	_out63: cs = 63; goto _out; 
	_out64: cs = 64; goto _out; 
	_out663: cs = 663; goto _out; 
	_out65: cs = 65; goto _out; 
	_out66: cs = 66; goto _out; 
	_out67: cs = 67; goto _out; 
	_out68: cs = 68; goto _out; 
	_out69: cs = 69; goto _out; 
	_out70: cs = 70; goto _out; 
	_out71: cs = 71; goto _out; 
	_out72: cs = 72; goto _out; 
	_out73: cs = 73; goto _out; 
	_out74: cs = 74; goto _out; 
	_out75: cs = 75; goto _out; 
	_out76: cs = 76; goto _out; 
	_out664: cs = 664; goto _out; 
	_out77: cs = 77; goto _out; 
	_out78: cs = 78; goto _out; 
	_out79: cs = 79; goto _out; 
	_out80: cs = 80; goto _out; 
	_out81: cs = 81; goto _out; 
	_out82: cs = 82; goto _out; 
	_out83: cs = 83; goto _out; 
	_out84: cs = 84; goto _out; 
	_out85: cs = 85; goto _out; 
	_out86: cs = 86; goto _out; 
	_out87: cs = 87; goto _out; 
	_out88: cs = 88; goto _out; 
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
	_out102: cs = 102; goto _out; 
	_out103: cs = 103; goto _out; 
	_out104: cs = 104; goto _out; 
	_out105: cs = 105; goto _out; 
	_out106: cs = 106; goto _out; 
	_out107: cs = 107; goto _out; 
	_out108: cs = 108; goto _out; 
	_out109: cs = 109; goto _out; 
	_out110: cs = 110; goto _out; 
	_out111: cs = 111; goto _out; 
	_out112: cs = 112; goto _out; 
	_out113: cs = 113; goto _out; 
	_out114: cs = 114; goto _out; 
	_out115: cs = 115; goto _out; 
	_out116: cs = 116; goto _out; 
	_out117: cs = 117; goto _out; 
	_out118: cs = 118; goto _out; 
	_out119: cs = 119; goto _out; 
	_out120: cs = 120; goto _out; 
	_out121: cs = 121; goto _out; 
	_out122: cs = 122; goto _out; 
	_out123: cs = 123; goto _out; 
	_out124: cs = 124; goto _out; 
	_out125: cs = 125; goto _out; 
	_out126: cs = 126; goto _out; 
	_out127: cs = 127; goto _out; 
	_out128: cs = 128; goto _out; 
	_out129: cs = 129; goto _out; 
	_out130: cs = 130; goto _out; 
	_out131: cs = 131; goto _out; 
	_out132: cs = 132; goto _out; 
	_out133: cs = 133; goto _out; 
	_out134: cs = 134; goto _out; 
	_out135: cs = 135; goto _out; 
	_out136: cs = 136; goto _out; 
	_out137: cs = 137; goto _out; 
	_out138: cs = 138; goto _out; 
	_out139: cs = 139; goto _out; 
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
	_out154: cs = 154; goto _out; 
	_out155: cs = 155; goto _out; 
	_out156: cs = 156; goto _out; 
	_out157: cs = 157; goto _out; 
	_out158: cs = 158; goto _out; 
	_out159: cs = 159; goto _out; 
	_out160: cs = 160; goto _out; 
	_out161: cs = 161; goto _out; 
	_out162: cs = 162; goto _out; 
	_out163: cs = 163; goto _out; 
	_out164: cs = 164; goto _out; 
	_out165: cs = 165; goto _out; 
	_out166: cs = 166; goto _out; 
	_out167: cs = 167; goto _out; 
	_out168: cs = 168; goto _out; 
	_out169: cs = 169; goto _out; 
	_out170: cs = 170; goto _out; 
	_out171: cs = 171; goto _out; 
	_out172: cs = 172; goto _out; 
	_out173: cs = 173; goto _out; 
	_out174: cs = 174; goto _out; 
	_out175: cs = 175; goto _out; 
	_out176: cs = 176; goto _out; 
	_out177: cs = 177; goto _out; 
	_out178: cs = 178; goto _out; 
	_out179: cs = 179; goto _out; 
	_out180: cs = 180; goto _out; 
	_out181: cs = 181; goto _out; 
	_out182: cs = 182; goto _out; 
	_out183: cs = 183; goto _out; 
	_out184: cs = 184; goto _out; 
	_out185: cs = 185; goto _out; 
	_out186: cs = 186; goto _out; 
	_out187: cs = 187; goto _out; 
	_out188: cs = 188; goto _out; 
	_out189: cs = 189; goto _out; 
	_out190: cs = 190; goto _out; 
	_out191: cs = 191; goto _out; 
	_out192: cs = 192; goto _out; 
	_out193: cs = 193; goto _out; 
	_out194: cs = 194; goto _out; 
	_out195: cs = 195; goto _out; 
	_out196: cs = 196; goto _out; 
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
	_out298: cs = 298; goto _out; 
	_out299: cs = 299; goto _out; 
	_out300: cs = 300; goto _out; 
	_out301: cs = 301; goto _out; 
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
	_out665: cs = 665; goto _out; 
	_out666: cs = 666; goto _out; 
	_out667: cs = 667; goto _out; 
	_out668: cs = 668; goto _out; 
	_out669: cs = 669; goto _out; 
	_out416: cs = 416; goto _out; 
	_out417: cs = 417; goto _out; 
	_out418: cs = 418; goto _out; 
	_out419: cs = 419; goto _out; 
	_out420: cs = 420; goto _out; 
	_out421: cs = 421; goto _out; 
	_out422: cs = 422; goto _out; 
	_out423: cs = 423; goto _out; 
	_out424: cs = 424; goto _out; 
	_out670: cs = 670; goto _out; 
	_out671: cs = 671; goto _out; 
	_out672: cs = 672; goto _out; 
	_out673: cs = 673; goto _out; 
	_out674: cs = 674; goto _out; 
	_out425: cs = 425; goto _out; 
	_out426: cs = 426; goto _out; 
	_out427: cs = 427; goto _out; 
	_out428: cs = 428; goto _out; 
	_out429: cs = 429; goto _out; 
	_out430: cs = 430; goto _out; 
	_out431: cs = 431; goto _out; 
	_out675: cs = 675; goto _out; 
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
	_out676: cs = 676; goto _out; 
	_out477: cs = 477; goto _out; 
	_out478: cs = 478; goto _out; 
	_out479: cs = 479; goto _out; 
	_out480: cs = 480; goto _out; 
	_out481: cs = 481; goto _out; 
	_out482: cs = 482; goto _out; 
	_out483: cs = 483; goto _out; 
	_out484: cs = 484; goto _out; 
	_out677: cs = 677; goto _out; 
	_out485: cs = 485; goto _out; 
	_out486: cs = 486; goto _out; 
	_out487: cs = 487; goto _out; 
	_out488: cs = 488; goto _out; 
	_out489: cs = 489; goto _out; 
	_out490: cs = 490; goto _out; 
	_out491: cs = 491; goto _out; 
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
	_out524: cs = 524; goto _out; 
	_out525: cs = 525; goto _out; 
	_out526: cs = 526; goto _out; 
	_out527: cs = 527; goto _out; 
	_out528: cs = 528; goto _out; 
	_out529: cs = 529; goto _out; 
	_out678: cs = 678; goto _out; 
	_out679: cs = 679; goto _out; 
	_out680: cs = 680; goto _out; 
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
	_out555: cs = 555; goto _out; 
	_out556: cs = 556; goto _out; 
	_out557: cs = 557; goto _out; 
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
	_out681: cs = 681; goto _out; 
	_out682: cs = 682; goto _out; 
	_out683: cs = 683; goto _out; 
	_out684: cs = 684; goto _out; 
	_out588: cs = 588; goto _out; 
	_out685: cs = 685; goto _out; 
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
	_out686: cs = 686; goto _out; 
	_out687: cs = 687; goto _out; 
	_out599: cs = 599; goto _out; 
	_out688: cs = 688; goto _out; 
	_out600: cs = 600; goto _out; 
	_out689: cs = 689; goto _out; 
	_out690: cs = 690; goto _out; 
	_out601: cs = 601; goto _out; 
	_out691: cs = 691; goto _out; 
	_out602: cs = 602; goto _out; 
	_out692: cs = 692; goto _out; 
	_out693: cs = 693; goto _out; 
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
	_out694: cs = 694; goto _out; 
	_out659: cs = 659; goto _out; 

	_out: {}
	}
#line 97 "superredcloth_scan.rl"

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
