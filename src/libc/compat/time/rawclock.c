/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1997 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <time.h>
#include <go32.h>
#include <libc/farptrgs.h>
#include <libc/pc9800.h>
#include <bios.h>

unsigned long
rawclock(void)
{
  if ( ISPC98(__crt0_mtype) ) {
    unsigned long tics;
    _bios_timeofday_98(_TIME_GETCLOCK, &tics);
    return tics;
  }
  return _farpeekl(_dos_ds, 0x46c);
}
