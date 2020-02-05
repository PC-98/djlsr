/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <bios.h>
#include <dpmi.h>
#include <libc/pc9800.h>

long
biostime_at(int cmd, long newtime)
{
  __dpmi_regs r;
  r.h.ah = cmd;
  r.x.cx = newtime >> 16;
  r.x.dx = newtime & 0xffff;
  __dpmi_int(0x1a, &r);
  return (r.x.cx << 16) | r.x.dx;
}

long biostime_98(int cmd, long newtime)
{
  _bios_timeofday(cmd, &newtime);
  return newtime;
}

static long (*_biostime_jmp_tbl[])(int, long) = {
  biostime_at,
  biostime_98
};

long biostime(int cmd, long newtime)
{
  return (*_biostime_jmp_tbl[__crt0_mtype >> 4])(cmd, newtime);
}
