/* Copyright (C) 2002 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <dos.h>
#include <dpmi.h>

#define TICK_PER_DAY (24*60*60*10000/182)

void delay(unsigned msec)
{
  __dpmi_regs r;

  while (msec)
  {
    unsigned usec;
    unsigned msec_this = msec;
    if (msec_this > 4000)
      msec_this = 4000;
    usec = msec_this * 1000;
    r.h.ah = 0x86;
    r.x.cx = usec>>16;
    r.x.dx = usec & 0xffff;
    __dpmi_int(0x15, &r);
    if ((r.x.flags & 1) || (r.h.ah == 0x83))
    {
      /* INT 15 FAILED, so fall back to the Time Of Day Tick */
      unsigned long start_tick;
      unsigned long end_tick;
 
      r.h.ah = 0x00;
      __dpmi_int(0x1A, &r);
 
      start_tick = (r.x.cx << 16) + (r.x.dx & 0xffff);
      end_tick = (msec*182)/10000 + start_tick;
 
      if ((msec%10000/182) > (5000/182)) /* Manual round ticks */
      {
	end_tick++;
      }
      if (end_tick > TICK_PER_DAY)  /* Tick time past midnight */
      {
	/* check for midnight */
	while (r.h.al == 0)
	{
	  r.h.ah = 0x00;
	  __dpmi_int(0x1A, &r);
	  __dpmi_yield();
	}
	end_tick = end_tick - TICK_PER_DAY;
      }
 
      while (((r.x.cx << 16) + (r.x.dx & 0xffffUL)) <= end_tick)
      {
	r.h.ah = 0x00;
	__dpmi_int(0x1A, &r);
	__dpmi_yield();
      }
      msec = 0;  /* waited the required time */
    }
    else
    {
      msec -= msec_this;
    }
  }
}

void delay_98(unsigned msec)
{
  int tmstmp = (__crt0_mtype == PC98H || _farpeekb(_dos_ds, 0x45B) & 0x04);
  unsigned hscan = 0, msec_this, i;

  if ( !tmstmp ) {
    if ( _farpeekb(_dos_ds, 0x501) & 0x08 ) {
      hscan = 3284; /* 32.86kHz interlace */
      if ( _farpeekb(_dos_ds, 0x54C) & 0x20 )
	if ( _farpeekb(_dos_ds, 0x459) & 0x08 )
	  hscan = 5000; /* 50.02kHz non-interlace */
    } else {
      if ( _farpeekb(_dos_ds, 0x54C) & 0x20 ) {
	hscan = 3145;   /* 31.47kHz */
      } else {
	if ( _farpeekb(_dos_ds, 0x53C) & 0x80 )
	  hscan = 2481; /* 24.83kHz PC-9800 CRT */
	else
	  hscan = 1596; /* 15.98kHz PC-8800 CRT */
      }
    }
  }

  while ( msec ) {
    msec_this = (msec > 8000) ? 8000 : msec;
    if ( tmstmp ) {
      i = msec_this * 6 / 5;
      hscan = inportw(0x5e);
      while ( (inportw(0x5e) - hscan) < i );
    } else {
      i = hscan * msec_this / 100;
      while (i--) {
	while ( !(inportb(0x60) & 0x40) );
	while ( inportb(0x60) & 0x40 );
      }
    }
    msec -= msec_this;
  }
}

static void (*_delay_jmp_tbl[])(unsigned) = {
  delay_at,
  delay_98
};

void delay(unsigned msec)
{
  (*_delay_jmp_tbl[__crt0_mtype >> 4])(msec);
}
