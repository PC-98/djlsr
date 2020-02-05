/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenGetCursor_at(int *_row, int *_col)
{
  __dpmi_regs r;
  r.h.ah = 3;
  r.h.bh = 0;
  __dpmi_int(0x10, &r);
  *_row = r.h.dh;
  *_col = r.h.dl;
}

void ScreenGetCursor_98(int *_row, int *_col)
{
  *_row = _farpeekb(dossel, 0x710);
  *_col = _farpeekb(dossel, 0x71C);
}

static void (*_ScreenGetCursor_jmp_tbl[])(int *row, int *col) = {
  ScreenGetCursor_at,
  ScreenGetCursor_98
};

void ScreenGetCursor(int *row, int *col)
{
  return (*_ScreenGetCursor_jmp_tbl[__crt0_mtype >> 4])(row, col);
}
