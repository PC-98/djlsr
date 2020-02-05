/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1996 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>
#include <malloc.h>

void	
ScreenUpdate_at(const void *_virtual_screen)
{
  movedata(_my_ds(), (int)_virtual_screen,
	   dossel, co80,
	   ScreenRows() * ScreenCols() * 2);
  if (__crt0_mtype == DOSV) UpdateDOSV(0, 0, 0);
}

void ScreenUpdate_98(const void *_virtual_screen)
{
  unsigned char *scptr;
  unsigned int i, j;

  j = ScreenRows_98() * ScreenCols_98();
  scptr = malloc(j*2);
  if (!scptr)
    return;

  memcpy(scptr, _virtual_screen, j*2);
  for (i = 0; i < j; i++)
    scptr[i*2+1] = 0;
  movedata(_my_ds(), (unsigned int)scptr,
	   dossel, co80, j*2);
  memcpy(scptr, _virtual_screen, j*2);
  for (i = 0; i < j; i++)
    scptr[i*2] = TXA_98AT(scptr[i*2+1]);
  movedata(_my_ds(), (unsigned int)scptr,
	   dossel, co80+0x2000, j*2);

  free(scptr);
}

static void (*_ScreenUpdate_jmp_tbl[])(const void *_virtual_screen) = {
  ScreenUpdate_at,
  ScreenUpdate_98
};

void ScreenUpdate(const void *_virtual_screen)
{
  (*_ScreenUpdate_jmp_tbl[__crt0_mtype >> 4])(_virtual_screen);
}
