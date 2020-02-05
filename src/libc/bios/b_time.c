/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */

#include <bios.h>
#include <dpmi.h>
#include <libc/pc9800.h>

unsigned
_bios_timeofday_at(unsigned _cmd, unsigned long *_timeval)
{
  __dpmi_regs r;

  r.h.ah = _cmd;
  if ( _cmd == _TIME_SETCLOCK )
  {
    r.x.cx = *_timeval >> 16;
    r.x.dx = *_timeval & 0xffff;
  }
  __dpmi_int(0x1a, &r);
  if ( _cmd == _TIME_GETCLOCK )
    *_timeval = (r.x.cx << 16) | r.x.dx;
  return r.h.al;
}

unsigned _bios_timeofday_98(unsigned _cmd, unsigned long *_timeval)
{
  static unsigned long base_tics = 0;
  static unsigned int  base_time = 0, last_time = 0;
  unsigned int this_time = 0, midnight = 0;
  __dpmi_regs r;

  r.h.ah = 0x2C;
  __dpmi_int(0x21, &r);
  this_time = ((r.h.ch*60+r.h.cl)*60+r.h.dh)*100+r.h.dl;

  if ( this_time < last_time ) { /* midnight passed */
    base_tics = 0;
    base_time = 0;
    midnight  = 1;
  }
  last_time = this_time;

  if ( _cmd == _TIME_SETCLOCK ) { /* SET */
    base_tics = *_timeval;
    base_time = this_time;
  } else                          /* GET */
    *_timeval = (this_time-base_time)*91/500 + base_tics;

  return midnight;
}

static unsigned (*__bios_timeofday_jmp_tbl[])(unsigned, unsigned long *) = {
  _bios_timeofday_at,
  _bios_timeofday_98
};

unsigned _bios_timeofday(unsigned _cmd, unsigned long *_timeval)
{
  return (*__bios_timeofday_jmp_tbl[__crt0_mtype >> 4])(_cmd, _timeval);
}
