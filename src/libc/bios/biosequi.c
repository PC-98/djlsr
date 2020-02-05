/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <bios.h>
#include <dpmi.h>
#include <libc/pc9800.h>
#include <go32.h>
#include <pc.h>
#include <libc/farptrgs.h>

int
biosequip_at(void)
{
  __dpmi_regs r;
  __dpmi_int(0x11, &r);
  return r.x.ax;
}

int biosequip_98(void)
{
  int flag = 0x4025;

  /* 2nd CCU */
  outportb(0x23f, 0);
  if ( inportb(0x23f) == 0x00 )
    flag |= 0x0400;
  else
    flag |= 0x0200;

  /* FPU */
  if ( _farpeekb(_dos_ds, (__crt0_mtype == PC98H) ? 0xE3FEA : 0xA3FEA) & 0x18 )
    flag |= 0x0002;

  return flag;
}

static int (*_biosequip_jmp_tbl[])(void) = {
  biosequip_at,
  biosequip_98
};

int biosequip(void)
{
  return (*_biosequip_jmp_tbl[__crt0_mtype >> 4])();
}
