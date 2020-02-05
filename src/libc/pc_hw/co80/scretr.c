/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenRetrieve_at(void *_virtual_screen)
{
  movedata(dossel, co80,
	   _my_ds(), (int)_virtual_screen,
	   ScreenRows() * ScreenCols() * 2);
}

void ScreenRetrieve_98(void *_virtual_screen)
{
  unsigned char *vscptr = _virtual_screen;
  unsigned int i, j, scptr;

  j = ScreenRows_98() * ScreenCols_98();
  movedata(dossel, co80,
	   _my_ds(), (int)_virtual_screen, j*2);

  scptr = co80 + 0x2000;
  for (i = 0; i < j; i++)
    vscptr[i*2+1] = TXA_AT98(_farpeekb(dossel, scptr+i*2));
}

static void (*_ScreenRetrieve_jmp_tbl[])(void *virtual_screen) = {
  ScreenRetrieve_at,
  ScreenRetrieve_98
};

void ScreenRetrieve(void *_virtual_screen)
{
  return (*_ScreenRetrieve_jmp_tbl[__crt0_mtype >> 4])(_virtual_screen);
}
