/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <go32.h>
#include <libc/farptrgs.h>
#include <pc.h>
#include <libc/pc9800.h>

int
ScreenMode_at(void)
{
  return _farpeekb(_dos_ds, 0x449);
}

int ScreenMode_98(void)
{
  if (_farpeekb(_dos_ds, 0x501) & 0x08)
    return 0x12; /* hireso */
  return 0x03;  /* normal */
}

static int (*_ScreenMode_jmp_tbl[])(void) = {
  ScreenMode_at,
  ScreenMode_98
};

int ScreenMode(void)
{
  return (*_ScreenMode_jmp_tbl[__crt0_mtype >> 4])();
}
