/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

int	
ScreenRows_at(void)
{
  return _farpeekb(dossel, 0x484) + 1;
}

int ScreenRows_98(void)
{
  __dpmi_regs r;
  if ( __crt0_mtype == PC98H ) {
    r.x.ax = 0x25ff;
    __dpmi_int(0x18, &r);
    return r.h.ah - 1;
  } else
    return _farpeekb(dossel, 0x712) + 1;
}

static int (*_ScreenRows_jmp_tbl[])(void) = {
  ScreenRows_at,
  ScreenRows_98
};

int ScreenRows(void)
{
  return (*_ScreenRows_jmp_tbl[__crt0_mtype >> 4])();
}
