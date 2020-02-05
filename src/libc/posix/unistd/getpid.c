/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1996 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <unistd.h>
#include <go32.h>
#include <libc/farptrgs.h>
#include <libc/bss.h>
#include <libc/pc9800.h>
#include <time.h>

static int pid_count = -1;
static pid_t my_pid;

pid_t
getpid(void)
{
  if (pid_count != __bss_count)
  {
    pid_count = __bss_count;
    if ( ISPC98(__crt0_mtype) )
      my_pid = (pid_t)time(NULL);
    else
      my_pid = _farpeekw(_dos_ds, 0x46c);
    my_pid &= 0x3fff;
    my_pid |= 0x1000;
  }

  return my_pid;
}
