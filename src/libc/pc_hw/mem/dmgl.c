/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <go32.h>
#include <sys/segments.h>

void
_dosmemgetl(unsigned long offset, size_t length, void *buffer)
{
  _movedatal((unsigned)_dos_ds,
	     (unsigned)offset,
	     (unsigned)_my_ds(),
	     (unsigned)buffer,
	     length);
}
