/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenPutString_at(const char *_ch, int _attr, int _x, int _y)
{
  int scptr, chars = 0;
  if ((_x < 0) || (_y < 0))
    return;
  if ((_x >= ScreenCols()) || (_y >= ScreenRows()))
    return;
  _attr = (_attr & 0xff) << 8;
  scptr = co80 + (_x+_y*ScreenCols())*2;
  _farsetsel(dossel);
  while (*_ch)
  {
    _farnspokew(scptr, (*_ch & 0xff)|_attr);
    _ch++;
    scptr += 2;
    chars++;
  }
  if (__crt0_mtype == DOSV) UpdateDOSV(_y, _x, chars);
}

void ScreenPutString_98(const char *_ch, int _attr, int _x, int _y)
{
  unsigned int scptr;
  if ((_x < 0) || (_y < 0))
    return;
  if ((_x >= ScreenCols_98()) || (_y >= ScreenRows_98()))
    return;
  _attr = (unsigned int)TXA_98AT(_attr);
  scptr = (unsigned int)(co80 + 2*(_x + _y*ScreenCols_98()));
  _farsetsel(dossel);
  while (*_ch) {
    _farnspokeb(scptr, (unsigned char)(*_ch));
    _farnspokeb(scptr+0x2000, (unsigned char)_attr);
    _ch++;
    scptr += 2;
  }
}

static void (*_ScreenPutString_jmp_tbl[])(const char *_ch, int _attr, int _x, int _y) = {
  ScreenPutString_at,
  ScreenPutString_98
};

void ScreenPutString(const char *_ch, int _attr, int _x, int _y)
{
  (*_ScreenPutString_jmp_tbl[__crt0_mtype >> 4])(_ch, _attr, _x, _y);
}
