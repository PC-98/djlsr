/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenPutChar_at(int _ch, int _attr, int _x, int _y)
{
  if ((_x < 0) || (_y < 0))
    return;
  if ((_x >= ScreenCols()) || (_y >= ScreenRows()))
    return;
  _ch &= 0xff;
  _attr = (_attr & 0xff) << 8;
  _farpokew(dossel, co80 + (_x+_y*ScreenCols())*2, _ch|_attr);
  if (__crt0_mtype == DOSV) UpdateDOSV(_y, _x, 1);
}

void ScreenPutChar_98(int _ch, int _attr, int _x, int _y )
{
  unsigned int scptr;

  if ((_x < 0) || (_y < 0))
    return;
  if ((_x >= ScreenCols_98()) || (_y >= ScreenRows_98()))
    return;
  _attr = (unsigned int)TXA_98AT(_attr);
  scptr = (unsigned int)(co80 + 2*(_x + _y*ScreenCols_98()));
  _farpokeb(dossel, scptr, (unsigned char)_ch);
  _farpokeb(dossel, scptr+0x2000, (unsigned char)_attr);
}

static void (*_ScreenPutChar_jmp_tbl[])(int _ch, int _attr, int _x, int _y) = {
  ScreenPutChar_at,
  ScreenPutChar_98
};

void ScreenPutChar(int _ch, int _attr, int _x, int _y)
{
  (*_ScreenPutChar_jmp_tbl[__crt0_mtype >> 4])(_ch, _attr, _x, _y);
}
