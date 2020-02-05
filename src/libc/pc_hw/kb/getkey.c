/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <pc.h>
#include <dpmi.h>
#include <libc/pc9800.h>
#include <keys.h>
#include <go32.h>

int
getkey_at(void)
{
  __dpmi_regs r;
  r.h.ah = 0x10;
  __dpmi_int(0x16, &r);

  if (r.h.al == 0x00 || (r.h.al == 0xe0 && r.h.ah != 0))
    return 0x0100 | r.h.ah;
  return r.h.al;
}

int getkey_98(void)
{
  __dpmi_regs r;
  r.h.ah = 0x00;
  __dpmi_int(0x18, &r);
  return conv_at98_pchwkey(r.h.ah, 0);
}

/*[エミュレーションに関する問題点]*****************************
    ・キーコードの発生しないもの
	K_Alt_LBracket		PC-9800 BIOS
	K_Alt_RBracket		PC-9800 BIOS
	K_Alt_Quote		キーが存在しない
	K_Alt_F1...F10		PC-9800 BIOS
	K_Control_Print		キーが存在しない
	K_Control_Home		PC-9800 BIOS
	K_Alt_1...4		PC-9800 BIOS
	K_Alt_Equals		SHIFT + ALT の判定が面倒(^^;;
	K_Alt_F11,12		PC-9800 BIOS
	K_Control_Center	キーが存在しない
	K_Alt_Enter		K_Alt_Return と区別できない
	K_Control_EHome		PC-9800 BIOS
 **************************************************************/

unsigned short conv_at98_pchwkeytbl[PC98_KEYS][4] = {
/* 0x00 */
  { K_Escape, K_Escape, K_Escape, K_Alt_Escape },
  { 0x31, K_ExclamationPoint, 0x31, K_Alt_1 },
  { 0x32, K_DoubleQuote, 0x32, 0x179 },
  { 0x33, K_Hash, 0x33, 0x17a },
  { 0x34, K_Dollar, 0x34, 0x17b },
  { 0x35, K_Percent, 0x35, 0x17c },
  { 0x36, K_Ampersand, 0x36, 0x17d },
  { 0x37, K_Quote, 0x37, 0x17e },
  { 0x38, K_LParen, 0x38, 0x17f },
  { 0x39, K_RParen, 0x39, 0x180 },
  { 0x30, 0x0a, 0x30, 0x181 },
  { K_Dash, K_Equals, K_Dash, 0x182 },
  { K_Caret, K_BackQuote, K_Control_Caret, 0x129 },
  { K_BackSlash, K_Pipe, K_Control_BackSlash, 0x12b },
  { K_BackSpace, K_BackSpace, K_Control_Backspace, K_Alt_Backspace },
  { K_Tab, K_BackTab, K_Tab, K_Alt_Tab },
/* 0x10 */
  { 0x71, 0x51, 0x11, K_Alt_Q },
  { 0x77, 0x57, 0x17, K_Alt_W },
  { 0x65, 0x45, 0x05, K_Alt_E },
  { 0x72, 0x52, 0x12, K_Alt_R },
  { 0x74, 0x54, 0x14, K_Alt_T },
  { 0x79, 0x59, 0x19, K_Alt_Y },
  { 0x75, 0x55, 0x15, K_Alt_U },
  { 0x69, 0x49, 0x09, K_Alt_I },
  { 0x6f, 0x4f, 0x0f, K_Alt_O },
  { 0x70, 0x50, 0x10, K_Alt_P },
  { K_At, K_Tilde, K_Control_At, 0x040 },
  { K_LBracket, K_LBrace, K_Control_LBracket, 0x11a },
  { K_Return, K_Return, K_Return, K_Alt_Return },
  { 0x61, 0x41, 0x01, K_Alt_A },
  { 0x73, 0x53, 0x13, K_Alt_S },
  { 0x64, 0x44, 0x04, K_Alt_D },
/* 0x20 */
  { 0x66, 0x46, 0x06, K_Alt_F },
  { 0x67, 0x47, 0x07, K_Alt_G },
  { 0x68, 0x48, 0x08, K_Alt_H },
  { 0x6a, 0x4a, 0x0a, K_Alt_J },
  { 0x6b, 0x4b, 0x0b, K_Alt_K },
  { 0x6c, 0x4c, 0x0c, K_Alt_L },
  { K_SemiColon, K_Plus, K_SemiColon, 0x127 },
  { K_Colon, K_Star, K_Colon, 0x03a },
  { K_RBracket, K_RBrace, K_Control_RBracket, 0x11b },
  { 0x7a, 0x5a, 0x1a, K_Alt_Z },
  { 0x78, 0x58, 0x18, K_Alt_X },
  { 0x63, 0x43, 0x03, K_Alt_C },
  { 0x76, 0x56, 0x16, K_Alt_V },
  { 0x62, 0x42, 0x02, K_Alt_B },
  { 0x6e, 0x4e, 0x0e, K_Alt_N },
  { 0x6d, 0x4d, 0x0d, K_Alt_M },
/* 0x30 */
  { K_Comma, K_LAngle, K_Comma, 0x133 },
  { K_Period, K_RAngle, K_Period, 0x134 },
  { K_Slash, K_QuestionMark, K_Slash, 0x135 },
  { 0x00, K_UnderScore, K_Control_Underscore, 0x00 },
  { 0x20, 0x20, 0x20, 0x20 },
  { K_BackSpace, K_BackSpace, K_Control_Backspace, K_BackSpace },
  { K_PageDown, K_PageDown, K_Control_PageDown, K_PageDown },
  { K_PageUp, K_PageUp, K_Control_PageUp, K_PageUp },
  { K_Insert, K_Insert, K_Control_Insert, K_Insert },
  { K_Delete, K_Delete, K_Control_Delete, K_Delete },
  { K_Up, K_Up, K_Control_Up, K_Up },
  { K_Left, K_Left, K_Control_Left, K_Left },
  { K_Right, K_Right, K_Control_Right, K_Right },
  { K_Down, K_Down, K_Control_Down, K_Down },
  { K_Home, K_Home, K_Control_Home, K_Home },
  { K_End, K_End, K_Control_End, K_End },
/* 0x40 */
  { 0x2d, 0x2d, K_Control_KPDash, K_Alt_KPMinus },
  { 0x2f, 0x2f, K_Control_KPSlash, K_Alt_KPSlash },
  { 0x37, 0x37, 0x37, 0x37 },
  { 0x38, 0x38, 0x38, 0x38 },
  { 0x39, 0x39, 0x39, 0x39 },
  { 0x2a, 0x2a, K_Control_KPStar, K_Alt_KPStar },
  { 0x34, 0x34, 0x34, 0x34 },
  { 0x35, 0x35, 0x35, 0x36 },
  { 0x36, 0x36, 0x36, 0x36 },
  { 0x2b, 0x2b, K_Control_KPPlus, K_Alt_KPPlus },
  { 0x31, 0x31, 0x31, 0x31 },
  { 0x32, 0x32, 0x32, 0x32 },
  { 0x33, 0x33, 0x33, 0x33 },
  { K_Equals, K_Equals, K_Equals, K_Equals },
  { 0x30, 0x30, 0x30, 0x30 },
  { K_Comma, K_Comma, K_Comma, K_Comma },
/* 0x50 */
  { K_Period, K_Period, K_Period, K_Period },
  { K_LineFeed, K_LineFeed, K_LineFeed, K_LineFeed },
  { K_F11, K_Control_F11, K_Shift_F11, K_Alt_F11 },
  { K_F12, K_Control_F12, K_Shift_F12, K_Alt_F12 },
  { K_F12, K_Control_F12, K_Shift_F12, K_Alt_F12 },
  { K_F12, K_Control_F12, K_Shift_F12, K_Alt_F12 },
  { K_F12, K_Control_F12, K_Shift_F12, K_Alt_F12 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
/* 0x60 */
  { 0, 0, 0, 0 },
  { 0, 0, 0, 0 },
  { K_F1, K_Shift_F1, K_Control_F1, K_Alt_F1 },
  { K_F2, K_Shift_F2, K_Control_F2, K_Alt_F2 },
  { K_F3, K_Shift_F3, K_Control_F3, K_Alt_F3 },
  { K_F4, K_Shift_F4, K_Control_F4, K_Alt_F4 },
  { K_F5, K_Shift_F5, K_Control_F5, K_Alt_F5 },
  { K_F6, K_Shift_F6, K_Control_F6, K_Alt_F6 },
  { K_F7, K_Shift_F7, K_Control_F7, K_Alt_F7 },
  { K_F8, K_Shift_F8, K_Control_F8, K_Alt_F8 },
  { K_F9, K_Shift_F9, K_Control_F9, K_Alt_F9 },
  { K_F10, K_Shift_F10, K_Control_F10, K_Alt_F10 } };

int conv_at98_pchwkey(unsigned char ah, unsigned char xflag)
{
  int shift = 0, keycode, extkey = 0;
  __dpmi_regs r;

  if ( ah >= 0x80 ) {
    if ( ah == 0xA1 || ah == 0xB1 ) {		/* NFER  : 0xA1 0xB1 */
      ah = 0x51;
    } else if ( ah == 0xA5 || ah == 0xB5 ) {	/* XFER  : 0xA5 0xB5 */
      ah = 0x35;
    } else if ( ah == 0xAE ) {			/* HOME  : 0xAE */
      ah = 0x3E;
    } else if ( ah >= 0xC0 ) {			/* VF1-5 : 0xC2-C6 */
      ah &= 0x0f;
      ah |= 0x50;
    } else {					/* F1-10 : 0x82-8B 0x92-9B */
      ah &= 0x0f;
      ah |= 0x60;
    }
  }

  if ( ah >= PC98_KEYS )
    return 0;

  r.h.ah = 2;
  __dpmi_int(0x18, &r);
  if ( r.h.al & 0x08 )		/* GRPH */
    shift = 0x03;
  else if ( r.h.al & 0x10 )	/* CTRL */
    shift = 0x02;
  else if ( r.h.al & 0x01 )	/* SHIFT */
    shift = 0x01;

  keycode = conv_at98_pchwkeytbl[ah][shift];

  if ( r.h.al & 0x02 ) {	/* CAPS */
    if ( 'a' <= keycode && keycode <= 'z' )
      keycode &= 0xffdf;
    else if ( 'A' <= keycode && keycode <= 'Z' )
      keycode |= 0x0020;
  }

  if ( xflag && 0x36 <= ah && ah <= 0x3f ) {
    if ( shift != 0x03 )
      extkey = 0x0100;
    else
      extkey = 0x0050;
  }

  return keycode + extkey;
}

static int (*_getkey_jmp_tbl[])(void) = {
  getkey_at,
  getkey_98
};

int getkey(void)
{
  return (*_getkey_jmp_tbl[__crt0_mtype >> 4])();
}
