/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1996 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <time.h>
#include <go32.h>
#include <libc/farptrgs.h>
#include <libc/bss.h>
#include <libc/pc9800.h>
#include <pc.h>

static int clock_bss = -1;

clock_t
clock_at(void)
{
  static clock_t base = 0;
  static unsigned long last_tics = 0;
  unsigned long tics, otics;
  clock_t rv;

  if (clock_bss != __bss_count)
  {
    clock_bss = __bss_count;
    last_tics = 0;
    base = 0;
  }

  /* Make sure the numbers we get are consistent */
  do {
    otics = _farpeekl(_dos_ds, 0x46c);
    tics = _farpeekl(_dos_ds, 0x46c);
  } while (otics != tics);

  rv = tics;

  if (base == 0L)
    base = rv;

  if (last_tics > tics) /* midnight happened */
    base -= 0x1800b0;

  last_tics = tics;

  /* return relative time */
  /* The 5 matches the scale for CLOCKS_PER_SEC */
  return (rv - base) * 5;
}

clock_t clock_98( void )
{
/*[エミュレーションに関する問題点]*****************************
    ・タイムスタンパ低分解能使用	 307200/256Hz = 1200Hz
    ・カレンダも使用するので時間がかかる(T_T)
 **************************************************************/
  static time_t   base_sec = 0;
  static unsigned base_tic = 0;
  time_t   rv_sec;
  unsigned rv_tic, diff_sec, diff_tic;

  if (clock_bss != __bss_count) {
    clock_bss = __bss_count;
    base_sec = 0;
    base_tic = 0;
  }

  rv_sec = time(NULL);
  rv_tic = inportw(0x5E);
  if (base_sec == 0L) {
    base_sec = rv_sec;
    base_tic = rv_tic;
  }

  diff_sec = rv_sec - base_sec;
  if ( __crt0_mtype == PC98H || _farpeekb(_dos_ds, 0x45B) & 0x04 ) {
    diff_tic = rv_tic - base_tic;
    if ( rv_tic < base_tic )
      diff_tic += 0x10000;
    if ( diff_tic > 0x8000 )
      diff_sec -= 8;
    else
      diff_sec += 8;
    diff_tic += (unsigned)(diff_sec * 1200 / 0x10000) * 0x10000;
    return (clock_t)(diff_tic*CLOCKS_PER_SEC/1200);
  } else
    return (clock_t)(diff_sec*CLOCKS_PER_SEC);
}

static clock_t (*_clock_jmp_tbl[])(void) = {
  clock_at,
  clock_98
};

clock_t clock(void)
{
  return (*_clock_jmp_tbl[__crt0_mtype >> 4])();
}
