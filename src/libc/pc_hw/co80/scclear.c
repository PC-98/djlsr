/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenClear_at(void)
{
  int i = ScreenRows() * ScreenCols();
  unsigned sp = co80;
  unsigned short a = (ScreenAttrib << 8) | ' ';
  _farsetsel(dossel);
  do {
    _farnspokew(sp, a);
    sp += 2;
  } while (--i);
  if (__crt0_mtype == DOSV) UpdateDOSV(0, 0, 0);
}

void ScreenClear_98(void)
{
  __dpmi_regs r;
  r.h.ah = 0x16;
  r.h.dh = TXA_98AT(ScreenAttrib);
  r.h.dl = ' ';
  __dpmi_int(0x18, &r);
}

static void (*_ScreenClear_jmp_tbl[])(void) = {
  ScreenClear_at,
  ScreenClear_98
};

void ScreenClear(void)
{
  (*_ScreenClear_jmp_tbl[__crt0_mtype >> 4])();
}
