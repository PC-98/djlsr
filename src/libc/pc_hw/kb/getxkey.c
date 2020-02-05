/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <pc.h>
#include <dpmi.h>
#include <libc/pc9800.h>

int
getxkey_at(void)
{
  __dpmi_regs r;
  r.h.ah = 0x10;
  __dpmi_int(0x16, &r);

  if (r.h.al == 0x00)
    return 0x0100 | r.h.ah;
  if (r.h.al == 0xe0 && r.h.ah != 0)
    return 0x0200 | r.h.ah;
  return r.h.al;
}

int getxkey_98(void)
{
  __dpmi_regs r;
  r.h.ah = 0x00;
  __dpmi_int(0x18, &r);
  return conv_at98_pchwkey(r.h.ah, 1);
}

static int (*_getxkey_jmp_tbl[])(void) = {
  getxkey_at,
  getxkey_98
};

int getxkey(void)
{
  return (*_getxkey_jmp_tbl[__crt0_mtype >> 4])();
}
