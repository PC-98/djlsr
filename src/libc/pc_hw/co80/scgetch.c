/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1996 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenGetChar_at(int *_ch, int *_attr, int _x, int _y)
{
  int s;

  if ((_x < 0) || (_y < 0))
    return;
  if ((_x >= ScreenCols()) || (_y >= ScreenRows()))
    return;
  s = _farpeekw(dossel, co80 + (_x+_y*ScreenCols())*2);
  if (_ch)
    *_ch = s & 0xff;
  if (_attr)
    *_attr = (s >> 8) & 0xff;
}

void ScreenGetChar_98(int *_ch, int *_attr, int _x, int _y)
{
  int s;

  if ((_x < 0) || (_y < 0))
    return;
  if ((_x >= ScreenCols()) || (_y >= ScreenRows()))
    return;
  s = _farpeekw(dossel, co80 + (_x+_y*ScreenCols())*2);
  if (_ch)
    *_ch = s & 0xff;
  s = _farpeekw(dossel, co80 + (_x+_y*ScreenCols())*2 + 0x2000);
  if (_attr)
    *_attr = TXA_AT98(s);
}

static void (*_ScreenGetChar_jmp_tbl[])(int *_ch, int *_attr, int _x, int _y) = {
  ScreenGetChar_at,
  ScreenGetChar_98
};

void ScreenGetChar(int *_ch, int *_attr, int _x, int _y)
{
  return (*_ScreenGetChar_jmp_tbl[__crt0_mtype >> 4])(_ch, _attr, _x, _y);
}
