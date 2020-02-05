/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <dos.h>
#include "sc.h"
#include <libc/pc9800.h>

void
ScreenVisualBell_at(void)
{
  int j = ScreenRows() * ScreenCols();
  int _nblinks = 2;
  _farsetsel(dossel);
  while (_nblinks--)
  {
    unsigned sp = co80;
    int i = j;
    do {
      _farnspokew(sp, _farnspeekw(sp) ^ 0x7f00);
      sp += 2;
    } while (--i);
    if (__crt0_mtype == DOSV) UpdateDOSV(0, 0, 0);
    delay(100);
  }
}

void ScreenVisualBell_98(void)
{
  int j = ScreenRows() * ScreenCols();
  int _nblinks = 2;
  _farsetsel(dossel);
  while (_nblinks--)
  {
    unsigned sp = co80 + 0x2000;
    int i = j;
    do {
      _farnspokew(sp, _farnspeekw(sp) ^ 0x0004);
      sp += 2;
    } while (--i);
    delay(100);
  }
}

static void (*_ScreenVisualBell_jmp_tbl[])(void) = {
  ScreenVisualBell_at,
  ScreenVisualBell_98
};

void ScreenVisualBell(void)
{
  (*_ScreenVisualBell_jmp_tbl[__crt0_mtype >> 4])();
}
