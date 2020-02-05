/* Modified by takas 1997-2000 for libc(AT/98) */
/* Copyright (C) 1996 DJ Delorie, see COPYING.DJ for details */
/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include "sc.h"
#include <libc/pc9800.h>

void	
ScreenUpdateLine_at(const void *_virtual_screen_line, int _row)
{
  movedata(_my_ds(), (int)_virtual_screen_line,
	   dossel, co80 + ScreenCols() * 2 * _row,
	   ScreenCols() * 2);
  if (__crt0_mtype == DOSV) UpdateDOSV(_row, 0, ScreenCols());
}

void ScreenUpdateLine_98(const void *_virtual_screen_line, int _row)
{
  unsigned int i, scptr, col=ScreenCols_98();
  unsigned char *p=(unsigned char *)(unsigned int)_virtual_screen_line;

  scptr = co80 + col*2*_row;
  for (i = 0; i < col; i++, scptr+=2) {
    _farpokew(dossel, scptr, (unsigned short)*p); p++;
    _farpokew(dossel, scptr+0x2000, (unsigned short)TXA_98AT(*p)); p++;
  }
}

static void (*_ScreenUpdateLine_jmp_tbl[])(const void *_virtual_screen_line, int _row) = {
  ScreenUpdateLine_at,
  ScreenUpdateLine_98
};

void ScreenUpdateLine(const void *_virtual_screen_line, int _row)
{
  (*_ScreenUpdateLine_jmp_tbl[__crt0_mtype >> 4])(_virtual_screen_line, _row);
}
