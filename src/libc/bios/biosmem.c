/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <bios.h>
#include <dpmi.h>
#include <libc/pc9800.h>

int
biosmemory_at(void)
{
  __dpmi_regs r;
  __dpmi_int(0x12, &r);
  return r.x.ax;
}

int biosmemory_98(void)
{
  __dpmi_regs r;
  r.h.cl = 0x81;
  r.x.ax = 0x0000;
  __dpmi_int(0xdc, &r);
  return r.h.al * 128;
}

static int (*_biosmemory_jmp_tbl[])(void) = {
  biosmemory_at,
  biosmemory_98
};

int biosmemory(void)
{
  return (*_biosmemory_jmp_tbl[__crt0_mtype >> 4])();
}
