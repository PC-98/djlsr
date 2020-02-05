/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <pc.h>
#include <go32.h>
#include <libc/pc9800.h>
#include <sys/farptr.h>

void
sound_at(int freq)
{
  int scale;
  if (freq == 0)
  {
    outportb(0x61, inportb(0x61) & ~3);
    return;
  }
  scale = 1193046 / freq;
  outportb(0x43, 0xb6);
  outportb(0x42, scale & 0xff);
  outportb(0x42, scale >> 8);
  outportb(0x61, inportb(0x61) | 3);
}

void sound_98(int freq)
{
  int scale;
  if (freq == 0) {
    outportb(0x37, 0x07);
    return;
  }
  if ( _farpeekb(_dos_ds, 0x00501) & 0x80 )
    scale = 100 * 0x4e00 / freq;
  else
    scale = 100 * 0x6000 / freq;
  outportb(0x3fdf, 0x76);
  outportb(0x3fdb, scale & 0xff);
  outportb(0x3fdb, scale >> 8);
  outportb(0x37, 0x06);
}

static void (*_sound_jmp_tbl[])(int freq) = {
  sound_at,
  sound_98
};

void sound(int freq)
{
  (*_sound_jmp_tbl[__crt0_mtype >> 4])(freq);
}
