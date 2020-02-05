/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <stdarg.h>
#include <stdio.h>
#include <sys/mono.h>
#include <libc/farptrgs.h>
#include <go32.h>
#include <libc/pc9800.h>

static int initted = 0;
static int bytes98 = 0, cols98 = 0, rows98 = 0;

#define TOPROW 5*160
#define BOTROW 20*160
#define LIN(r,c) (0xb0000 + (r)*160 + (c)*2)

static int ofs=0;

void _mono_clear_at(void)
{
  for (ofs=TOPROW; ofs<BOTROW; ofs += 2)
    _farpokew(_dos_ds, 0xb0000+ofs, 0x0720);
  ofs = TOPROW;
  initted = 1;
}

void _mono_putc_at(int ch)
{
  if (!initted)
    _mono_clear();
  if (ofs >= BOTROW)
  {
    int i;
    for (i=TOPROW; i<BOTROW-160; i+=2)
      _farpokew(_dos_ds, 0xb0000+i, _farpeekw(_dos_ds, 0xb0000+i+160));
    for (; i<BOTROW; i+=2)
      _farpokew(_dos_ds, 0xb0000+i, 0x0720);
    ofs -= 160;
  }
  switch (ch)
  {
  case '\n':
    ofs += 160;
    break;
  case '\r':
    ofs -= ofs % 160;
    break;
  case '\b':
    ofs -= 2;
    break;
  default:
    _farpokew(_dos_ds, 0xb0000+ofs, 0x0700 | (ch & 0xff));
    ofs += 2;
    break;
  }
}

void _mono_printf(const char *fmt, ...)
{
  int i;
  char buf[1000];
  va_list a = 0;
  va_start(a, fmt);
  vsprintf(buf, fmt, a);
  for (i=0; buf[i]; i++)
    _mono_putc(buf[i]);
  va_end(a);
}

void _mono_clear_98(void)
{
  int i;

  cols98 = ScreenCols_98();
  rows98 = ScreenRows_98();
  bytes98 = cols98 * rows98 * 2;
  for (i = 0; i < bytes98; i+=2) {
    _farpokew(_dos_ds, ScreenPrimary + i, 0x0000);
    _farpokew(_dos_ds, ScreenPrimary + i + 0x2000, 0x00e1);
  }
  ofs = 0;
  initted = 1;
}

void _mono_putc_98(int ch)
{
  int i;
  if (!initted)
    _mono_clear_98();
  if (ofs >= bytes98) {
    for (i = 0; i < bytes98-cols98*2; i+=2)
      _farpokew(_dos_ds, ScreenPrimary + i,
        _farpeekw(_dos_ds, ScreenPrimary + i + cols98*2));
    for (; i < bytes98; i+=2)
      _farpokew(_dos_ds, ScreenPrimary + i, 0x0020);
    ofs -= cols98*2;
  }
  switch (ch) {
  case '\n':
    ofs += cols98*2;
    break;
  case '\r':
    ofs -= ofs % (cols98*2);
    break;
  case '\b':
    ofs -= 2;
    break;
  default:
    _farpokew(_dos_ds, ScreenPrimary+ofs, (ch & 0xff));
    ofs += 2;
    break;
  }
}

static void (*__mono_clear_jmp_tbl[])(void) = {
  _mono_clear_at,
  _mono_clear_98
};

static void (*__mono_putc_jmp_tbl[])(int ch) = {
  _mono_putc_at,
  _mono_putc_98
};

void _mono_clear(void)
{
  return (*__mono_clear_jmp_tbl[__crt0_mtype >> 4])();
}

void _mono_putc(int ch)
{
  return (*__mono_putc_jmp_tbl[__crt0_mtype >> 4])(ch);
}
