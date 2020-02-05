/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <bios.h>
#include <dpmi.h>
#include <libc/pc9800.h>
#include <stdlib.h>

int bioscom_at(int cmd, char data, int port)
{
  __dpmi_regs r;
  r.h.ah = cmd;
  r.h.al = data;
  r.x.dx = port;
  __dpmi_int(0x14, &r);
  return r.x.ax;
}

static int com_segment = 0;
static int com_selector = 0;
static void free_com_buffer(void);
static void alloc_com_buffer(void);

int bioscom_98(int cmd, char data, int port)
{
/*[エミュレーションに関する問題点]*****************************
    ・(cmd=0,3) 時のステータス(bit0...16)は完全互換ではない
    ・(cmd=1,2) 時のステータス(bit8...16)は PC9800 BIOS の AH
    ・2ndCCU には対応していない
 **************************************************************/
  static int init = 0;
  __dpmi_regs r;

  if ( port )
    return 0;

  if ( !init ) {
    init = 1;
    alloc_com_buffer();
    if ( cmd != 0x00 )
      bioscom_98(0x00, 0xe3, 0x00);
  }

  switch(cmd){
  case 0x00:	/* initialize */
    r.h.ah = 0x00;
    r.h.al = (data & 0xe0) >> 5; /* 0x000 は 110 ではなく 75 となる */
    r.x.bx = 0x0000;
    r.h.ch = conv_98at_com_mode(data);
    r.h.cl = 0x27;
    r.x.dx = 250;
    r.x.di = 0x0000;
    r.x.es = com_segment;
    __dpmi_int(0x19, &r);
  case 0x03:	/* get status */
    r.h.ah = 0x06;
    __dpmi_int(0x19, &r);
    return conv_at98_com_status(r.x.cx);
  case 0x01:	/* write */
    r.h.ah = 0x03;
    r.h.al = data;
    r.h.cl = 0x40;
    __dpmi_int(0x19, &r);
    return (r.h.ah << 8) | data;
  case 0x02:	/* read */
    r.h.ah = 0x04;
    __dpmi_int(0x19, &r);
    return (r.h.ah << 8) | r.h.ch;
  }
  return 0;
}

static void free_com_buffer(void)
{
  __dpmi_free_dos_memory(com_selector);
  com_segment = com_selector = 0;
}

static void alloc_com_buffer(void)
{
  if (com_segment)
    return;
  com_segment = __dpmi_allocate_dos_memory((504+15)/16, &com_selector);
  if (com_segment == -1) {
    com_segment = 0;
    return;
  }
  atexit(free_com_buffer);
}

unsigned char conv_98at_com_mode(int data)
{
  unsigned char mode = 0x02;

  mode |= (data & 0x03) << 2;		/* bits/character */
  mode |= (data & 0x18) << 1;		/* parity */
  mode |= (data & 0x40) ? 0xC0 : 0x40;	/* stop bit(s)*/

  return mode;
}

int conv_at98_com_status(int cx)
{
  int status = 0;

  if ( !(cx & 0x0040) )	/* CS */
    status |= 0x0010;
  if ( cx & 0x8000 )	/* DSR */
    status |= 0x0020;
  if ( !(cx & 0x0020) )	/* CD */
    status |= 0x0080;
  if ( cx & 0x0200 )	/* RRDY */
    status |= 0x0100;
  if ( cx & 0x1000 )	/* OE */
    status |= 0x0200;
  if ( cx & 0x0800 )	/* PE */
    status |= 0x0400;
  if ( cx & 0x2000 )	/* FE */
    status |= 0x0800;
  if ( cx & 0x4000 )	/* BD */
    status |= 0x1000;
  if ( cx & 0x0400 )	/* TE */
    status |= 0x2000;
  if ( cx & 0x0100 )	/* TRDY */
    status |= 0x4000;

  return status;
}

static int (*_bioscom_jmp_tbl[])(int,char,int) = {
  bioscom_at,
  bioscom_98
};

int bioscom(int cmd,char data,int port)
{
  return (*_bioscom_jmp_tbl[__crt0_mtype >> 4])(cmd, data, port);
}
