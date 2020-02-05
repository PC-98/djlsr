/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

int	
ScreenCols_at(void)
{
  return _farpeekw(dossel, 0x44a);
}

int ScreenCols_98(void)
{
  __dpmi_regs r;
  if ( __crt0_mtype == PC98H ) {
    r.x.ax = 0x25ff;
    __dpmi_int(0x18, &r);
    return r.h.al - 1;
  } else
    return 80;
}

static int (*_ScreenCols_jmp_tbl[])(void) = {
  ScreenCols_at,
  ScreenCols_98
};

int ScreenCols(void)
{
  return (*_ScreenCols_jmp_tbl[__crt0_mtype >> 4])();
}
