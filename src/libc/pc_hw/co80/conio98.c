/* Modified by takas 1997-2000 for libc(AT/98) */

/***
 * PC-AT with DOS/V
 **/

void insline_dv(void)
{
  int row, col;
  __dpmi_regs r;

  ScreenGetCursor(&row, &col);
  if ( txinfo.wintop-1 <= row && row < txinfo.winbottom-1 ) {
    r.x.ax = 0x0701;
    r.h.ch = row;
    r.h.cl = txinfo.winleft - 1;
    r.h.dh = txinfo.winbottom - 1;
    r.h.dl = txinfo.winright - 1;
    r.h.bh = ScreenAttrib;
    __dpmi_int(0x10, &r);
  } else if ( row == txinfo.winbottom-1 )
    fillrow(row, txinfo.winleft-1, txinfo.winright-1, ' '+(ScreenAttrib<<8));
}

void delline_dv(void)
{
  int row, col;
  __dpmi_regs r;

  ScreenGetCursor(&row, &col);
  if ( txinfo.wintop-1 <= row && row < txinfo.winbottom-1 ) {
    r.x.ax = 0x0601;
    r.h.ch = row;
    r.h.cl = txinfo.winleft - 1;
    r.h.dh = txinfo.winbottom - 1;
    r.h.dl = txinfo.winright - 1;
    r.h.bh = ScreenAttrib;
    __dpmi_int(0x10, &r);
  } else if ( row == txinfo.winbottom-1 )
    fillrow(row, txinfo.winleft-1, txinfo.winright-1, ' '+(ScreenAttrib<<8));
}

int cputs_dv(const char *s)
{
  int row, col, c, left = txinfo.winleft-1, vr, vc, changed = 0;
  const unsigned char *ss = (const unsigned char *)s;
  short sa = ScreenAttrib << 8, q, *viaddr;
  ScreenGetCursor(&row, &col); vr = row; vc = col;
  viaddr = (short *)VIDADDR(row,col);

  while ((c = *ss++)) {
    switch ( c ) {
    case '\n':
      row++;
      viaddr += txinfo.screenwidth;
      if ( changed ) {
	UpdateDOSV(vr, vc, changed);
	vr = row; vc = col; changed = 0;
      }
      break;
    case '\r':
      col = left;
      viaddr = (short *)VIDADDR(row,col);
      if ( changed ) {
	UpdateDOSV(vr, vc, changed);
	vr = row; vc = col; changed = 0;
      }
      break;
    case '\b':
      if (col > left) {
	col--;
	viaddr--;
      } else if (row > txinfo.wintop-1) {
	row--;
	col = txinfo.winright-1;
	viaddr = (short *)VIDADDR(row,col);
      }
      if ( changed ) {
	UpdateDOSV(vr, vc, changed);
	vr = row; vc = col; changed = 0;
      }
      break;
    case 0x07:
      bell();
      break;
    default:
      q = c | sa;
      dosmemput(&q, 2, (int)viaddr);
      viaddr++;
      col++;
      changed++;
      break;
    }

    if (col >= txinfo.winright) {
      col = left;
      row++;
      viaddr = (short *)VIDADDR(row, col);
    }
    if (row >= txinfo.winbottom) {
      if ( changed )
	UpdateDOSV(vr, vc, changed);
      if (_wscroll) {
	ScreenSetCursor(txinfo.wintop-1, left);
	delline();
      }
      row--;
      viaddr -= txinfo.screenwidth;
      vr = row; vc = col; changed = 0;
    }
  }

  if ( changed )
    UpdateDOSV(vr, vc, changed);
  ScreenSetCursor(row, col);
  txinfo.cury = row - txinfo.wintop + 2;
  txinfo.curx = col - txinfo.winleft + 2;
  return(*(--ss));
}

void UpdateDOSV(int row, int col, int chars)
{
  __dpmi_regs r;

  r.h.ah = 0xff;
  r.x.es = ScreenVirtualSegment;
  r.x.di = ScreenVirtualOffset;
  if ( chars > 0 ) {
    r.x.cx  = chars;
    r.x.di += (row*txinfo.screenwidth+col)*2;
  } else
    r.x.cx  = txinfo.screenwidth * txinfo.screenheight;
  __dpmi_int(0x10, &r);
}

/***
 * PC-9800 & PC-H98
 **/

int puttext_98(int c, int r, int c2, int r2, void *buf)
{
  unsigned short *abuf, *tbuf;
  unsigned char *ap, *tp;
  int i, j, dc = c2-c+1;

  if ( c <= 0 || r <= 0 || c > c2 || r > r2 )
    return 0;

  j = dc * (r2-r+1);
  i = j * 2;
  abuf = (unsigned short *)malloc(i);
  tbuf = (unsigned short *)malloc(i);
  if ( !abuf || !tbuf ) {
    if ( abuf ) free(abuf);
    if ( tbuf ) free(tbuf);
    return 0;
  }

  memcpy(abuf, buf, i);
  memcpy(tbuf, buf, i);
  for(i = 0; i < j; i++) {
    abuf[i]  = TXA_98AT(abuf[i] >> 8);
    tbuf[i] &= 0x00ff;
  }

  ap = (unsigned char *)abuf;
  tp = (unsigned char *)tbuf;
  dc *= 2;
  r--, r2--, c--, c2--;
  for (; r <= r2; r++) {
    dosmemput(tp, dc, VIDADDR(r, c));
    dosmemput(ap, dc, VIDADDR(r, c) + 0x2000);
    ap += dc;
    tp += dc;
  }
  free(abuf);
  free(tbuf);
  return 1;
}

int _conio_gettext_98(int c, int r, int c2, int r2, void *buf)
{
  unsigned short *abuf, *tbuf;
  unsigned char *ap, *tp, *wp;
  int i, j, dc = c2-c+1;

  if ( c <= 0 || r <= 0 || c > c2 || r > r2 )
    return 0;

  j = dc * (r2-r+1);
  i = j * 2;
  abuf = (unsigned short *)malloc(i);
  tbuf = (unsigned short *)malloc(i);
  if ( !abuf || !tbuf ) {
    if ( abuf ) free(abuf);
    if ( tbuf ) free(tbuf);
    return 0;
  }

  ap = (unsigned char *)abuf;
  tp = (unsigned char *)tbuf;
  wp = buf;
  dc *= 2;
  r--, r2--, c--, c2--;
  for (; r <= r2; r++) {
    dosmemget(VIDADDR(r, c), dc, tp);
    dosmemget(VIDADDR(r, c)+0x2000, dc, ap);
    ap += dc;
    tp += dc;
  }
  for(i = 0; i < j; i++) {
    wp[i*2]   = (unsigned char)tbuf[i];
    wp[i*2+1] = TXA_AT98(abuf[i]);
  }
  free(abuf);
  free(tbuf);
  return 1;
}

void textmode_98(int mode)
{
  gppconio_init();
}

void _setcursortype_98(int type)
{
  __dpmi_regs r;
  switch ( type ) {
  case _NOCURSOR:
    r.h.ah = 0x12;
    __dpmi_int(0x18, &r);
    break;
  default:	/* _SOLIDCURSOR: _NORMALCURSOR: */
    r.x.ax = 0x1000;
    __dpmi_int(0x18, &r);
    r.h.ah = 0x11;
    __dpmi_int(0x18, &r);
    break;
  }
}

static void fillrow_98(int row, int left, int right, int fill)
{
  int col;
  unsigned short filler[right-left+1], cfill;

  cfill = fill & 0x00ff;
  for (col = left; col <= right; col++)
    filler[col-left] = cfill;
  dosmemput(filler, (right-left+1)*2, VIDADDR(row, left));
  cfill = fill >> 8; cfill = (unsigned short)TXA_98AT(cfill);
  for (col = left; col <= right; col++)
    filler[col-left] = cfill;
  dosmemput(filler, (right-left+1)*2, VIDADDR(row, left)+0x2000);
}

void clrscr_98(void)
{
  unsigned short tfiller[txinfo.winright - txinfo.winleft + 1];
  unsigned short afiller[txinfo.winright - txinfo.winleft + 1];
  unsigned short cfill = (unsigned short)TXA_98AT(ScreenAttrib);
  int row, col;

  for (col=0; col < txinfo.winright - txinfo.winleft + 1; col++) {
    tfiller[col] = (unsigned short)' ';
    afiller[col] = cfill;
  }
  for (row=txinfo.wintop-1; row < txinfo.winbottom; row++) {
    dosmemput(tfiller, (txinfo.winright - txinfo.winleft + 1)*2,
	      VIDADDR(row, txinfo.winleft - 1));
    dosmemput(afiller, (txinfo.winright - txinfo.winleft + 1)*2,
	      VIDADDR(row, txinfo.winleft - 1)+0x2000);
  }
  gotoxy(1, 1);
}

void insline_98(void)
{
  int row, col, left, right, nbytes, bot, fill;
  ScreenGetCursor(&row, &col);
  left = txinfo.winleft - 1;
  right = txinfo.winright - 1;
  nbytes = (right-left+1)*2;
  bot = txinfo.winbottom-1;
  fill = ' ' | (ScreenAttrib << 8);
  while (bot > row) {
    movedata(_dos_ds, VIDADDR(bot-1, left),
	     _dos_ds, VIDADDR(bot, left), nbytes);
    movedata(_dos_ds, VIDADDR(bot-1, left)+0x2000,
	     _dos_ds, VIDADDR(bot, left)+0x2000, nbytes);
    bot--;
  }
  fillrow_98(row,left,right,fill);
}

void delline_98(void)
{
  int row, col, left, right, nbytes, bot, fill;
  ScreenGetCursor(&row, &col);
  left = txinfo.winleft - 1;
  right = txinfo.winright - 1;
  nbytes = (right-left+1)*2;
  bot = txinfo.winbottom-1;
  fill = ' ' | (ScreenAttrib << 8);
  while (row < bot) {
    movedata(_dos_ds, VIDADDR(row+1, left),
	     _dos_ds, VIDADDR(row, left), nbytes);
    movedata(_dos_ds, VIDADDR(row+1, left)+0x2000,
	     _dos_ds, VIDADDR(row, left)+0x2000, nbytes);
    row++;
  }
  fillrow_98(bot,left,right,fill);
}

int cputs_98(const char *s)
{
  int row, col;
  const unsigned char *ss = (const unsigned char *)s;
  unsigned short *viaddr;
  unsigned short c, sa = TXA_98AT(ScreenAttrib);
  ScreenGetCursor(&row, &col);
  viaddr = (unsigned short *)VIDADDR(row, col);

  while ((c = *ss++)) {
    switch ( c ) {
    case '\n':
      row++;
      viaddr += txinfo.screenwidth;
      break;
    case '\r':
      col = txinfo.winleft - 1;
      viaddr = (unsigned short *)VIDADDR(row,col);
      break;
    case '\b':
      if (col > txinfo.winleft-1) {
	col--;
	viaddr--;
      } else if (row > txinfo.wintop-1) {
	row--;
	col = txinfo.winright-1;
	viaddr = (unsigned short *)VIDADDR(row,col);
      }
      break;
    case 0x07:
      bell();
      break;
    default:
      dosmemput(&c,  2, (int)viaddr);
      dosmemput(&sa, 2, (int)viaddr+0x2000);
      viaddr++;
      col++;
    }

    if (col >= txinfo.winright) {
      col = txinfo.winleft - 1;
      row++;
      viaddr = (unsigned short *)VIDADDR(row,col);
    }
    if (row >= txinfo.winbottom) {
      ScreenSetCursor(txinfo.wintop-1, txinfo.winleft-1);
      delline();
      row--;
      viaddr -= txinfo.screenwidth;
    }
  }

  ScreenSetCursor(row, col);
  txinfo.cury = row - txinfo.wintop + 2;
  txinfo.curx = col - txinfo.winleft + 2;
  return(*(--ss));
}

static void bell_98(void)
{
  __dpmi_regs r;
  r.h.ah = 0x07;
  __dpmi_int(0x29, &r);
}

static int get_screenattrib_98(void)
{
  int row, col;
  ScreenGetCursor(&row, &col);
  return TXA_AT98(_farpeekb(_dos_ds, VIDADDR(row,col)+0x2000));
}

void _set_screen_lines_98(int nlines)
{
  /* Not implemented yet */
}

void blinkvideo_98(void)
{
  /* PC-AT: Set intensity/blinking bit to BLINKING. */
  /* PC-98: Set ATR4 to VL */
  outportb(0x68, 0x00);
}

void intensevideo_98(void)
{
  /* PC-AT: Set intensity/blinking bit to INTENSE (bright background). */
  /* PC-98: Set ATR4 to BG */
  outportb(0x68, 0x01);
}

/***
 * Jump Table
 **/

static int (*_puttext_jmp_tbl[])(int c, int r, int c2, int r2, void *buf) = {
  puttext_at,
  puttext_98
};

static int (*_gettext_jmp_tbl[])(int c, int r, int c2, int r2, void *buf) = {
  _conio_gettext_at,
  _conio_gettext_98
};

static void (*_textmode_jmp_tbl[])(int mode) = {
  textmode_at,
  textmode_98
};

static void (*_setcursortype_jmp_tbl[])(int type) = {
  _setcursortype_at,
  _setcursortype_98,
};

static void (*_fillrow_jmp_tbl[])(int row, int left, int right, int fill) = {
  fillrow_at,
  fillrow_98
};

static void (*_clrscr_jmp_tbl[])(void) = {
  clrscr_at,
  clrscr_98
};

static void (*_insline_jmp_tbl[])(void) = {
  insline_at,
  insline_98
};

static void (*_delline_jmp_tbl[])(void) = {
  delline_at,
  delline_98
};

static void (*_bell_jmp_tbl[])(void) = {
  bell_at,
  bell_98
};

static int (*_get_screenattrib_jmp_tbl[])(void) = {
  get_screenattrib_at,
  get_screenattrib_98
};

static int (*_cputs_jmp_tbl[])(const char *s) = {
  cputs_at,
  cputs_98
};

static void (*_set_screen_lines_jmp_tbl[])(int nlines) = {
  _set_screen_lines_at,
  _set_screen_lines_98
};

static void (*_blinkvideo_jmp_tbl[])(void) = {
  blinkvideo_at,
  blinkvideo_98
};

static void (*_intensevideo_jmp_tbl[])(void) = {
  intensevideo_at,
  intensevideo_98
};

int puttext(int c, int r, int c2, int r2, void *buf)
{
  return (*_puttext_jmp_tbl[__crt0_mtype >> 4])(c, r, c2, r2, buf);
}

int _conio_gettext(int c, int r, int c2, int r2, void *buf)
{
  return (*_gettext_jmp_tbl[__crt0_mtype >> 4])(c, r, c2, r2, buf);
}

void textmode(int mode)
{
  (*_textmode_jmp_tbl[__crt0_mtype >> 4])(mode);
}

void _setcursortype(int type)
{
  (*_setcursortype_jmp_tbl[__crt0_mtype >> 4])(type);
}

void  fillrow(int row, int left, int right, int fill)
{
  (*_fillrow_jmp_tbl[__crt0_mtype >> 4])(row, left, right, fill);
}

void clrscr(void)
{
  (*_clrscr_jmp_tbl[__crt0_mtype >> 4])();
}

void insline(void)
{
  if (__crt0_mtype == DOSV)
    insline_dv();
  else
    (*_insline_jmp_tbl[__crt0_mtype >> 4])();
}

void delline(void)
{
  if (__crt0_mtype == DOSV)
    delline_dv();
  else
    (*_delline_jmp_tbl[__crt0_mtype >> 4])();
}

static
void bell(void)
{
  (*_bell_jmp_tbl[__crt0_mtype >> 4])();
}

static
int get_screenattrib(void)
{
  return (*_get_screenattrib_jmp_tbl[__crt0_mtype >> 4])();
}

int cputs(const char *s)
{
  if (__crt0_mtype == DOSV)
    return cputs_dv(s);
  else
    return (*_cputs_jmp_tbl[__crt0_mtype >> 4])(s);
}

void _set_screen_lines(int nlines)
{
  (*_set_screen_lines_jmp_tbl[__crt0_mtype >> 4])(nlines);
}

void blinkvideo(void)
{
  (*_blinkvideo_jmp_tbl[__crt0_mtype >> 4])();
}

void intensevideo(void)
{
  (*_intensevideo_jmp_tbl[__crt0_mtype >> 4])();
}
