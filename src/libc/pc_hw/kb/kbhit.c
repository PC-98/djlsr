/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <pc.h>
#include <libc/farptrgs.h>
#include <dpmi.h>
#include <go32.h>
#include <libc/pc9800.h>


int
kbhit_at(void)
{
  __dpmi_regs r;

  if (_farpeekw(_dos_ds, 0x41a) == _farpeekw(_dos_ds, 0x41c))
    return 0;

  r.h.ah = 0x11;
  __dpmi_int(0x16, &r);
  if (r.x.flags & 0x40) /* Z */
    return 0;
  return 1;
}

int kbhit_98(void)
{
  __dpmi_regs r;
  r.h.ah = 1;
  __dpmi_int(0x18, &r);
  return r.h.bh;
}

static int (*_kbhit_jmp_tbl[])(void) = {
  kbhit_at,
  kbhit_98
};

int kbhit(void)
{
  return (*_kbhit_jmp_tbl[__crt0_mtype >> 4])();
}
