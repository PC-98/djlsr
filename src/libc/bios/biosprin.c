/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <bios.h>
#include <dpmi.h>
#include <libc/pc9800.h>

int
biosprint_at(int cmd, int byte, int port)
{
  __dpmi_regs r;
  r.h.ah = cmd;
  r.h.al = byte;
  r.x.dx = port;
  __dpmi_int(0x17, &r);
  return r.h.ah;
}

int biosprint_98(int cmd, int byte, int port)
{
  __dpmi_regs r;

  if ( port )
    return 0;

  switch ( cmd ) {
  case 0: /* send data */
    r.h.ah = 0x11;
    r.h.al = byte;
    __dpmi_int(0x1A, &r);
    break;
  case 1: /* initialize */
    r.h.ah = 0x10;
    __dpmi_int(0x1A, &r);
    break;
  default: /* get status */
    r.h.ah = 0x12;
    __dpmi_int(0x1A, &r);
  }

  if( r.h.al == 0x02 )  /* TIME OUT */
    return 0x11;
  if ( r.h.al == 0x00 ) /* BUSY */
    return 0x10;

  return 0x90;
}

static int (*_biosprint_jmp_tbl[])(int cmd, int byte, int port) = {
  biosprint_at,
  biosprint_98
};

int biosprint(int cmd, int byte, int port)
{
  return (*_biosprint_jmp_tbl[__crt0_mtype >> 4])(cmd, byte, port);
}
