/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenSetCursor_at(int _row, int _col)
{
  __dpmi_regs r;
  r.h.ah = 2;
  r.h.bh = 0;
  r.h.dh = _row;
  r.h.dl = _col;
  __dpmi_int(0x10, &r);
}

void ScreenSetCursor_98(int _row, int _col)
{
  __dpmi_regs r;
  r.h.ah = 0x03;
  r.h.cl = 0x10;
  r.h.dh = _row;
  r.h.dl = _col;
  __dpmi_int(0xDC, &r);
}

static void (*_ScreenSetCursor_jmp_tbl[])(int row, int col) = {
  ScreenSetCursor_at,
  ScreenSetCursor_98
};

void ScreenSetCursor(int row, int col)
{
  return (*_ScreenSetCursor_jmp_tbl[__crt0_mtype >> 4])(row, col);
}
