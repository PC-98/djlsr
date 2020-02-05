/*
 *  PC9800.H : djgpp v2.03 libc for PC-AT/PC-9800 PATCH Rel.0
 *
 *  Copyright (C) 1997-2000 takas / tantan / Wataru Kaneko / Naoki Takano
 */
#ifndef __PC9800_H_
#define __PC9800_H_
#include <bios.h>
#include <time.h>

#define PCAT	0x00	/* IBM PC-AT and Compatible */
#define DOSV	0x01	/* IBM PC-AT and Compatible with DOS/V */
#define PC98	0x10	/* NEC PC-9800 Series */
#define PC98H	0x11	/* NEC PC-H98 Series - No Support */

#define ISPCAT(mtype)	((mtype & 0xf0) == PCAT)
#define ISPC98(mtype)	((mtype & 0xf0) == PC98)

#define PC98_KEYS	0x6C

#define TXA_98AT(txa)	conv_98at_txatbl[(unsigned char)(txa)] /* at to 98 */
#define TXA_AT98(txa)	conv_at98_txatbl[(unsigned char)(txa)] /* 98 to at */

/* src/libc/bios/b_time.c */
unsigned _bios_timeofday_at(unsigned _cmd, unsigned long *_timeval);
unsigned _bios_timeofday_98(unsigned _cmd, unsigned long *_timeval);

/* src/libc/bios/bioscom.c */
int bioscom_at(int cmd, char data, int port);
int bioscom_98(int cmd, char data, int port);
unsigned char conv_98at_com_mode(int data);
int conv_at98_com_status(int cx);

/* src/libc/bios/biosdisk.c */
int biosdisk_at(int _cmd, int _drive, int _head, int _track, int _sector,
		int _nsects, void *_buffer);
int biosdisk_98(int _cmd, int _drive, int _head, int _track, int _sector,
		int _nsects, void *_buffer);
unsigned _bios_disk_at(unsigned _cmd, struct _diskinfo_t *_di);
unsigned _bios_disk_98(unsigned _cmd, struct _diskinfo_t *_di);

/* src/libc/bios/biosequi.c */
int biosequip_at(void);
int biosequip_98(void);

/* src/libc/bios/bioskey.c */
int bioskey_at(int cmd);
int bioskey_98(int cmd);
int conv_at98_bioskey(unsigned char ah);

/* src/libc/bios/biosmem.c */
int biosmemory_at(void);
int biosmemory_98(void);

/* src/libc/bios/biosprin.c */
int biosprint_at(int _cmd, int _byte, int _port);
int biosprint_98(int _cmd, int _byte, int _port);

/* src/libc/bios/biostime.c */
long biostime_at(int _cmd, long _newtime);
long biostime_98(int _cmd, long _newtime);

/* src/libc/crt0/crt1.c */
extern int __crt0_mtype;

/* src/libc/dos/delay.c */
void delay_at(unsigned msec);
void delay_98(unsigned msec);

/* src/libc/pc_hw/co80/conio.c */
int puttext_at(int c, int r, int c2, int r2, void *buf);
int puttext_98(int c, int r, int c2, int r2, void *buf);
int gettext_at(int c, int r, int c2, int r2, void *buf);
int gettext_98(int c, int r, int c2, int r2, void *buf);
void textmode_at(int mode);
void textmode_98(int mode);
void _setcursortype_at(int type);
void _setcursortype_98(int type);
void fillrow(int row, int left, int right, int fill);
void clrscr_at(void);
void clrscr_98(void);
void insline_at(void);
void insline_98(void);
void insline_dv(void);
void delline_at(void);
void delline_98(void);
void delline_dv(void);
int cputs_at(const char *s);
int cputs_98(const char *s);
int cputs_dv(const char *s);
void _set_screen_lines_at(int nlines);
void _set_screen_lines_98(int nlines);
void blinkvideo_at(void);
void blinkvideo_98(void);
void intensevideo_at(void);
void intensevideo_98(void);
void UpdateDOSV(int row, int col, int chars);

/* src/libc/pc_hw/co80/scattrib.c */
extern unsigned char conv_98at_txatbl[]; /* at to 98 */
extern unsigned char conv_at98_txatbl[]; /* 98 to at */

/* src/libc/pc_hw/co80/scclear.c */
void ScreenClear_at(void);
void ScreenClear_98(void);

/* src/libc/pc_hw/co80/sccols.c */
int ScreenCols_at(void);
int ScreenCols_98(void);

/* src/libc/pc_hw/co80/scgetc.c */
void ScreenGetCursor_at(int *_row, int *_col);
void ScreenGetCursor_98(int *_row, int *_col);

/* src/libc/pc_hw/co80/scgetch.c */
void ScreenGetChar_at(int *_ch, int *_attr, int _x, int _y);
void ScreenGetChar_98(int *_ch, int *_attr, int _x, int _y);

/* src/libc/pc_hw/co80/scmode.c */
int ScreenMode_at(void);
int ScreenMode_98(void);

/* src/libc/pc_hw/co80/scputc.c */
void ScreenPutChar_at(int _ch, int _attr, int _x, int _y);
void ScreenPutChar_98(int _ch, int _attr, int _x, int _y);

/* src/libc/pc_hw/co80/scputs.c */
void ScreenPutString_at(const char *_ch, int _attr, int _x, int _y);
void ScreenPutString_98(const char *_ch, int _attr, int _x, int _y);

/* src/libc/pc_hw/co80/scretr.c */
void ScreenRetrieve_at(void *_virtual_screen);
void ScreenRetrieve_98(void *_virtual_screen);

/* src/libc/pc_hw/co80/scrows.c */
int ScreenRows_at(void);
int ScreenRows_98(void);

/* src/libc/pc_hw/co80/scsetc.c */
void ScreenSetCursor_at(int _row, int _col);
void ScreenSetCursor_98(int _row, int _col);

/* src/libc/pc_hw/co80/scupdate.c */
void ScreenUpdate_at(const void *_virtual_screen);
void ScreenUpdate_98(const void *_virtual_screen);

/* src/libc/pc_hw/co80/scupdl.c */
void ScreenUpdateLine_at(const void *_virtual_screen_line, int _row);
void ScreenUpdateLine_98(const void *_virtual_screen_line, int _row);

/* src/libc/pc_hw/co80/scvbell.c */
void ScreenVisualBell_at(void);
void ScreenVisualBell_98(void);

/* src/libc/pc_hw/kb/getkey.c */
int getkey_at(void);
int getkey_98(void);
int conv_at98_pchwkey(unsigned char ah, unsigned char xflag);

/* src/libc/pc_hw/kb/getxkey.c */
int getxkey_at(void);
int getxkey_98(void);

/* src/libc/pc_hw/kb/kbhit.c */
int kbhit_at(void);
int kbhit_98(void);

/* src/libc/pc_hw/mono/mono.c */
void _mono_clear_at(void);
void _mono_clear_98(void);
void _mono_putc_at(int ch);
void _mono_putc_98(int ch);

/* src/libc/pc_hw/sound/sound.c */
void sound_at(int freq);
void sound_98(int freq);

/* src/libc/pc_hw/clock/clock.c */
clock_t clock_at(void);
clock_t clock_98(void);

/* src/libc/pc_hw/clock/uclock.c */
uclock_t uclock_at(void);
uclock_t uclock_98(void);

#endif
