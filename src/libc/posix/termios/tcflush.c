/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 2015 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 2002 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 2001 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 2000 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1999 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1996 DJ Delorie, see COPYING.DJ for details */
#include <errno.h>
#include <io.h>
#include <termios.h>
#include <libc/bss.h>
#include <libc/ttyprvt.h>
#include <libc/farptrgs.h>
#include <libc/getdinfo.h>
#include <dpmi.h>
#include <go32.h>
#include <libc/pc9800.h>
#include <bios.h>

static int
getkey_nowait (void)
{
  /* If the head and tail of the keyboard buffer are the same, the
     buffer is empty.  */
  if ( ISPCAT(__crt0_mtype)
       && _farpeekw(_dos_ds, 0x41a) == _farpeekw(_dos_ds, 0x41c) )
    return 0;
  if ( ISPC98(__crt0_mtype)
       && _farpeekw(_dos_ds, 0x524) == _farpeekw(_dos_ds, 0x526) )
    return 0;

  if ( !bioskey(_NKEYBRD_READY) )
    return 0;

  return bioskey(_NKEYBRD_READ);
}

int
tcflush (int handle, int which)
{
  short devmod;

  /* initialize */
  if (__libc_termios_hook_common_count != __bss_count)
    __libc_termios_init ();

  /* check handle whether valid or not */
  devmod = _get_dev_info (handle);
  if (devmod == -1)
    return -1;

  /* check console */
  if (! (devmod & _DEV_CDEV) || ! (devmod & (_DEV_STDIN|_DEV_STDOUT)))
    {
      errno = ENOTTY;
      return -1;
    }

  /* flush ... */
  switch (which)
    {
    case TCIFLUSH:
    case TCIOFLUSH:
      /* clear input queue */
      if (__libc_tty_p->t_count != 0)
	{
	  __libc_tty_p->t_count = 0;
	  __libc_tty_p->t_rpos = __libc_tty_p->t_top;
	  __libc_tty_p->t_wpos = __libc_tty_p->t_top;
	}
      /* now empty any keystrokes left in the keyboard buffer */
      while (getkey_nowait ())
	;
      break;
    case TCOFLUSH:
      /* nothing */
      break;
    default:
      errno = EINVAL;
      return -1;
    }

  return 0;
}
