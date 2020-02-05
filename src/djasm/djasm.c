/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KID = 258,
     UID = 259,
     OP_OR = 260,
     OP_AND = 261,
     OP_GE = 262,
     OP_LE = 263,
     OP_NE = 264,
     OP_SHR = 265,
     OP_SHL = 266,
     OP_NOT = 267,
     OP_LNOT = 268,
     OP_NEG = 269,
     NUMBER = 270,
     REG8 = 271,
     REG16 = 272,
     REG32 = 273,
     SREG = 274,
     STRING = 275,
     PC = 276,
     CRREG = 277,
     DRREG = 278,
     TRREG = 279,
     ARITH2 = 280,
     ARITH2B = 281,
     ARITH2D = 282,
     ARITH2W = 283,
     LXS = 284,
     MOVSZX = 285,
     MOVSZXB = 286,
     MOVSZXW = 287,
     JCC = 288,
     JCCL = 289,
     JCXZ = 290,
     LOOP = 291,
     SETCC = 292,
     SHIFT = 293,
     SHIFTB = 294,
     SHIFTD = 295,
     SHIFTW = 296,
     DPSHIFT = 297,
     ONEBYTE = 298,
     TWOBYTE = 299,
     ASCADJ = 300,
     BITTEST = 301,
     GROUP3 = 302,
     GROUP3B = 303,
     GROUP3D = 304,
     GROUP3W = 305,
     GROUP6 = 306,
     GROUP7 = 307,
     STRUCT = 308,
     ALIGN = 309,
     ARPL = 310,
     BOUND = 311,
     BSS = 312,
     BSF = 313,
     BSR = 314,
     CALL = 315,
     CALLF = 316,
     CALLFD = 317,
     COPYRIGHT = 318,
     DB = 319,
     DD = 320,
     DEC = 321,
     DECB = 322,
     DECD = 323,
     DECW = 324,
     DUP = 325,
     DW = 326,
     ENDS = 327,
     ENUM = 328,
     ENTER = 329,
     IN = 330,
     INC = 331,
     INCB = 332,
     INCD = 333,
     INCW = 334,
     INT = 335,
     INCLUDE = 336,
     JMPW = 337,
     JMPB = 338,
     JMPF = 339,
     JMPFD = 340,
     LAR = 341,
     LEA = 342,
     LINKCOFF = 343,
     LSL = 344,
     MOV = 345,
     MOVB = 346,
     MOVD = 347,
     MOVW = 348,
     IMUL = 349,
     IMULB = 350,
     IMULD = 351,
     IMULW = 352,
     ORG = 353,
     OUT = 354,
     POP = 355,
     POPW = 356,
     POPD = 357,
     PUSH = 358,
     PUSHW = 359,
     PUSHB = 360,
     PUSHD = 361,
     RCS_ID = 362,
     RET = 363,
     RETF = 364,
     RETD = 365,
     RETFD = 366,
     STACK = 367,
     START = 368,
     TEST = 369,
     TESTB = 370,
     TESTD = 371,
     TESTW = 372,
     TYPE = 373,
     XCHG = 374
   };
#endif
/* Tokens.  */
#define KID 258
#define UID 259
#define OP_OR 260
#define OP_AND 261
#define OP_GE 262
#define OP_LE 263
#define OP_NE 264
#define OP_SHR 265
#define OP_SHL 266
#define OP_NOT 267
#define OP_LNOT 268
#define OP_NEG 269
#define NUMBER 270
#define REG8 271
#define REG16 272
#define REG32 273
#define SREG 274
#define STRING 275
#define PC 276
#define CRREG 277
#define DRREG 278
#define TRREG 279
#define ARITH2 280
#define ARITH2B 281
#define ARITH2D 282
#define ARITH2W 283
#define LXS 284
#define MOVSZX 285
#define MOVSZXB 286
#define MOVSZXW 287
#define JCC 288
#define JCCL 289
#define JCXZ 290
#define LOOP 291
#define SETCC 292
#define SHIFT 293
#define SHIFTB 294
#define SHIFTD 295
#define SHIFTW 296
#define DPSHIFT 297
#define ONEBYTE 298
#define TWOBYTE 299
#define ASCADJ 300
#define BITTEST 301
#define GROUP3 302
#define GROUP3B 303
#define GROUP3D 304
#define GROUP3W 305
#define GROUP6 306
#define GROUP7 307
#define STRUCT 308
#define ALIGN 309
#define ARPL 310
#define BOUND 311
#define BSS 312
#define BSF 313
#define BSR 314
#define CALL 315
#define CALLF 316
#define CALLFD 317
#define COPYRIGHT 318
#define DB 319
#define DD 320
#define DEC 321
#define DECB 322
#define DECD 323
#define DECW 324
#define DUP 325
#define DW 326
#define ENDS 327
#define ENUM 328
#define ENTER 329
#define IN 330
#define INC 331
#define INCB 332
#define INCD 333
#define INCW 334
#define INT 335
#define INCLUDE 336
#define JMPW 337
#define JMPB 338
#define JMPF 339
#define JMPFD 340
#define LAR 341
#define LEA 342
#define LINKCOFF 343
#define LSL 344
#define MOV 345
#define MOVB 346
#define MOVD 347
#define MOVW 348
#define IMUL 349
#define IMULB 350
#define IMULD 351
#define IMULW 352
#define ORG 353
#define OUT 354
#define POP 355
#define POPW 356
#define POPD 357
#define PUSH 358
#define PUSHW 359
#define PUSHB 360
#define PUSHD 361
#define RCS_ID 362
#define RET 363
#define RETF 364
#define RETD 365
#define RETFD 366
#define STACK 367
#define START 368
#define TEST 369
#define TESTB 370
#define TESTD 371
#define TESTW 372
#define TYPE 373
#define XCHG 374




/* Copy the first part of user declarations.  */
#line 9 "djasm.y"


#define YYDEBUG 1
  
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#ifndef O_BINARY
#define O_BINARY 0
#endif
#undef _POSIX_SOURCE
#include "../../include/coff.h"

#define SMALL_EXE_HEADER 0
#if SMALL_EXE_HEADER
#define EXE_HEADER_SIZE 32
#define EXE_HEADER_BLOCKS 1
#else
#define EXE_HEADER_SIZE 512
#define EXE_HEADER_BLOCKS 32
#endif

#define YYERROR_VERBOSE

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

void djerror(char *s);
void yyerror(char *s);
void shxd_error(int opcode);

#define OUT_exe 0
#define OUT_com 1
#define OUT_bin 2
#define OUT_h   3
#define OUT_inc 4
#define OUT_s   5
#define OUT_sys 6
#define OUT_obj 7

char *ext_types[] = {
  "exe",
  "com",
  "bin",
  "h",
  "inc",
  "ah",
  "sys",
  "obj",
  0
};

char *INC_LEADER = "\t.db\t";
char *S_LEADER = "\t.byte\t";

int out_type = OUT_exe;
int image_type = OUT_exe;
char *outname = 0;

int i;
int lineno = 1;
char *inname;
int total_errors = 0;
char last_token[100];
int last_tret;
char *copyright = 0;

int last_align_begin=-1, last_align_end=-1;
int generated_bytes = -1;

char strbuf[200];
int strbuflen;

typedef struct {
  unsigned short line;
  unsigned short addr;
  char *name;
} lineaddr_s;

lineaddr_s *lineaddr=0;
int num_lineaddr=0;
int max_lineaddr=0;

unsigned char *outbin = 0;
int outsize = 0;
int pc = 0;
int bsspc = -1;
int stack_ptr = 0;
int start_ptr = 0;
int movacc = 0;
int main_obj = 1;

typedef struct Symbol {
  struct Symbol *next;
  char *name;
  int value;
  unsigned defined:1;
  unsigned external:1;
  unsigned public:1;
  struct Patch *patches;
  int first_used;
  int type;
} Symbol;

#define SYM_unknown	0
#define SYM_abs		1
#define SYM_data	2
#define SYM_code	4
#define SYMTYPES "?ADDTTTT"

Symbol pc_symbol = {0,".",0,1,0,0,0,0,SYM_code};

#define REL_abs		0
#define REL_abs32	1
#define REL_16		2
#define REL_8		3
#define REL_abs8	4

typedef struct Patch {
  struct Patch *next;
  int location;
  int lineno;
  char *filename;
  int rel;
} Patch;

Symbol *symtab = 0;
Symbol *get_symbol(char *name, int create);
Symbol *set_symbol(Symbol *sym, int value);
Symbol *zerosym;
int undefs = 0;

void destroy_symbol(Symbol *sym, int undef_error);
void destroy_locals(void);
void add_enum_element(Symbol *s);
void add_struct_element(Symbol *s);
void emit_struct(Symbol *ele, int tp, Symbol *struc);
void emit_struct_abs(Symbol *ele, int tp, Symbol *struc, int offset);
void build_struct(Symbol *ele, int tp, Symbol *struc);

struct {
  int regs;
  int offset;
  int addr16;
  int addr32;
  int nsyms;
  Symbol *syms[10];
} _modrm = { 0, 0, 0, 0, 0, { NULL } };

unsigned char sreg_overrides[] = {
  0x26, 0x2e, 0x36, 0x3e, 0x64, 0x65
};

int struct_tp;
int struct_pc;
char *struct_sym;

int yylex(void);
int yylex1(void);

void emit(void *v, int len);
void emitb(int b);
void emitw(int w);
void emitd(LONG32 d);
void emits(Symbol *s, int offset, int rel);
void modrm(int mod, int reg, int rm);
void reg(int reg);
void addr32(int sib);
void sortsyms();

int istemp(char *symname, char which);
int islocal(char *symname);
void do_sreg_pop(int sreg);
void do_sreg_push(int sreg);
void do_align(int p2, int val);
void set_lineaddr();
void add_copyright(char *buf);
void add_rcs_ident(void);

void set_out_type(char *type);
void set_image_type(char *type);
void do_include(char *fname);
void do_linkcoff(char *fname);

void write_THEADR(FILE *outfile, char *inname);
void write_LNAMES(FILE *outfile, ...);
void write_SEGDEF(FILE *outfile, int size, int name, int class, int overlay);
void write_EXTDEF(FILE *outfile, Symbol *symtab);
void write_PUBDEF(FILE *outfile, Symbol *symtab, int bss_start);
void write_LEDATA(FILE *outfile, int segment, unsigned char *outbin, int size,
		  Symbol *symtab);
void write_MODEND(FILE *outfile, int main_obj, int start_ptr);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 211 "djasm.y"
{
  Symbol *sym;
  int i;
  struct {
    Symbol *sym;
    int ofs;
  } relsym;
}
/* Line 193 of yacc.c.  */
#line 543 "djasm.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 258 "djasm.y"

#define NO_ATTR -1

struct opcode {
  char *name;
  int token;
  int attr;
};

struct opcode opcodes[] = {
  {"aaa", ONEBYTE, 0x37},
  {"aad", ASCADJ, 0xd5},
  {"aam", ASCADJ, 0xd4},
  {"aas", ONEBYTE, 0x3f},
  {"cbw", ONEBYTE, 0x98},
  {"cwde", TWOBYTE, 0x6698},
  {"clc", ONEBYTE, 0xf8},
  {"cld", ONEBYTE, 0xfc},
  {"cli", ONEBYTE, 0xfa},
  {"clts", TWOBYTE, 0x0f06},
  {"cmc", ONEBYTE, 0xf5},
  {"cmpsb", ONEBYTE, 0xa6},
  {"cmpsw", ONEBYTE, 0xa7},
  {"cmpsd", TWOBYTE, 0x66a7},
  {"cpuid", TWOBYTE, 0x0fa2},
  {"cwd", ONEBYTE, 0x99},
  {"cdq", TWOBYTE, 0x6699},
  {"daa", ONEBYTE, 0x27},
  {"das", ONEBYTE, 0x2f},
  {"hlt", ONEBYTE, 0xf4},
  {"insb", ONEBYTE, 0x6c},
  {"insw", ONEBYTE, 0x6d},
  {"insd", TWOBYTE, 0x666d},
  {"into", ONEBYTE, 0xce},
  {"iret", ONEBYTE, 0xcf},
  {"iretd", TWOBYTE, 0x66cf},
  {"lahf", ONEBYTE, 0x9f},
  {"leave", ONEBYTE, 0xc9},
  {"lock", ONEBYTE, 0xf0},
  {"lodsb", ONEBYTE, 0xac},
  {"lodsw", ONEBYTE, 0xad},
  {"lodsd", TWOBYTE, 0x66ad},
  {"movsb", ONEBYTE, 0xa4},
  {"movsw", ONEBYTE, 0xa5},
  {"movsd", TWOBYTE, 0x66a5},
  {"nop", ONEBYTE, 0x90},
  {"outsb", ONEBYTE, 0x6e},
  {"outsw", ONEBYTE, 0x6f},
  {"outsd", TWOBYTE, 0x666f},
  {"popa", ONEBYTE, 0x61},
  {"popad", TWOBYTE, 0x6661},
  {"popf", ONEBYTE, 0x9d},
  {"popfd", TWOBYTE, 0x669d},
  {"pusha", ONEBYTE, 0x60},
  {"pushad", TWOBYTE, 0x6660},
  {"pushf", ONEBYTE, 0x9c},
  {"pushfd", TWOBYTE, 0x669c},
  {"rep", ONEBYTE, 0xf3},
  {"repe", ONEBYTE, 0xf3},
  {"repz", ONEBYTE, 0xf3},
  {"repne", ONEBYTE, 0xf2},
  {"repnz", ONEBYTE, 0xf2},
  {"sahf", ONEBYTE, 0x9e},
  {"scasb", ONEBYTE, 0xae},
  {"scasw", ONEBYTE, 0xaf},
  {"scasd", TWOBYTE, 0x66af},
  {"stc", ONEBYTE, 0xf9},
  {"std", ONEBYTE, 0xfd},
  {"sti", ONEBYTE, 0xfb},
  {"stosb", ONEBYTE, 0xaa},
  {"stosw", ONEBYTE, 0xab},
  {"stosd", TWOBYTE, 0x66ab},
  {"wait", ONEBYTE, 0x9b},
  {"fwait", ONEBYTE, 0x9b},
  {"wbinvd", TWOBYTE, 0x0f09},
  {"xlat", ONEBYTE, 0xd7},
  {"xlatb", ONEBYTE, 0xd7},

  {".addrsize", ONEBYTE, 0x67},
  {".opsize", ONEBYTE, 0x66},
  {".segcs", ONEBYTE, 0x2e},
  {".segds", ONEBYTE, 0x3e},
  {".seges", ONEBYTE, 0x26},
  {".segss", ONEBYTE, 0x36},
  {".segfs", ONEBYTE, 0x64},
  {".seggs", ONEBYTE, 0x65},

  {".align", ALIGN, NO_ATTR},
  {".bss", BSS, NO_ATTR},
  {".copyright", COPYRIGHT, NO_ATTR},
  {".db", DB, NO_ATTR},
  {".dd", DD, NO_ATTR},
  {".dup", DUP, NO_ATTR},
  {".dw", DW, NO_ATTR},
  {".ends", ENDS, NO_ATTR},
  {".enum", ENUM, NO_ATTR},
  {".id", RCS_ID, NO_ATTR},
  {".include", INCLUDE, NO_ATTR},
  {".linkcoff", LINKCOFF, NO_ATTR},
  {".org", ORG, NO_ATTR},
  {".stack", STACK, NO_ATTR},
  {".start", START, NO_ATTR},
  {".struct", STRUCT, 's'},
  {".type", TYPE, NO_ATTR},
  {".union", STRUCT, 'u'},

  {"adc", ARITH2, 2},
  {"adcb", ARITH2B, 2},
  {"adcd", ARITH2D, 2},
  {"adcw", ARITH2W, 2},
  {"add", ARITH2, 0},
  {"addb", ARITH2B, 0},
  {"addd", ARITH2D, 0},
  {"addw", ARITH2W, 0},
  {"and", ARITH2, 4},
  {"andb", ARITH2B, 4},
  {"andd", ARITH2D, 4},
  {"andw", ARITH2W, 4},
  {"arpl", ARPL, NO_ATTR},
  {"bound", BOUND, NO_ATTR},
  {"bsf", BSF, NO_ATTR},
  {"bsr", BSR, NO_ATTR},
  {"bt", BITTEST, 4},
  {"btc", BITTEST, 7},
  {"btr", BITTEST, 6},
  {"bts", BITTEST, 5},
  {"call", CALL, NO_ATTR},
  {"callf", CALLF, NO_ATTR},
  {"callfd", CALLFD, NO_ATTR},
  {"cmp", ARITH2, 7},
  {"cmpb", ARITH2B, 7},
  {"cmpd", ARITH2D, 7},
  {"cmpw", ARITH2W, 7},
  {"dec", DEC, NO_ATTR},
  {"decb", DECB, NO_ATTR},
  {"decd", DECD, NO_ATTR},
  {"decw", DECW, NO_ATTR},
  {"div", GROUP3, 6},
  {"divb", GROUP3B, 6},
  {"divd", GROUP3D, 6},
  {"divw", GROUP3W, 6},
  {"enter", ENTER, NO_ATTR},
  {"idiv", GROUP3, 7},
  {"idivb", GROUP3B, 7},
  {"idivd", GROUP3D, 7},
  {"idivw", GROUP3W, 7},
  {"imul", IMUL, NO_ATTR},
  {"imulb", IMULB, NO_ATTR},
  {"imuld", IMULD, NO_ATTR},
  {"imulw", IMULW, NO_ATTR},
  {"in", IN, NO_ATTR},
  {"inc", INC, NO_ATTR},
  {"incb", INCB, NO_ATTR},
  {"incd", INCD, NO_ATTR},
  {"incw", INCW, NO_ATTR},
  {"int", INT, NO_ATTR},

  {"jo", JCC, 0},
  {"jno", JCC, 1},
  {"jb", JCC, 2},
  {"jc", JCC, 2},
  {"jnae", JCC, 2},
  {"jnb", JCC, 3},
  {"jnc", JCC, 3},
  {"jae", JCC, 3},
  {"jz", JCC, 4},
  {"je", JCC, 4},
  {"jnz", JCC, 5},
  {"jne", JCC, 5},
  {"jbe", JCC, 6},
  {"jna", JCC, 6},
  {"jnbe", JCC, 7},
  {"ja", JCC, 7},
  {"js", JCC, 8},
  {"jns", JCC, 9},
  {"jp", JCC, 10},
  {"jpe", JCC, 10},
  {"jnp", JCC, 11},
  {"jpo", JCC, 11},
  {"jl", JCC, 12},
  {"jnge", JCC, 12},
  {"jnl", JCC, 13},
  {"jge", JCC, 13},
  {"jle", JCC, 14},
  {"jng", JCC, 14},
  {"jnle", JCC, 15},
  {"jg", JCC, 15},

  {"jol", JCCL, 0},
  {"jnol", JCCL, 1},
  {"jbl", JCCL, 2},
  {"jcl", JCCL, 2},
  {"jnael", JCCL, 2},
  {"jnbl", JCCL, 3},
  {"jncl", JCCL, 3},
  {"jael", JCCL, 3},
  {"jzl", JCCL, 4},
  {"jel", JCCL, 4},
  {"jnzl", JCCL, 5},
  {"jnel", JCCL, 5},
  {"jbel", JCCL, 6},
  {"jnal", JCCL, 6},
  {"jnbel", JCCL, 7},
  {"jal", JCCL, 7},
  {"jsl", JCCL, 8},
  {"jnsl", JCCL, 9},
  {"jpl", JCCL, 10},
  {"jpel", JCCL, 10},
  {"jnpl", JCCL, 11},
  {"jpol", JCCL, 11},
  {"jll", JCCL, 12},
  {"jngel", JCCL, 12},
  {"jnll", JCCL, 13},
  {"jgel", JCCL, 13},
  {"jlel", JCCL, 14},
  {"jngl", JCCL, 14},
  {"jnlel", JCCL, 15},
  {"jgl", JCCL, 15},

  {"jcxz", JCXZ, 0},
  {"jecxz", JCXZ, 1},

  {"jmp", JMPB, NO_ATTR},
  {"jmpf", JMPF, NO_ATTR},
  {"jmpfd", JMPFD, NO_ATTR},
  {"jmpl", JMPW, NO_ATTR},
  {"lar", LAR, NO_ATTR},
  {"lds", LXS, 0xc5},
  {"lea", LEA, NO_ATTR},
  {"les", LXS, 0xc4},
  {"lfs", LXS, 0x0fb4},
  {"lgs", LXS, 0x0fb5},
  {"lsl", LSL, NO_ATTR},
  {"lss", LXS, 0x0fb2},
  {"lgdt", GROUP7, 2},
  {"lidt", GROUP7, 3},
  {"lldt", GROUP6, 2},
  {"lmsw", GROUP7, 6},
  {"loop", LOOP, 0xe2},
  {"loope", LOOP, 0xe1},
  {"loopne", LOOP, 0xe0},
  {"loopnz", LOOP, 0xe0},
  {"loopz", LOOP, 0xe1},
  {"ltr", GROUP6, 3},
  {"mov", MOV, NO_ATTR},
  {"movb", MOVB, NO_ATTR},
  {"movd", MOVD, NO_ATTR},
  {"movw", MOVW, NO_ATTR},
  {"movsx", MOVSZX, 0xbe},
  {"movsxb", MOVSZXB, 0xbe},
  {"movsxw", MOVSZXW, 0xbe},
  {"movzx", MOVSZX, 0xb6},
  {"movzxb", MOVSZXB, 0xb6},
  {"movzxw", MOVSZXW, 0xb6},
  {"mul", GROUP3, 4},
  {"mulb", GROUP3B, 4},
  {"muld", GROUP3D, 4},
  {"mulw", GROUP3W, 4},
  {"not", GROUP3, 2},
  {"neg", GROUP3, 3},
  {"or", ARITH2, 1},
  {"orb", ARITH2B, 1},
  {"ord", ARITH2D, 1},
  {"orw", ARITH2W, 1},
  {"out", OUT, NO_ATTR},
  {"pop", POP, NO_ATTR},
  {"popw", POPW, NO_ATTR},
  {"popd", POPD, NO_ATTR},
  {"push", PUSH, NO_ATTR},
  {"pushb", PUSHB, NO_ATTR},
  {"pushw", PUSHW, NO_ATTR},
  {"pushd", PUSHD, NO_ATTR},
  {"rcl", SHIFT, 2},
  {"rclb", SHIFTB, 2},
  {"rcld", SHIFTD, 2},
  {"rclw", SHIFTW, 2},
  {"rcr", SHIFT, 3},
  {"rcrb", SHIFTB, 3},
  {"rcrd", SHIFTD, 3},
  {"rcrw", SHIFTW, 3},
  {"ret", RET, NO_ATTR},
  {"retd", RETD, NO_ATTR},
  {"retf", RETF, NO_ATTR},
  {"retfd", RETFD, NO_ATTR},
  {"rol", SHIFT, 0},
  {"rolb", SHIFTB, 0},
  {"rold", SHIFTD, 0},
  {"rolw", SHIFTW, 0},
  {"ror", SHIFT, 1},
  {"rorb", SHIFTB, 1},
  {"rord", SHIFTD, 1},
  {"rorw", SHIFTW, 1},
  {"sar", SHIFT, 7},
  {"sarb", SHIFTB, 7},
  {"sard", SHIFTD, 7},
  {"sarw", SHIFTW, 7},
  {"sbb", ARITH2, 3},
  {"sbbb", ARITH2B, 3},
  {"sbbd", ARITH2D, 3},
  {"sbbw", ARITH2W, 3},

  {"seto", SETCC, 0},
  {"setno", SETCC, 1},
  {"setb", SETCC, 2},
  {"setc", SETCC, 2},
  {"setnae", SETCC, 2},
  {"setnb", SETCC, 3},
  {"setnc", SETCC, 3},
  {"setae", SETCC, 3},
  {"setz", SETCC, 4},
  {"sete", SETCC, 4},
  {"setnz", SETCC, 5},
  {"setne", SETCC, 5},
  {"setbe", SETCC, 6},
  {"setna", SETCC, 6},
  {"setnbe", SETCC, 7},
  {"seta", SETCC, 7},
  {"sets", SETCC, 8},
  {"setns", SETCC, 9},
  {"setp", SETCC, 10},
  {"setpe", SETCC, 10},
  {"setnp", SETCC, 11},
  {"setpo", SETCC, 11},
  {"setl", SETCC, 12},
  {"setnge", SETCC, 12},
  {"setnl", SETCC, 13},
  {"setge", SETCC, 13},
  {"setle", SETCC, 14},
  {"setng", SETCC, 14},
  {"setnle", SETCC, 15},
  {"setg", SETCC, 15},

  {"sgdt", GROUP7, 0},
  {"sidt", GROUP7, 1},
  {"sldt", GROUP6, 0},
  {"sal", SHIFT, 4},
  {"salb", SHIFTB, 4},
  {"sald", SHIFTD, 4},
  {"salw", SHIFTW, 4},
  {"shl", SHIFT, 4},
  {"shlb", SHIFTB, 4},
  {"shld", SHIFTD, 4},
  {"shlw", SHIFTW, 4},
  {"dshl", DPSHIFT, 0xa4},
  {"shr", SHIFT, 5},
  {"shrb", SHIFTB, 5},
  {"shrd", SHIFTD, 5},
  {"shrw", SHIFTW, 5},
  {"dshr", DPSHIFT, 0xac},
  {"smsw", GROUP7, 4},
  {"str", GROUP6, 1},
  {"sub", ARITH2, 5},
  {"subb", ARITH2B, 5},
  {"subd", ARITH2D, 5},
  {"subw", ARITH2W, 5},
  {"test", TEST, NO_ATTR},
  {"testb", TESTB, NO_ATTR},
  {"testw", TESTW, NO_ATTR},
  {"testd", TESTD, NO_ATTR},
  {"verr", GROUP6, 4},
  {"verw", GROUP6, 5},
  {"xchg", XCHG, NO_ATTR},
  {"xor", ARITH2, 6},
  {"xorb", ARITH2B, 6},
  {"xord", ARITH2D, 6},
  {"xorw", ARITH2W, 6},

  {"al", REG8, 0},
  {"cl", REG8, 1},
  {"dl", REG8, 2},
  {"bl", REG8, 3},
  {"ah", REG8, 4},
  {"ch", REG8, 5},
  {"dh", REG8, 6},
  {"bh", REG8, 7},

  {"es", SREG, 0},
  {"cs", SREG, 1},
  {"ss", SREG, 2},
  {"ds", SREG, 3},
  {"fs", SREG, 4},
  {"gs", SREG, 5},

  {"ax", REG16, 0},
  {"cx", REG16, 1},
  {"dx", REG16, 2},
  {"bx", REG16, 3},
  {"sp", REG16, 4},
  {"bp", REG16, 5},
  {"si", REG16, 6},
  {"di", REG16, 7},

  {"eax", REG32, 0},
  {"ecx", REG32, 1},
  {"edx", REG32, 2},
  {"ebx", REG32, 3},
  {"esp", REG32, 4},
  {"ebp", REG32, 5},
  {"esi", REG32, 6},
  {"edi", REG32, 7},

  {"cr0", CRREG, 0},
  {"cr2", CRREG, 2},
  {"cr3", CRREG, 3},
  {"cr4", CRREG, 4},

  {"dr0", DRREG, 0},
  {"dr1", DRREG, 1},
  {"dr2", DRREG, 2},
  {"dr3", DRREG, 3},
  {"dr6", DRREG, 6},
  {"dr7", DRREG, 7},

  {"tr3", TRREG, 3},
  {"tr4", TRREG, 4},
  {"tr5", TRREG, 5},
  {"tr6", TRREG, 6},
  {"tr7", TRREG, 7},
};


/* Line 216 of yacc.c.  */
#line 976 "djasm.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  332
/* YYNRULES -- Number of states.  */
#define YYNSTATES  655

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   374

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     131,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,     2,     2,     2,    22,     8,     2,
     133,   134,    20,    18,   135,    19,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   132,     2,
      11,    10,    12,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   136,     2,   137,     6,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     5,     2,   139,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       7,     9,    13,    14,    15,    16,    17,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    13,    18,    19,    22,    26,
      27,    34,    35,    42,    46,    53,    55,    57,    59,    61,
      64,    69,    74,    79,    84,    89,    94,    99,   104,   109,
     114,   119,   124,   129,   134,   139,   144,   149,   151,   154,
     157,   162,   167,   172,   177,   182,   187,   192,   197,   202,
     207,   212,   217,   222,   227,   232,   237,   242,   247,   250,
     253,   256,   259,   264,   269,   272,   274,   277,   280,   283,
     286,   289,   292,   295,   298,   301,   306,   311,   316,   321,
     326,   331,   336,   339,   342,   345,   348,   351,   354,   357,
     360,   363,   366,   369,   372,   377,   382,   387,   392,   399,
     406,   413,   420,   423,   426,   429,   432,   435,   438,   441,
     444,   447,   450,   453,   456,   459,   462,   465,   468,   471,
     474,   477,   482,   487,   492,   497,   502,   507,   510,   513,
     518,   523,   528,   533,   538,   543,   548,   553,   558,   563,
     568,   573,   578,   583,   588,   593,   598,   603,   608,   613,
     618,   623,   628,   633,   638,   643,   648,   653,   658,   663,
     668,   673,   678,   683,   688,   691,   696,   701,   706,   711,
     716,   721,   726,   729,   732,   735,   738,   741,   744,   747,
     750,   753,   756,   759,   762,   765,   767,   770,   772,   775,
     777,   780,   782,   785,   788,   791,   796,   801,   806,   811,
     816,   821,   826,   831,   836,   841,   846,   851,   858,   865,
     872,   879,   886,   893,   900,   907,   914,   921,   928,   935,
     942,   949,   956,   963,   965,   967,   972,   977,   982,   987,
     992,   997,  1002,  1007,  1012,  1017,  1022,  1027,  1032,  1037,
    1042,  1045,  1048,  1053,  1058,  1063,  1068,  1073,  1078,  1083,
    1088,  1093,  1094,  1098,  1099,  1102,  1106,  1109,  1111,  1112,
    1116,  1117,  1121,  1122,  1124,  1128,  1130,  1134,  1136,  1140,
    1142,  1146,  1148,  1150,  1154,  1156,  1160,  1162,  1165,  1169,
    1171,  1175,  1177,  1180,  1184,  1186,  1190,  1195,  1199,  1205,
    1207,  1211,  1215,  1219,  1221,  1223,  1225,  1227,  1229,  1233,
    1237,  1241,  1243,  1245,  1247,  1251,  1255,  1259,  1263,  1267,
    1271,  1275,  1279,  1283,  1287,  1291,  1295,  1299,  1303,  1307,
    1311,  1315,  1319,  1322,  1325,  1328,  1332,  1334,  1336,  1339,
    1341,  1344,  1347
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     141,     0,    -1,    -1,   141,   142,   131,    -1,   141,    92,
      31,   131,    -1,   141,    92,    26,   131,    -1,    -1,   162,
     132,    -1,   162,    10,   161,    -1,    -1,    64,   162,   131,
     143,   145,    83,    -1,    -1,    84,   162,   131,   144,   148,
      83,    -1,   162,    64,   162,    -1,   162,    64,   162,   133,
     161,   134,    -1,     1,    -1,    54,    -1,    55,    -1,    68,
      -1,    30,   132,    -1,    37,   157,   135,   161,    -1,    36,
      27,   135,   161,    -1,    36,    27,   135,    27,    -1,    36,
     157,   135,    27,    -1,    36,    27,   135,   157,    -1,    39,
     157,   135,   163,    -1,    36,    28,   135,   163,    -1,    36,
      28,   135,    28,    -1,    36,   157,   135,    28,    -1,    36,
      28,   135,   157,    -1,    38,   157,   135,   163,    -1,    36,
      29,   135,   163,    -1,    36,    29,   135,    29,    -1,    36,
     157,   135,    29,    -1,    36,    29,   135,   157,    -1,    66,
      28,   135,    28,    -1,    66,   157,   135,    28,    -1,    56,
      -1,    56,   161,    -1,    65,   161,    -1,    65,   161,   135,
     161,    -1,    67,    28,   135,   157,    -1,    67,    29,   135,
     157,    -1,    57,    28,   135,    28,    -1,    57,   157,   135,
      28,    -1,    57,    29,   135,    29,    -1,    57,   157,   135,
      29,    -1,    57,    28,   135,   161,    -1,    57,   157,   135,
     161,    -1,    57,    29,   135,   161,    -1,    69,    28,   135,
      28,    -1,    69,    28,   135,   157,    -1,    69,    29,   135,
      29,    -1,    69,    29,   135,   157,    -1,    70,    28,   135,
      28,    -1,    70,    28,   135,   157,    -1,    70,    29,   135,
      29,    -1,    70,    29,   135,   157,    -1,    71,   162,    -1,
      71,    28,    -1,    71,   157,    -1,    72,   157,    -1,    72,
     161,   132,   163,    -1,    73,   161,   132,   163,    -1,    74,
      31,    -1,   118,    -1,    75,   152,    -1,    82,   154,    -1,
      76,   156,    -1,    77,    27,    -1,    78,   157,    -1,    77,
      28,    -1,    77,    29,    -1,    80,   157,    -1,    79,   157,
      -1,    85,   161,   135,   161,    -1,    86,    27,   135,   161,
      -1,    86,    28,   135,   161,    -1,    86,    29,   135,   161,
      -1,    86,    27,   135,    28,    -1,    86,    28,   135,    28,
      -1,    86,    29,   135,    28,    -1,    87,    27,    -1,    88,
     157,    -1,    87,    28,    -1,    87,    29,    -1,    90,   157,
      -1,    89,   157,    -1,   105,    27,    -1,   106,   157,    -1,
     105,    28,    -1,   108,   157,    -1,   105,    29,    -1,   107,
     157,    -1,   105,    28,   135,    28,    -1,   105,    29,   135,
      29,    -1,   105,    28,   135,   157,    -1,   105,    29,   135,
     157,    -1,   105,    28,   135,    28,   135,   161,    -1,   105,
      29,   135,    29,   135,   161,    -1,   105,    28,   135,   157,
     135,   161,    -1,   105,    29,   135,   157,   135,   161,    -1,
      58,    27,    -1,    59,   157,    -1,    58,    28,    -1,    61,
     157,    -1,    58,    29,    -1,    60,   157,    -1,    62,   157,
      -1,    62,    28,    -1,    63,   157,    -1,    63,    28,    -1,
      91,   161,    -1,    44,   162,    -1,    45,   162,    -1,    46,
     162,    -1,    93,   162,    -1,    94,   162,    -1,    94,    28,
      -1,    94,   157,    -1,    95,   157,    -1,    95,   161,   132,
     163,    -1,    96,   161,   132,   163,    -1,    97,    28,   135,
      28,    -1,    97,    28,   135,   157,    -1,    98,    28,   135,
     157,    -1,    98,    29,   135,   157,    -1,    99,    31,    -1,
      47,   162,    -1,   100,    28,   135,    28,    -1,   100,    28,
     135,   157,    -1,    40,    28,   135,   157,    -1,    40,    29,
     135,   157,    -1,   102,   157,   135,   161,    -1,   101,    27,
     135,   161,    -1,   101,    27,   135,    27,    -1,   101,   157,
     135,    27,    -1,   101,    27,   135,   157,    -1,   104,   157,
     135,   163,    -1,   101,    28,   135,   163,    -1,   101,    28,
     135,    28,    -1,   101,   157,   135,    28,    -1,   101,    28,
     135,   157,    -1,   103,   157,   135,   163,    -1,   101,    29,
     135,   163,    -1,   101,    29,   135,    29,    -1,   101,   157,
     135,    29,    -1,   101,    29,   135,   157,    -1,   101,   157,
     135,    30,    -1,   101,    28,   135,    30,    -1,   101,    30,
     135,   157,    -1,   101,    30,   135,    28,    -1,   101,    33,
     135,    29,    -1,   101,    34,   135,    29,    -1,   101,    35,
     135,    29,    -1,   101,    29,   135,    33,    -1,   101,    29,
     135,    34,    -1,   101,    29,   135,    35,    -1,    41,    28,
     135,    27,    -1,    41,    29,   135,    27,    -1,    41,    29,
     135,    28,    -1,    42,    28,   135,   157,    -1,    42,    29,
     135,   157,    -1,    43,    29,   135,   157,    -1,   109,   161,
      -1,   109,   161,   135,   161,    -1,   110,   161,   135,    27,
      -1,   110,   161,   135,    28,    -1,   110,   161,   135,    29,
      -1,   110,    28,   135,    27,    -1,   110,    28,   135,    28,
      -1,   110,    28,   135,    29,    -1,   111,    28,    -1,   111,
      29,    -1,   111,    30,    -1,   112,   157,    -1,   113,   157,
      -1,   114,    28,    -1,   114,    29,    -1,   114,    30,    -1,
     115,   157,    -1,   117,   157,    -1,   116,   161,    -1,   115,
     163,    -1,   117,   163,    -1,   119,    -1,   119,   161,    -1,
     120,    -1,   120,   161,    -1,   121,    -1,   121,   161,    -1,
     122,    -1,   122,   161,    -1,    48,    27,    -1,    48,   157,
      -1,    49,    27,   135,   161,    -1,    49,    27,   135,    27,
      -1,    50,   157,   135,   161,    -1,    50,   157,   135,    27,
      -1,    49,    28,   135,   161,    -1,    49,    28,   135,    27,
      -1,    52,   157,   135,   161,    -1,    52,   157,   135,    27,
      -1,    49,    29,   135,   161,    -1,    49,    29,   135,    27,
      -1,    51,   157,   135,   161,    -1,    51,   157,   135,    27,
      -1,    51,    28,   135,    28,   135,   161,    -1,    51,    28,
     135,    28,   135,    27,    -1,    51,   157,   135,    28,   135,
     161,    -1,    51,   157,   135,    28,   135,    27,    -1,    51,
      29,   135,    29,   135,   161,    -1,    51,    29,   135,    29,
     135,    27,    -1,    51,   157,   135,    29,   135,   161,    -1,
      51,   157,   135,    29,   135,    27,    -1,    53,    28,   135,
      28,   135,   161,    -1,    53,    28,   135,    28,   135,    27,
      -1,    53,   157,   135,    28,   135,   161,    -1,    53,   157,
     135,    28,   135,    27,    -1,    53,    29,   135,    29,   135,
     161,    -1,    53,    29,   135,    29,   135,    27,    -1,    53,
     157,   135,    29,   135,   161,    -1,    53,   157,   135,    29,
     135,    27,    -1,   123,    -1,   124,    -1,   126,   157,   135,
     161,    -1,   125,    27,   135,   161,    -1,   125,    27,   135,
      27,    -1,   125,   157,   135,    27,    -1,   125,    27,   135,
     157,    -1,   128,   157,   135,   163,    -1,   125,    28,   135,
     163,    -1,   125,    28,   135,    28,    -1,   125,   157,   135,
      28,    -1,   125,    28,   135,   157,    -1,   127,   157,   135,
     163,    -1,   125,    29,   135,   163,    -1,   125,    29,   135,
      29,    -1,   125,   157,   135,    29,    -1,   125,    29,   135,
     157,    -1,   129,    31,    -1,   129,    26,    -1,   130,    27,
     135,    27,    -1,   130,    27,   135,   157,    -1,   130,   157,
     135,    27,    -1,   130,    28,   135,    28,    -1,   130,    28,
     135,   157,    -1,   130,   157,   135,    28,    -1,   130,    29,
     135,    29,    -1,   130,    29,   135,   157,    -1,   130,   157,
     135,    29,    -1,    -1,   145,   146,   131,    -1,    -1,   162,
     132,    -1,   162,    64,   162,    -1,    64,   162,    -1,   150,
      -1,    -1,   162,   147,   150,    -1,    -1,   148,   149,   131,
      -1,    -1,   162,    -1,   162,    10,   161,    -1,    75,    -1,
      75,   161,    81,    -1,    82,    -1,    82,   161,    81,    -1,
      76,    -1,    76,   161,    81,    -1,   161,    -1,    31,    -1,
     161,    81,   161,    -1,   151,    -1,   152,   135,   151,    -1,
     161,    -1,     4,   164,    -1,   161,    81,   161,    -1,   153,
      -1,   154,   135,   153,    -1,   161,    -1,     4,   164,    -1,
     161,    81,   161,    -1,   155,    -1,   156,   135,   155,    -1,
     159,   136,   158,   137,    -1,   136,   158,   137,    -1,    30,
     132,   136,   158,   137,    -1,   159,    -1,   158,    18,   158,
      -1,   158,    19,   161,    -1,    30,   132,   159,    -1,    28,
      -1,    29,    -1,   160,    -1,     4,    -1,   161,    -1,    29,
      20,   161,    -1,   161,    20,    29,    -1,    29,    17,   161,
      -1,    26,    -1,     3,    -1,    32,    -1,   161,     7,   161,
      -1,   161,     5,   161,    -1,   161,     6,   161,    -1,   161,
       9,   161,    -1,   161,     8,   161,    -1,   161,    10,   161,
      -1,   161,    12,   161,    -1,   161,    11,   161,    -1,   161,
      13,   161,    -1,   161,    14,   161,    -1,   161,    15,   161,
      -1,   161,    17,   161,    -1,   161,    16,   161,    -1,   161,
      18,   161,    -1,   161,    19,   161,    -1,   161,    20,   161,
      -1,   161,    21,   161,    -1,   161,    22,   161,    -1,    19,
     161,    -1,   138,   161,    -1,   139,   161,    -1,   133,   161,
     134,    -1,     3,    -1,     4,    -1,     4,   164,    -1,   161,
      -1,    18,   161,    -1,    19,   161,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   683,   683,   685,   686,   687,   690,   693,   694,   695,
     695,   707,   707,   716,   717,   718,   720,   721,   723,   725,
     727,   728,   734,   735,   736,   738,   739,   753,   754,   755,
     757,   758,   773,   774,   775,   777,   778,   780,   781,   783,
     784,   786,   787,   789,   790,   791,   792,   793,   794,   795,
     797,   798,   799,   800,   802,   803,   804,   805,   807,   808,
     809,   810,   811,   812,   814,   815,   817,   818,   819,   821,
     822,   823,   824,   825,   826,   828,   830,   831,   832,   833,
     834,   835,   837,   838,   839,   840,   841,   842,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   864,
     876,   886,   898,   899,   900,   901,   902,   903,   905,   906,
     907,   908,   910,   912,   913,   915,   917,   918,   919,   920,
     921,   922,   923,   925,   926,   928,   929,   931,   932,   934,
     935,   937,   938,   940,   941,   942,   943,   949,   955,   956,
     957,   958,   964,   970,   971,   972,   973,   980,   987,   988,
     989,   990,   992,   993,   994,   995,   996,   997,   999,  1000,
    1001,  1003,  1004,  1005,  1007,  1008,  1010,  1011,  1012,  1013,
    1014,  1015,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1040,  1041,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1055,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,  1072,  1080,  1081,  1082,  1083,  1086,
    1087,  1088,  1089,  1091,  1092,  1094,  1095,  1096,  1097,  1098,
    1100,  1101,  1102,  1103,  1104,  1106,  1107,  1108,  1109,  1110,
    1112,  1113,  1115,  1116,  1117,  1118,  1123,  1124,  1125,  1131,
    1132,  1135,  1137,  1140,  1142,  1143,  1144,  1145,  1146,  1146,
    1150,  1152,  1155,  1157,  1158,  1162,  1168,  1174,  1180,  1186,
    1192,  1202,  1203,  1204,  1208,  1209,  1213,  1214,  1215,  1219,
    1220,  1224,  1225,  1226,  1230,  1231,  1235,  1236,  1237,  1241,
    1242,  1243,  1247,  1248,  1256,  1257,  1258,  1259,  1263,  1270,
    1277,  1287,  1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,
    1296,  1297,  1298,  1299,  1300,  1301,  1302,  1303,  1304,  1305,
    1306,  1307,  1308,  1309,  1310,  1311,  1315,  1316,  1320,  1321,
    1325,  1326,  1327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KID", "UID", "'|'", "'^'", "OP_OR",
  "'&'", "OP_AND", "'='", "'<'", "'>'", "OP_GE", "OP_LE", "OP_NE",
  "OP_SHR", "OP_SHL", "'+'", "'-'", "'*'", "'/'", "'%'", "OP_NOT",
  "OP_LNOT", "OP_NEG", "NUMBER", "REG8", "REG16", "REG32", "SREG",
  "STRING", "PC", "CRREG", "DRREG", "TRREG", "ARITH2", "ARITH2B",
  "ARITH2D", "ARITH2W", "LXS", "MOVSZX", "MOVSZXB", "MOVSZXW", "JCC",
  "JCCL", "JCXZ", "LOOP", "SETCC", "SHIFT", "SHIFTB", "SHIFTD", "SHIFTW",
  "DPSHIFT", "ONEBYTE", "TWOBYTE", "ASCADJ", "BITTEST", "GROUP3",
  "GROUP3B", "GROUP3D", "GROUP3W", "GROUP6", "GROUP7", "STRUCT", "ALIGN",
  "ARPL", "BOUND", "BSS", "BSF", "BSR", "CALL", "CALLF", "CALLFD",
  "COPYRIGHT", "DB", "DD", "DEC", "DECB", "DECD", "DECW", "DUP", "DW",
  "ENDS", "ENUM", "ENTER", "IN", "INC", "INCB", "INCD", "INCW", "INT",
  "INCLUDE", "JMPW", "JMPB", "JMPF", "JMPFD", "LAR", "LEA", "LINKCOFF",
  "LSL", "MOV", "MOVB", "MOVD", "MOVW", "IMUL", "IMULB", "IMULD", "IMULW",
  "ORG", "OUT", "POP", "POPW", "POPD", "PUSH", "PUSHW", "PUSHB", "PUSHD",
  "RCS_ID", "RET", "RETF", "RETD", "RETFD", "STACK", "START", "TEST",
  "TESTB", "TESTD", "TESTW", "TYPE", "XCHG", "'\\n'", "':'", "'('", "')'",
  "','", "'['", "']'", "'!'", "'~'", "$accept", "lines", "line", "@1",
  "@2", "struct_lines", "struct_line", "@3", "enum_lines", "enum_line",
  "struct_db", "dbitem", "dblist", "dwitem", "dwlist", "dditem", "ddlist",
  "regmem", "regmemexpr", "regmemitem", "scaledindex", "const", "ID",
  "constID", "offset", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   124,    94,   260,    38,   261,
      61,    60,    62,   262,   263,   264,   265,   266,    43,    45,
      42,    47,    37,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,    10,    58,    40,    41,    44,    91,    93,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   140,   141,   141,   141,   141,   142,   142,   142,   143,
     142,   144,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   145,   145,   146,   146,   146,   146,   146,   147,   146,
     148,   148,   149,   149,   149,   150,   150,   150,   150,   150,
     150,   151,   151,   151,   152,   152,   153,   153,   153,   154,
     154,   155,   155,   155,   156,   156,   157,   157,   157,   158,
     158,   158,   159,   159,   159,   159,   159,   159,   160,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   163,   163,
     164,   164,   164
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     4,     4,     0,     2,     3,     0,
       6,     0,     6,     3,     6,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     2,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     2,     2,
       2,     2,     4,     4,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     4,     6,     6,
       6,     6,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     4,     4,     2,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     4,     4,     4,     4,     4,
       4,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     3,     0,     2,     3,     2,     1,     0,     3,
       0,     3,     0,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     3,     1,     3,     1,     2,     3,     1,
       3,     1,     2,     3,     1,     3,     4,     3,     5,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     1,     2,     1,
       2,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    15,   326,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,   185,   187,
     189,   191,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,    19,   302,   296,     0,   301,     0,   293,   294,
       0,   303,     0,     0,     0,     0,     0,     0,   295,   297,
     293,   294,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,   115,   128,   193,   194,     0,     0,
       0,     0,   293,   294,     0,     0,   293,   294,     0,    38,
     293,   294,     0,   102,   104,   106,   103,   107,   105,   109,
     108,   111,   110,     0,    39,   293,     0,     0,     0,     0,
       0,     0,     0,   302,   296,    59,    60,    58,    61,   297,
       0,    64,   272,   274,    66,   271,   332,   284,    68,   281,
      69,    71,    72,    70,    74,    73,   332,   279,    67,   276,
       0,     0,     0,     0,     0,    82,    84,    85,    83,    87,
      86,   112,     0,     0,   116,   118,   119,   117,   120,   297,
       0,     0,     0,     0,   127,     0,     0,   293,   294,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    90,    92,
      89,    93,    91,   164,     0,     0,   172,   173,   174,   175,
     176,   177,   178,   179,   296,   180,   297,   183,   182,   181,
     184,   186,   188,   190,   192,     0,   293,   294,     0,     0,
       0,     0,   241,   240,     0,   293,   294,     0,     3,     0,
       0,     7,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,   323,   324,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   282,     0,     0,   277,
       0,     0,    11,     0,     0,     0,     0,     5,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,    13,    22,    24,    21,    27,    29,
      26,   300,   298,    32,    34,    31,     0,   292,   325,     0,
       0,     0,   287,    23,    28,    33,     0,   305,   306,   304,
     308,   307,   309,   311,   310,   312,   313,   314,   316,   315,
     317,   318,   299,   319,   320,   321,    20,   332,   329,    30,
      25,   131,   132,   158,   159,   160,   161,   162,   163,   196,
     195,   200,   199,   204,   203,   198,   197,     0,     0,   206,
       0,     0,   205,   202,   201,     0,     0,     0,     0,    43,
      47,    45,    49,    44,    46,    48,   251,    40,    35,    36,
      41,    42,    50,    51,    52,    53,    54,    55,    56,    57,
      62,    63,   275,   273,   330,   331,   285,   283,   280,   278,
     260,    75,    79,    76,    80,    77,    81,    78,   121,   122,
     123,   124,   125,   126,   129,   130,   135,   137,   134,   140,
     149,   142,   139,   145,   155,   156,   157,   147,   144,   151,
     150,   152,   153,   154,   136,   141,   146,   148,   133,   143,
     138,    94,    96,    95,    97,   165,   169,   170,   171,   166,
     167,   168,   227,   229,   226,   232,   234,   231,   237,   239,
     236,   228,   233,   238,   225,   235,   230,   242,   243,   245,
     246,   248,   249,   244,   247,   250,     0,     0,   290,   291,
     286,     0,     0,     0,     0,     0,     0,     0,     0,   253,
     262,     0,     0,     0,     0,     0,   288,   208,   207,   212,
     211,   210,   209,   214,   213,   216,   215,   220,   219,   218,
     217,   222,   221,     0,   265,   269,   267,    10,     0,   257,
     258,    12,     0,   263,    98,   100,    99,   101,    14,   256,
       0,     0,     0,   252,     0,   254,     0,   261,     0,   266,
     270,   268,   255,   259,   264
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   100,   486,   510,   599,   628,   646,   600,   632,
     629,   183,   184,   197,   198,   187,   188,   116,   291,   117,
     118,   119,   101,   257,   391
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -269
static const yytype_int16 yypact[] =
{
    -269,  1670,  -269,  -269,  -269,  -269,  -125,   101,   659,   659,
     659,    79,   140,   145,    -4,   246,   246,   246,   246,   232,
      38,   659,   671,   659,   692,  -269,  -269,  1560,   704,    43,
     659,   659,   659,   722,   752,   246,  1560,   786,   238,  -269,
     263,   290,   819,   659,  1560,     0,   831,   135,    51,   659,
     659,   659,  1279,   246,  1560,   130,   152,   659,   659,   659,
    1560,   -16,   246,   849,   659,  1560,    14,   298,    21,    32,
      65,   659,   659,   659,   190,   659,   659,   659,  1560,  1310,
     218,   659,   659,   224,   867,  1560,   867,  -269,  1560,  1560,
    1560,  1560,  -269,  -269,   513,   659,   659,   659,    19,   532,
     -42,    -6,  -269,  -269,  -269,  1560,  -269,   -34,   -32,    57,
     -22,  -269,  1560,  1260,  1560,  1560,   -17,    15,  -269,  1637,
    -269,    12,    52,    56,    58,    61,    71,    80,    88,    98,
     128,   137,  -269,  -269,  -269,  -269,  -269,  -269,   186,   195,
     197,   202,   229,    97,   234,   248,   249,   158,   251,  2365,
     252,   185,   253,  -269,  -269,  -269,  -269,  -269,  -269,    64,
    -269,    64,  -269,   144,  1815,   257,   266,   267,   268,   269,
     270,   271,   272,   222,   277,    64,  -269,  -269,  -269,  2035,
    2053,  -269,  -269,  -269,   275,  2125,   322,  -269,   276,  2143,
    -269,  -269,  -269,  -269,  -269,  -269,   322,  -269,   278,  2234,
     284,  1833,   281,   282,   285,  -269,  -269,  -269,  -269,  -269,
    -269,  2365,   288,   291,  -269,    64,  -269,  -269,  -269,  2071,
    2089,   299,   303,   304,  -269,   305,   321,   328,   196,  -121,
     329,   330,   331,   332,   333,   334,   335,  -269,   336,   337,
    -269,  -269,  -269,  1851,   338,  1869,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,    18,  -269,  2107,  -269,  2365,  -269,
    -269,  2365,  2365,  2365,  2365,   339,   344,   204,   345,   346,
     348,   357,  -269,  -269,   358,   361,   221,   362,  -269,  1560,
     246,  -269,  -269,   544,   879,  1560,  1560,   909,   917,  1887,
     227,     3,  -269,  -269,  -269,   228,  1260,  1560,  1560,  1560,
    1560,  1560,  1560,  1560,  1560,  1560,  1560,  1560,  1560,  1560,
    1560,  1560,  1324,  1560,  1560,  1560,  1322,  1322,   659,   659,
     350,   316,   659,   659,   659,  1341,  1344,  1356,  1375,   398,
     404,    27,  1377,   454,   469,   347,  1560,  1387,  1397,    87,
    -269,  1560,   475,   476,   659,   659,   947,   964,   994,  1006,
    1322,  1322,   831,  1560,  1560,  1560,  -269,   135,  1560,  -269,
    1279,  1560,  -269,  1560,  1405,  1408,  1419,  -269,  -269,  1322,
    1322,  1040,   659,   659,  1085,   577,  1121,   395,  1133,   479,
     482,   486,   215,  1560,  1322,  1322,  1163,  1171,  1560,   242,
     250,  -269,   607,  1183,  1201,   258,  1560,  1322,  1322,   628,
    1213,  1248,   261,  2365,   387,  -269,  -269,  1797,    64,  -269,
    -269,  2365,  1931,     6,  -269,  -269,  1260,  -269,  -269,  1260,
    1260,  1560,  -269,  -269,  -269,  -269,    16,  1961,  1961,  1961,
     433,   433,  1944,  1944,  1944,  1944,  1944,  1944,   209,   209,
     295,   295,  -269,  -269,  -269,  -269,  2365,   322,  2365,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    2365,  -269,  2365,  -269,  2365,  -269,  2365,   386,   389,  -269,
     390,   391,  2365,  -269,  2365,   392,   394,   402,   409,  -269,
    2365,  -269,  2365,  -269,  -269,  2365,  -269,  2365,  -269,  -269,
    -269,  -269,    64,  -269,     6,  -269,    64,  -269,     6,  -269,
    -269,  -269,  -269,  2365,  2365,  2365,  -269,  2365,  -269,  2365,
    -269,  2365,  -269,  2365,  -269,  2365,  -269,  2365,  -269,  -269,
      64,  -269,  -269,  -269,    64,  -269,  -269,  -269,  1797,    64,
     -22,  -269,  -269,     6,  -269,  -269,  -269,  -269,  -269,    64,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  2365,  -269,
    -269,   243,   411,   -11,   417,  2365,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  1797,    64,  -269,  -269,     6,  -269,
    -269,  -269,  -269,  -269,  2365,  -269,  -269,  -269,  -269,    64,
    -269,     6,  -269,  -269,  -269,  -269,  1560,    45,  -269,  1931,
    -269,  1427,  1439,  1449,  1466,  1485,  1502,  1529,  1548,   474,
      13,  1560,  1560,  1560,  1560,  1905,  -269,  -269,  2365,  -269,
    2365,  -269,  2365,  -269,  2365,  -269,  2365,  -269,  2365,  -269,
    2365,  -269,  2365,   246,  1560,  1560,  1560,  -269,   399,  -269,
     -59,  -269,   422,   545,  2365,  2365,  2365,  2365,  -269,  -269,
    2252,  2270,  2288,  -269,   246,  -269,   -63,  -269,  1560,  -269,
    -269,  -269,  -269,  -269,  2365
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
     -92,   213,  -269,   206,  -269,   210,  -269,   113,  -268,   -74,
    -269,    -3,   -15,   125,  -178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -333
static const yytype_int16 yytable[] =
{
     132,   133,   134,   135,   279,   644,   285,   102,   356,   286,
     212,   288,   624,   625,   378,   213,     4,     5,   359,   626,
     163,   420,   421,   285,   149,   131,   286,   177,   426,   285,
     103,   181,   286,   164,   420,   421,   354,   355,   200,   292,
     179,   180,   221,   185,   189,   272,   105,   214,   217,   199,
     273,   201,   224,   106,   469,   470,   471,   211,   280,   111,
     225,   219,   220,   420,   421,   138,   139,   140,   103,   104,
     153,   154,   155,   645,   285,   243,   245,   286,   190,   191,
     192,   256,   258,   256,   105,   261,   262,   263,   264,   278,
     103,   106,   226,   227,   228,   229,   631,   111,   230,   231,
     232,   283,   282,   284,   103,   104,   105,   125,   126,   289,
     288,   293,   294,   106,   285,   483,   484,   286,   295,   111,
     105,   122,   123,   124,   603,  -294,   281,   106,   107,   108,
     109,   110,   137,   111,   141,   144,   145,   148,   103,   186,
     422,   152,  -294,   156,   157,   158,   160,   162,   587,  -332,
     166,   296,   588,   590,   105,   176,   178,   202,   203,   204,
     112,   106,   193,   194,   195,   114,   115,   111,   127,   128,
     208,   209,   210,   129,   130,   285,   216,   218,   286,   205,
     206,   207,   606,   233,   234,   235,   236,   315,   240,   241,
     242,   316,   287,   317,   249,   250,   318,   255,   112,   259,
    -293,   113,   285,   114,   115,   286,   319,   268,   269,   270,
     271,   260,   277,   285,   417,   320,   286,   237,   238,   239,
     112,   285,   292,   321,   286,   114,   115,   310,   311,   336,
     313,   314,   330,   322,   112,   103,   104,   113,   285,   114,
     115,   286,   544,   545,   546,   547,   246,   247,   248,     4,
       5,   105,   251,   252,   253,   423,   424,   425,   106,   136,
     120,   121,   110,   323,   111,   404,   167,   168,   112,   556,
     557,   558,   324,   114,   115,   340,   403,   559,   560,   561,
     407,   256,   411,   412,   256,   571,   572,   573,   583,   584,
     585,   169,   170,   334,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   443,
     444,   445,   446,   448,   448,   336,   313,   314,   171,   172,
     338,   325,   460,   462,   464,   466,   222,   223,   472,   474,
     326,   377,   327,   443,   480,   482,   485,   328,   487,   394,
     354,   355,   292,   454,   455,   417,   292,   448,   448,   185,
     503,   504,   505,  -326,   189,   507,   401,   199,   509,   419,
     511,   513,   515,   517,   329,   112,   448,   448,   113,   331,
     114,   115,   528,   256,   256,   477,   478,   453,   601,  -293,
     548,   448,   448,   332,   333,   555,   335,   337,   339,   564,
     256,   256,   342,   574,   448,   448,   406,   409,   103,   254,
     414,   343,   344,   345,   346,   347,   348,   349,  -327,   410,
     352,   357,   415,   360,   105,   362,   364,   365,   589,   367,
     366,   106,   368,   120,   533,   110,   467,   111,   534,   535,
     536,   451,   452,   468,   371,   456,   457,   458,   372,   373,
     374,   449,   450,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   336,   313,   314,   375,   490,   491,   493,
     495,   497,   499,   376,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   389,   392,   500,   501,     4,     5,   393,
     395,   396,   475,   397,   521,   522,   523,   525,   527,   531,
     537,   540,   398,   399,   518,   519,   400,   402,   476,   552,
     554,   532,   538,   488,   489,   563,   566,   569,   541,   549,
     550,   542,   578,   580,   582,   543,   103,   104,   567,   570,
     586,   591,   575,   576,   592,   593,   594,   595,   112,   596,
     643,   113,   105,   114,   115,   103,   104,   597,   623,   106,
     265,   266,   267,   110,   598,   111,   602,   103,   104,   624,
     625,   105,   604,   647,   653,   648,   626,   627,   106,   274,
     275,   276,   110,   105,   111,   502,   508,   506,     0,     0,
     106,   405,   120,   121,   110,     0,   111,     0,     0,     0,
     103,   104,     0,   605,   630,   633,     0,     0,   608,   610,
     612,   614,   616,   618,   620,   622,   105,     0,   634,   635,
     636,   637,     0,   106,   526,   120,   121,   110,   639,   111,
     103,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   640,   641,   642,     0,     0,   105,     0,     0,   652,
       0,   103,   104,   106,   562,   120,   121,   110,     0,   111,
       0,     0,     0,     0,     0,   654,   112,   105,     0,   113,
       0,   114,   115,     0,   106,   577,   120,   121,   110,     0,
     111,     0,   103,   104,     0,   112,     0,     0,   113,     0,
     114,   115,     0,     0,   103,   104,     0,   112,   105,     0,
     113,     0,   114,   115,     0,   106,     0,   120,   121,   110,
     105,   111,     0,     0,     0,   103,   104,   106,     0,   142,
     143,   110,     0,   111,     0,     0,     0,   103,   104,     0,
     112,   105,     0,   113,     0,   114,   115,     0,   106,     0,
     146,   147,   110,   105,   111,   103,   104,     0,     0,     0,
     106,     0,   150,   151,   110,     0,   111,     0,     0,     0,
     112,   105,     0,   113,     0,   114,   115,     0,   106,     0,
     159,   121,   110,     0,   111,   103,   104,     0,     0,     0,
       0,   112,     0,     0,   113,     0,   114,   115,     0,     0,
       0,   105,     0,     0,     0,     0,     0,     0,   106,     0,
     161,   121,   110,     0,   111,     0,     0,     0,     0,   103,
     104,     0,   112,     0,     0,   113,     0,   114,   115,     0,
       0,     0,     0,     0,   112,   105,     0,   113,     0,   114,
     115,     0,   106,     0,   165,   121,   110,     0,   111,     0,
       0,     0,   173,   174,     0,   112,     0,     0,   113,     0,
     114,   115,     0,     0,   103,     0,     0,   112,   105,     0,
     113,     0,   114,   115,     0,   106,     0,   175,   121,   110,
     105,   111,   173,   174,     0,   112,     0,   106,   113,     0,
     114,   115,   182,   111,     0,     0,     0,     0,   105,     0,
     103,   254,     0,     0,     0,   106,     0,   215,   121,   110,
       0,   111,   103,   254,     0,   112,   105,     0,   113,     0,
     114,   115,     0,   106,     0,   120,   121,   110,   105,   111,
       0,     0,     0,     0,     0,   106,     0,   408,   121,   110,
       0,   111,   103,   254,     0,     0,     0,     0,     0,   112,
     103,   104,   113,     0,   114,   115,     0,     0,   105,     0,
       0,     0,     0,     0,     0,   106,   105,   120,   413,   110,
       0,   111,     0,   106,     0,   120,   121,   290,     0,   111,
     103,   104,   112,     0,     0,   113,     0,   114,   115,     0,
       0,     0,     0,     0,   112,     0,   105,   103,   104,   114,
     115,     0,     0,   106,     0,   492,   121,   110,     0,   111,
       0,     0,   112,   105,     0,   113,     0,   114,   115,     0,
     106,     0,   120,   494,   110,     0,   111,   103,   104,     0,
     112,     0,     0,   113,     0,   114,   115,     0,     0,   103,
     104,     0,   112,   105,     0,   113,     0,   114,   115,     0,
     106,     0,   496,   121,   110,   105,   111,     0,     0,     0,
       0,     0,   106,     0,   120,   498,   110,     0,   111,     0,
       0,     0,   112,   103,   104,   113,     0,   114,   115,     0,
     112,     0,     0,   416,     0,   114,   115,     0,     0,   105,
       0,     0,     0,     0,     0,     0,   106,     0,   520,   121,
     110,     0,   111,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,   113,     0,   114,   115,     0,   103,   104,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     113,     0,   114,   115,   105,     0,     0,     0,     0,     0,
       0,   106,     0,   524,   121,   110,     0,   111,     0,     0,
       0,     0,     0,     0,   103,   254,     0,   112,     0,     0,
     113,     0,   114,   115,     0,     0,   103,   104,     0,   112,
     105,     0,   113,     0,   114,   115,     0,   106,     0,   529,
     121,   530,   105,   111,     0,     0,     0,     0,     0,   106,
       0,   539,   121,   110,     0,   111,   103,   104,     0,     0,
       0,     0,     0,   112,   103,   104,   113,     0,   114,   115,
       0,     0,   105,     0,     0,     0,   103,   254,     0,   106,
     105,   551,   121,   110,     0,   111,     0,   106,     0,   120,
     553,   110,   105,   111,   103,   254,     0,     0,     0,   106,
       0,   565,   121,   110,     0,   111,   103,   104,   112,     0,
     105,   113,     0,   114,   115,     0,     0,   106,     0,   120,
     568,   110,   105,   111,     0,     0,     0,     0,     0,   106,
       0,   579,   121,   110,     0,   111,     0,     0,     0,     0,
       0,   103,   104,     0,   112,     0,     0,   113,     0,   114,
     115,     0,     0,   103,   104,     0,   112,   105,     0,   113,
       0,   114,   115,     0,   106,     0,   120,   581,   110,   105,
     111,     0,   103,   196,     0,     0,   106,     0,   120,   121,
     290,     0,   111,     0,     0,     0,   112,     0,   105,   113,
       0,   114,   115,     0,   112,   106,     0,   113,     0,   114,
     115,   111,     0,   103,     0,     0,   112,     0,     0,   113,
       0,   114,   115,     0,     0,   103,   447,   103,     0,   105,
       0,     0,     0,     0,   112,     0,   106,   113,   244,   114,
     115,   105,   111,   105,   103,     0,   112,   103,   106,   113,
     106,   114,   115,   442,   111,     0,   111,     0,     0,   103,
     105,     0,     0,   105,     0,     0,     0,   106,   459,     0,
     106,   461,     0,   111,     0,   105,   111,     0,   103,     0,
     103,   112,   106,   463,   113,     0,   114,   115,   111,     0,
     103,     0,     0,   112,   105,     0,   105,     0,   114,   115,
     103,   106,   465,   106,   473,     0,   105,   111,   103,   111,
       0,   103,   112,   106,     0,   479,   105,   114,   115,   111,
       0,     0,   103,   106,   105,     0,   481,   105,     0,   111,
     103,   106,     0,   512,   106,     0,   514,   111,   105,     0,
     111,     0,   103,   112,     0,   106,   105,   516,   114,   115,
       0,   111,   103,   106,   607,   112,     0,   112,   105,   111,
     114,   115,   114,   115,     0,   106,   609,     0,   105,   103,
       0,   111,     0,     0,   112,   106,   611,   112,     0,   114,
     115,   111,   114,   115,     0,   105,     0,     0,   103,   112,
       0,     0,   106,   613,   114,   115,     0,     0,   111,     0,
       0,     0,     0,     0,   105,   103,     0,     0,   112,     0,
     112,   106,   615,   114,   115,   114,   115,   111,     0,     0,
     112,   105,     0,     0,     0,   114,   115,     0,   106,   617,
     112,     0,   103,     0,   111,   114,   115,     0,   112,     0,
       0,   112,     0,   114,   115,     0,   114,   115,   105,     0,
       0,   103,   112,     0,     0,   106,   619,   114,   115,     0,
     112,   111,     0,   103,     0,   114,   115,   105,     0,     0,
       0,     0,   112,     0,   106,   621,     0,   114,   115,   105,
     111,     0,   112,     0,     0,     0,   106,   114,   115,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,   114,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,   114,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
     114,   115,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
       0,     0,   112,     0,     0,     0,     0,   114,   115,     0,
       2,     3,     0,     4,     5,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,   114,   115,     0,     0,
       0,     0,     0,   112,     0,     0,     0,     0,   114,   115,
       6,     0,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -6,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   336,   313,   314,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   336,   313,   314,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   336,   313,   314,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   336,
     313,   314,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   336,   313,   314,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   336,   313,   314,     0,     0,
       0,     0,     0,  -297,     0,     0,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,     0,
     341,   336,   313,   314,  -333,  -333,  -333,  -333,  -333,  -333,
     308,   309,   310,   311,   336,   313,   314,     0,   363,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   336,   313,   314,     0,     0,   388,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   390,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   418,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   638,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   336,   313,   314,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   336,
     313,   314,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   336,   313,   314,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   336,   313,   314,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   370,     0,     0,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -329,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   336,   313,   314,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   336,   313,   314,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     336,   313,   314,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   336,   313,
     314,     0,     0,     0,     0,   361,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   649,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   650,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   651,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   336,   313,   314
};

static const yytype_int16 yycheck[] =
{
      15,    16,    17,    18,    10,    64,    17,   132,   186,    20,
      26,   132,    75,    76,   135,    31,     3,     4,   196,    82,
      35,    18,    19,    17,    27,    29,    20,    42,   296,    17,
       3,    31,    20,    36,    18,    19,    18,    19,    53,   113,
      43,    44,    28,    46,    47,    26,    19,    62,    63,    52,
      31,    54,    31,    26,    27,    28,    29,    60,    64,    32,
      28,    64,    65,    18,    19,    27,    28,    29,     3,     4,
      27,    28,    29,   132,    17,    78,    79,    20,    27,    28,
      29,    84,    85,    86,    19,    88,    89,    90,    91,   131,
       3,    26,    27,    28,    29,    30,    83,    32,    33,    34,
      35,   135,   105,   135,     3,     4,    19,    28,    29,   112,
     132,   114,   115,    26,    17,    28,    29,    20,   135,    32,
      19,     8,     9,    10,   135,   136,   132,    26,    27,    28,
      29,    30,    19,    32,    21,    22,    23,    24,     3,     4,
     137,    28,   136,    30,    31,    32,    33,    34,   416,   131,
      37,   136,   420,   137,    19,    42,    43,    27,    28,    29,
     133,    26,    49,    50,    51,   138,   139,    32,    28,    29,
      57,    58,    59,    28,    29,    17,    63,    64,    20,    27,
      28,    29,   137,    70,    71,    72,    73,   135,    75,    76,
      77,   135,   135,   135,    81,    82,   135,    84,   133,    86,
     136,   136,    17,   138,   139,    20,   135,    94,    95,    96,
      97,    86,    99,    17,   288,   135,    20,    27,    28,    29,
     133,    17,   296,   135,    20,   138,   139,    18,    19,    20,
      21,    22,   135,   135,   133,     3,     4,   136,    17,   138,
     139,    20,    27,    28,    29,    30,    28,    29,    30,     3,
       4,    19,    28,    29,    30,    27,    28,    29,    26,    27,
      28,    29,    30,   135,    32,   280,    28,    29,   133,    27,
      28,    29,   135,   138,   139,   131,   279,    27,    28,    29,
     283,   284,   285,   286,   287,    27,    28,    29,    27,    28,
      29,    28,    29,   135,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,    20,    21,    22,    28,    29,
     135,   135,   325,   326,   327,   328,    28,    29,   331,   332,
     135,   135,   135,   336,   337,   338,   339,   135,   341,   135,
      18,    19,   416,    27,    28,   419,   420,   350,   351,   352,
     353,   354,   355,   131,   357,   358,   135,   360,   361,   132,
     363,   364,   365,   366,   135,   133,   369,   370,   136,   135,
     138,   139,   375,   376,   377,    28,    29,    27,   135,   136,
     383,   384,   385,   135,   135,   388,   135,   135,   135,   392,
     393,   394,   135,   396,   397,   398,   283,   284,     3,     4,
     287,   135,   135,   135,   135,   135,   135,   135,   131,   284,
     135,   135,   287,   135,    19,   131,   135,   135,   421,   131,
     135,    26,   131,    28,    29,    30,    28,    32,    33,    34,
      35,   318,   319,    29,   135,   322,   323,   324,   135,   135,
     135,   316,   317,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   135,   344,   345,   346,
     347,   348,   349,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   350,   351,     3,     4,   135,
     135,   135,    28,   135,   371,   372,   373,   374,   375,   376,
     377,   378,   135,   135,   369,   370,   135,   135,    29,   386,
     387,   376,   377,    28,    28,   392,   393,   394,    29,   384,
     385,    29,   399,   400,   401,    29,     3,     4,   393,   394,
     133,   135,   397,   398,   135,   135,   135,   135,   133,   135,
     131,   136,    19,   138,   139,     3,     4,   135,    64,    26,
      27,    28,    29,    30,   135,    32,   135,     3,     4,    75,
      76,    19,   135,   131,   646,    10,    82,    83,    26,    27,
      28,    29,    30,    19,    32,   352,   360,   357,    -1,    -1,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
       3,     4,    -1,   586,   599,   600,    -1,    -1,   591,   592,
     593,   594,   595,   596,   597,   598,    19,    -1,   601,   602,
     603,   604,    -1,    26,    27,    28,    29,    30,   623,    32,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   624,   625,   626,    -1,    -1,    19,    -1,    -1,   644,
      -1,     3,     4,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    -1,   648,   133,    19,    -1,   136,
      -1,   138,   139,    -1,    26,    27,    28,    29,    30,    -1,
      32,    -1,     3,     4,    -1,   133,    -1,    -1,   136,    -1,
     138,   139,    -1,    -1,     3,     4,    -1,   133,    19,    -1,
     136,    -1,   138,   139,    -1,    26,    -1,    28,    29,    30,
      19,    32,    -1,    -1,    -1,     3,     4,    26,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,     3,     4,    -1,
     133,    19,    -1,   136,    -1,   138,   139,    -1,    26,    -1,
      28,    29,    30,    19,    32,     3,     4,    -1,    -1,    -1,
      26,    -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
     133,    19,    -1,   136,    -1,   138,   139,    -1,    26,    -1,
      28,    29,    30,    -1,    32,     3,     4,    -1,    -1,    -1,
      -1,   133,    -1,    -1,   136,    -1,   138,   139,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,     3,
       4,    -1,   133,    -1,    -1,   136,    -1,   138,   139,    -1,
      -1,    -1,    -1,    -1,   133,    19,    -1,   136,    -1,   138,
     139,    -1,    26,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,     3,     4,    -1,   133,    -1,    -1,   136,    -1,
     138,   139,    -1,    -1,     3,    -1,    -1,   133,    19,    -1,
     136,    -1,   138,   139,    -1,    26,    -1,    28,    29,    30,
      19,    32,     3,     4,    -1,   133,    -1,    26,   136,    -1,
     138,   139,    31,    32,    -1,    -1,    -1,    -1,    19,    -1,
       3,     4,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      -1,    32,     3,     4,    -1,   133,    19,    -1,   136,    -1,
     138,   139,    -1,    26,    -1,    28,    29,    30,    19,    32,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      -1,    32,     3,     4,    -1,    -1,    -1,    -1,    -1,   133,
       3,     4,   136,    -1,   138,   139,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    19,    28,    29,    30,
      -1,    32,    -1,    26,    -1,    28,    29,    30,    -1,    32,
       3,     4,   133,    -1,    -1,   136,    -1,   138,   139,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    19,     3,     4,   138,
     139,    -1,    -1,    26,    -1,    28,    29,    30,    -1,    32,
      -1,    -1,   133,    19,    -1,   136,    -1,   138,   139,    -1,
      26,    -1,    28,    29,    30,    -1,    32,     3,     4,    -1,
     133,    -1,    -1,   136,    -1,   138,   139,    -1,    -1,     3,
       4,    -1,   133,    19,    -1,   136,    -1,   138,   139,    -1,
      26,    -1,    28,    29,    30,    19,    32,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,   133,     3,     4,   136,    -1,   138,   139,    -1,
     133,    -1,    -1,   136,    -1,   138,   139,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,   136,    -1,   138,   139,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
     136,    -1,   138,   139,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,   133,    -1,    -1,
     136,    -1,   138,   139,    -1,    -1,     3,     4,    -1,   133,
      19,    -1,   136,    -1,   138,   139,    -1,    26,    -1,    28,
      29,    30,    19,    32,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    -1,    32,     3,     4,    -1,    -1,
      -1,    -1,    -1,   133,     3,     4,   136,    -1,   138,   139,
      -1,    -1,    19,    -1,    -1,    -1,     3,     4,    -1,    26,
      19,    28,    29,    30,    -1,    32,    -1,    26,    -1,    28,
      29,    30,    19,    32,     3,     4,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    -1,    32,     3,     4,   133,    -1,
      19,   136,    -1,   138,   139,    -1,    -1,    26,    -1,    28,
      29,    30,    19,    32,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,   133,    -1,    -1,   136,    -1,   138,
     139,    -1,    -1,     3,     4,    -1,   133,    19,    -1,   136,
      -1,   138,   139,    -1,    26,    -1,    28,    29,    30,    19,
      32,    -1,     3,     4,    -1,    -1,    26,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,   133,    -1,    19,   136,
      -1,   138,   139,    -1,   133,    26,    -1,   136,    -1,   138,
     139,    32,    -1,     3,    -1,    -1,   133,    -1,    -1,   136,
      -1,   138,   139,    -1,    -1,     3,     4,     3,    -1,    19,
      -1,    -1,    -1,    -1,   133,    -1,    26,   136,    28,   138,
     139,    19,    32,    19,     3,    -1,   133,     3,    26,   136,
      26,   138,   139,    29,    32,    -1,    32,    -1,    -1,     3,
      19,    -1,    -1,    19,    -1,    -1,    -1,    26,    27,    -1,
      26,    27,    -1,    32,    -1,    19,    32,    -1,     3,    -1,
       3,   133,    26,    27,   136,    -1,   138,   139,    32,    -1,
       3,    -1,    -1,   133,    19,    -1,    19,    -1,   138,   139,
       3,    26,    27,    26,    27,    -1,    19,    32,     3,    32,
      -1,     3,   133,    26,    -1,    28,    19,   138,   139,    32,
      -1,    -1,     3,    26,    19,    -1,    29,    19,    -1,    32,
       3,    26,    -1,    28,    26,    -1,    28,    32,    19,    -1,
      32,    -1,     3,   133,    -1,    26,    19,    28,   138,   139,
      -1,    32,     3,    26,    27,   133,    -1,   133,    19,    32,
     138,   139,   138,   139,    -1,    26,    27,    -1,    19,     3,
      -1,    32,    -1,    -1,   133,    26,    27,   133,    -1,   138,
     139,    32,   138,   139,    -1,    19,    -1,    -1,     3,   133,
      -1,    -1,    26,    27,   138,   139,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    19,     3,    -1,    -1,   133,    -1,
     133,    26,    27,   138,   139,   138,   139,    32,    -1,    -1,
     133,    19,    -1,    -1,    -1,   138,   139,    -1,    26,    27,
     133,    -1,     3,    -1,    32,   138,   139,    -1,   133,    -1,
      -1,   133,    -1,   138,   139,    -1,   138,   139,    19,    -1,
      -1,     3,   133,    -1,    -1,    26,    27,   138,   139,    -1,
     133,    32,    -1,     3,    -1,   138,   139,    19,    -1,    -1,
      -1,    -1,   133,    -1,    26,    27,    -1,   138,   139,    19,
      32,    -1,   133,    -1,    -1,    -1,    26,   138,   139,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
     138,   139,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,    -1,
       0,     1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,
      30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
     135,    20,    21,    22,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,   135,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   141,     0,     1,     3,     4,    30,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    82,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     142,   162,   132,     3,     4,    19,    26,    27,    28,    29,
      30,    32,   133,   136,   138,   139,   157,   159,   160,   161,
      28,    29,   157,   157,   157,    28,    29,    28,    29,    28,
      29,    29,   162,   162,   162,   162,    27,   157,    27,    28,
      29,   157,    28,    29,   157,   157,    28,    29,   157,   161,
      28,    29,   157,    27,    28,    29,   157,   157,   157,    28,
     157,    28,   157,   162,   161,    28,   157,    28,    29,    28,
      29,    28,    29,     3,     4,    28,   157,   162,   157,   161,
     161,    31,    31,   151,   152,   161,     4,   155,   156,   161,
      27,    28,    29,   157,   157,   157,     4,   153,   154,   161,
     162,   161,    27,    28,    29,    27,    28,    29,   157,   157,
     157,   161,    26,    31,   162,    28,   157,   162,   157,   161,
     161,    28,    28,    29,    31,    28,    27,    28,    29,    30,
      33,    34,    35,   157,   157,   157,   157,    27,    28,    29,
     157,   157,   157,   161,    28,   161,    28,    29,    30,   157,
     157,    28,    29,    30,     4,   157,   161,   163,   161,   157,
     163,   161,   161,   161,   161,    27,    28,    29,   157,   157,
     157,   157,    26,    31,    27,    28,    29,   157,   131,    10,
      64,   132,   161,   135,   135,    17,    20,   135,   132,   161,
      30,   158,   159,   161,   161,   135,   136,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,    20,   135,   135,   135,
     131,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     132,   132,   135,    81,    18,    19,   164,   135,    81,   164,
     135,    81,   131,   135,   135,   135,   135,   131,   131,   132,
     132,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   164,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   161,   162,    27,   157,   161,    28,   157,
     163,   161,   161,    29,   157,   163,   136,   159,   134,   132,
      18,    19,   137,    27,    28,    29,   158,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,    29,   161,   161,   161,   161,     4,   161,   163,
     163,   157,   157,    27,    27,    28,   157,   157,   157,    27,
     161,    27,   161,    27,   161,    27,   161,    28,    29,    27,
      28,    29,   161,    27,   161,    28,    29,    28,    29,    28,
     161,    29,   161,    28,    29,   161,   143,   161,    28,    28,
     157,   157,    28,   157,    29,   157,    28,   157,    29,   157,
     163,   163,   151,   161,   161,   161,   155,   161,   153,   161,
     144,   161,    28,   161,    28,   161,    28,   161,   163,   163,
      28,   157,   157,   157,    28,   157,    27,   157,   161,    28,
      30,   157,   163,    29,    33,    34,    35,   157,   163,    28,
     157,    29,    29,    29,    27,    28,    29,    30,   161,   163,
     163,    28,   157,    29,   157,   161,    27,    28,    29,    27,
      28,    29,    27,   157,   161,    28,   157,   163,    29,   157,
     163,    27,    28,    29,   161,   163,   163,    27,   157,    28,
     157,    29,   157,    27,    28,    29,   133,   158,   158,   161,
     137,   135,   135,   135,   135,   135,   135,   135,   135,   145,
     148,   135,   135,   135,   135,   161,   137,    27,   161,    27,
     161,    27,   161,    27,   161,    27,   161,    27,   161,    27,
     161,    27,   161,    64,    75,    76,    82,    83,   146,   150,
     162,    83,   149,   162,   161,   161,   161,   161,   134,   162,
     161,   161,   161,   131,    64,   132,   147,   131,    10,    81,
      81,    81,   162,   150,   161
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 685 "djasm.y"
    { lineno++; pc_symbol.value=pc; ;}
    break;

  case 4:
#line 686 "djasm.y"
    { strbuf[strbuflen]=0; do_include(strbuf); ;}
    break;

  case 5:
#line 687 "djasm.y"
    { strbuf[strbuflen]=0; do_include(strbuf); ;}
    break;

  case 7:
#line 693 "djasm.y"
    { set_symbol((yyvsp[(1) - (2)].sym), pc)->type |= (pc?SYM_data:SYM_code); ;}
    break;

  case 8:
#line 694 "djasm.y"
    { set_symbol((yyvsp[(1) - (3)].sym), (yyvsp[(3) - (3)].i))->type = SYM_abs; ;}
    break;

  case 9:
#line 695 "djasm.y"
    { struct_pc=0;
					  struct_tp=(yyvsp[(1) - (3)].i);
					  struct_sym=(yyvsp[(2) - (3)].sym)->name;
					  lineno++;
					  (yyval.sym)=symtab;
					  symtab=symtab->next;
					;}
    break;

  case 10:
#line 703 "djasm.y"
    { set_symbol((yyvsp[(2) - (6)].sym), struct_pc)->type = SYM_abs;
					  (yyvsp[(4) - (6)].sym)->next=symtab;
					  symtab=(yyvsp[(4) - (6)].sym);
	  				;}
    break;

  case 11:
#line 707 "djasm.y"
    { struct_pc=0;
					  struct_sym=(yyvsp[(2) - (3)].sym)->name;
					  lineno++;
					  (yyval.sym)=symtab;
					  if (symtab==(yyvsp[(2) - (3)].sym))
					      symtab=symtab->next;
					;}
    break;

  case 13:
#line 716 "djasm.y"
    { emit_struct((yyvsp[(1) - (3)].sym),(yyvsp[(2) - (3)].i),(yyvsp[(3) - (3)].sym)); ;}
    break;

  case 14:
#line 717 "djasm.y"
    { emit_struct_abs((yyvsp[(1) - (6)].sym),(yyvsp[(2) - (6)].i),(yyvsp[(3) - (6)].sym),(yyvsp[(5) - (6)].i)); ;}
    break;

  case 16:
#line 720 "djasm.y"
    { emitb((yyvsp[(1) - (1)].i)); ;}
    break;

  case 17:
#line 721 "djasm.y"
    { emitb((yyvsp[(1) - (1)].i)>>8); emitb((yyvsp[(1) - (1)].i) & 0xff); ;}
    break;

  case 18:
#line 723 "djasm.y"
    { bsspc = pc; generated_bytes = last_align_end == pc ? last_align_begin : pc; ;}
    break;

  case 19:
#line 725 "djasm.y"
    { emitb(sreg_overrides[(yyvsp[(1) - (2)].i)]); ;}
    break;

  case 20:
#line 727 "djasm.y"
    { emitb(0x80), reg((yyvsp[(1) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 21:
#line 728 "djasm.y"
    { if ((yyvsp[(2) - (4)].i))
					      {emitb(0x80), modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i));}
					  else
					      modrm (0,(yyvsp[(1) - (4)].i),4); 
					  emitb	((yyvsp[(4) - (4)].i));
					;}
    break;

  case 22:
#line 734 "djasm.y"
    { emitb((yyvsp[(1) - (4)].i)*8); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 23:
#line 735 "djasm.y"
    { emitb((yyvsp[(1) - (4)].i)*8); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 24:
#line 736 "djasm.y"
    { emitb((yyvsp[(1) - (4)].i)*8+2); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 25:
#line 738 "djasm.y"
    { emitb(0x81); reg((yyvsp[(1) - (4)].i)); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); ;}
    break;

  case 26:
#line 739 "djasm.y"
    { if ((yyvsp[(2) - (4)].i)) {
					      int v=(yyvsp[(4) - (4)].relsym).ofs+(yyvsp[(4) - (4)].relsym).sym->value;
					      if ((yyvsp[(4) - (4)].relsym).sym->defined && v>=-128 && v<=127) {
						  emitb(0x83); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i));
						  emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs8);
					      } else {
						  emitb(0x81); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i));
						  emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs);
					      }
					  } else {
					      modrm (0,(yyvsp[(1) - (4)].i),5);
					      emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs);
					  }
					;}
    break;

  case 27:
#line 753 "djasm.y"
    { emitb((yyvsp[(1) - (4)].i)*8+1); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 28:
#line 754 "djasm.y"
    { emitb((yyvsp[(1) - (4)].i)*8+1); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 29:
#line 755 "djasm.y"
    { emitb((yyvsp[(1) - (4)].i)*8+3); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 30:
#line 757 "djasm.y"
    { emitb(0x66); emitb(0x81); reg((yyvsp[(1) - (4)].i)); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); ;}
    break;

  case 31:
#line 758 "djasm.y"
    { emitb(0x66);
					  if ((yyvsp[(2) - (4)].i)) {
					      int v=(yyvsp[(4) - (4)].relsym).ofs+(yyvsp[(4) - (4)].relsym).sym->value;
					      if ((yyvsp[(4) - (4)].relsym).sym->defined && v>=-128 && v<=127) {
						  emitb(0x83); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i));
						  emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs8);
					      } else {
						  emitb(0x81); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i));
						  emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32);
					      }
					  } else {
					      modrm (0,(yyvsp[(1) - (4)].i),5);
					      emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32);
					  }
					;}
    break;

  case 32:
#line 773 "djasm.y"
    { emitb(0x66); emitb((yyvsp[(1) - (4)].i)*8+1); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 33:
#line 774 "djasm.y"
    { emitb(0x66); emitb((yyvsp[(1) - (4)].i)*8+1); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 34:
#line 775 "djasm.y"
    { emitb(0x66); emitb((yyvsp[(1) - (4)].i)*8+3); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 35:
#line 777 "djasm.y"
    { emitb(0x63); modrm(3,(yyvsp[(4) - (4)].i),(yyvsp[(2) - (4)].i)); ;}
    break;

  case 36:
#line 778 "djasm.y"
    { emitb(0x63); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 37:
#line 780 "djasm.y"
    { emitb((yyvsp[(1) - (1)].i)); emitb(0x0a); ;}
    break;

  case 38:
#line 781 "djasm.y"
    { emitb((yyvsp[(1) - (2)].i)); emitb((yyvsp[(2) - (2)].i)); ;}
    break;

  case 39:
#line 783 "djasm.y"
    { do_align((yyvsp[(2) - (2)].i),0x90); ;}
    break;

  case 40:
#line 784 "djasm.y"
    { do_align((yyvsp[(2) - (4)].i),(yyvsp[(4) - (4)].i)); ;}
    break;

  case 41:
#line 786 "djasm.y"
    { emitb(0x62); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 42:
#line 787 "djasm.y"
    { emitb(0x66); emitb(0x62); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 43:
#line 789 "djasm.y"
    { emitb(0x0f); emitb((yyvsp[(1) - (4)].i)*8+0x83); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 44:
#line 790 "djasm.y"
    { emitb(0x0f); emitb((yyvsp[(1) - (4)].i)*8+0x83); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 45:
#line 791 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (4)].i)*8+0x83); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 46:
#line 792 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (4)].i)*8+0x83); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 47:
#line 793 "djasm.y"
    { emitb(0x0f); emitb(0xba); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 48:
#line 794 "djasm.y"
    { emitb(0x0f); emitb(0xba); reg((yyvsp[(1) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 49:
#line 795 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xba); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 50:
#line 797 "djasm.y"
    { emitb(0x0f); emitb(0xbc); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 51:
#line 798 "djasm.y"
    { emitb(0x0f); emitb(0xbc); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 52:
#line 799 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xbc); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 53:
#line 800 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xbc); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 54:
#line 802 "djasm.y"
    { emitb(0x0f); emitb(0xbd); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 55:
#line 803 "djasm.y"
    { emitb(0x0f); emitb(0xbd); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 56:
#line 804 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xbd); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 57:
#line 805 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xbd); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 58:
#line 807 "djasm.y"
    { emitb(0xe8); emits((yyvsp[(2) - (2)].sym),0,REL_16); (yyvsp[(2) - (2)].sym)->type |= SYM_code; ;}
    break;

  case 59:
#line 808 "djasm.y"
    { emitb(0xff); modrm(3,2,(yyvsp[(2) - (2)].i)); ;}
    break;

  case 60:
#line 809 "djasm.y"
    { emitb(0xff); reg(2); ;}
    break;

  case 61:
#line 810 "djasm.y"
    { emitb(0xff); reg(3); ;}
    break;

  case 62:
#line 811 "djasm.y"
    { emitb(0x9a); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); emitw((yyvsp[(2) - (4)].i)); ;}
    break;

  case 63:
#line 812 "djasm.y"
    { emitb(0x66); emitb(0x9a); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); emitw((yyvsp[(2) - (4)].i)); ;}
    break;

  case 64:
#line 814 "djasm.y"
    { strbuf[strbuflen] = 0; add_copyright(strbuf); ;}
    break;

  case 65:
#line 815 "djasm.y"
    { add_rcs_ident(); ;}
    break;

  case 69:
#line 821 "djasm.y"
    { emitb(0xfe); modrm(3, 1, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 70:
#line 822 "djasm.y"
    { emitb(0xfe); reg(1); ;}
    break;

  case 71:
#line 823 "djasm.y"
    { emitb(0x48 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 72:
#line 824 "djasm.y"
    { emitb(0x66); emitb(0x48 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 73:
#line 825 "djasm.y"
    { emitb(0xff); reg(1); ;}
    break;

  case 74:
#line 826 "djasm.y"
    { emitb(0x66); emitb(0xff); reg(1); ;}
    break;

  case 75:
#line 828 "djasm.y"
    { emitb(0xc8); emitw((yyvsp[(2) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 76:
#line 830 "djasm.y"
    { emitb(0xe4); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 77:
#line 831 "djasm.y"
    { emitb(0xe5); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 78:
#line 832 "djasm.y"
    { emitb(0x66); emitb(0xe5); emitb((yyvsp[(4) - (4)].i));;}
    break;

  case 79:
#line 833 "djasm.y"
    { emitb(0xec); ;}
    break;

  case 80:
#line 834 "djasm.y"
    { emitb(0xed); ;}
    break;

  case 81:
#line 835 "djasm.y"
    { emitb(0x66); emitb(0xed); ;}
    break;

  case 82:
#line 837 "djasm.y"
    { emitb(0xfe); modrm(3, 0, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 83:
#line 838 "djasm.y"
    { emitb(0xfe); reg(0); ;}
    break;

  case 84:
#line 839 "djasm.y"
    { emitb(0x40 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 85:
#line 840 "djasm.y"
    { emitb(0x66); emitb(0x40 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 86:
#line 841 "djasm.y"
    { emitb(0xff); reg(0); ;}
    break;

  case 87:
#line 842 "djasm.y"
    { emitb(0x66); emitb(0xff); reg(0); ;}
    break;

  case 88:
#line 844 "djasm.y"
    { emitb(0xf6); modrm(3, 5, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 89:
#line 845 "djasm.y"
    { emitb(0xf6); reg(5); ;}
    break;

  case 90:
#line 846 "djasm.y"
    { emitb(0xf7); modrm(3, 5, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 91:
#line 847 "djasm.y"
    { emitb(0xf7); reg(5); ;}
    break;

  case 92:
#line 848 "djasm.y"
    { emitb(0x66); emitb(0xf7); modrm(3, 5, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 93:
#line 849 "djasm.y"
    { emitb(0x66); emitb(0xf7); reg(5); ;}
    break;

  case 94:
#line 850 "djasm.y"
    { emitb(0x0f); emitb(0xaf); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i));;}
    break;

  case 95:
#line 851 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xaf); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i));;}
    break;

  case 96:
#line 852 "djasm.y"
    { emitb(0x0f); emitb(0xaf); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 97:
#line 853 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb(0xaf); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 98:
#line 854 "djasm.y"
    { if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb(0x6b);
					  else
					      emitb(0x69);
					  modrm(3, (yyvsp[(2) - (6)].i), (yyvsp[(4) - (6)].i));
					  if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb((yyvsp[(6) - (6)].i));
					  else
					      emitw((yyvsp[(6) - (6)].i));
					;}
    break;

  case 99:
#line 864 "djasm.y"
    { emitb(0x66);
					  if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb(0x6b);
					  else
					      emitb(0x69);
					  modrm(3, (yyvsp[(2) - (6)].i), (yyvsp[(4) - (6)].i));
					  if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb((yyvsp[(6) - (6)].i)&0xff);
					  else
					      emitd((yyvsp[(6) - (6)].i));
					;}
    break;

  case 100:
#line 876 "djasm.y"
    { if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb(0x6b);
					  else
					      emitb(0x69);
					  reg((yyvsp[(2) - (6)].i));
					  if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb((yyvsp[(6) - (6)].i));
					  else
					      emitw((yyvsp[(6) - (6)].i));
					;}
    break;

  case 101:
#line 886 "djasm.y"
    { emitb(0x66);
					  if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb(0x6b);
					  else
					      emitb(0x69);
					  reg((yyvsp[(2) - (6)].i));
					  if ((yyvsp[(6) - (6)].i)>=-128 && (yyvsp[(6) - (6)].i)<=127)
					      emitb((yyvsp[(6) - (6)].i)&0xff);
					  else
					      emitd((yyvsp[(6) - (6)].i));
					;}
    break;

  case 102:
#line 898 "djasm.y"
    { emitb(0xf6); modrm(3, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); ;}
    break;

  case 103:
#line 899 "djasm.y"
    { emitb(0xf6); reg((yyvsp[(1) - (2)].i)); ;}
    break;

  case 104:
#line 900 "djasm.y"
    { emitb(0xf7); modrm(3, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); ;}
    break;

  case 105:
#line 901 "djasm.y"
    { emitb(0xf7); reg((yyvsp[(1) - (2)].i)); ;}
    break;

  case 106:
#line 902 "djasm.y"
    { emitb(0x66); emitb(0xf7); modrm(3, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); ;}
    break;

  case 107:
#line 903 "djasm.y"
    { emitb(0x66); emitb(0xf7); reg((yyvsp[(1) - (2)].i)); ;}
    break;

  case 108:
#line 905 "djasm.y"
    { emitb(0x0f); emitb(0x00); reg((yyvsp[(1) - (2)].i)); ;}
    break;

  case 109:
#line 906 "djasm.y"
    { emitb(0x0f); emitb(0x00); modrm(3, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); ;}
    break;

  case 110:
#line 907 "djasm.y"
    { emitb(0x0f); emitb(0x01); reg((yyvsp[(1) - (2)].i)); ;}
    break;

  case 111:
#line 908 "djasm.y"
    { emitb(0x0f); emitb(0x01); modrm(3, (yyvsp[(1) - (2)].i), (yyvsp[(2) - (2)].i)); ;}
    break;

  case 112:
#line 910 "djasm.y"
    { if ((yyvsp[(2) - (2)].i) == 3) emitb(0xcc); else emitb(0xcd), emitb((yyvsp[(2) - (2)].i)); ;}
    break;

  case 113:
#line 912 "djasm.y"
    { emitb(0x70+(yyvsp[(1) - (2)].i)); emits((yyvsp[(2) - (2)].sym),0,REL_8); (yyvsp[(2) - (2)].sym)->type |= SYM_code; ;}
    break;

  case 114:
#line 913 "djasm.y"
    { emitb(0x0f); emitb(0x80+(yyvsp[(1) - (2)].i)); emits((yyvsp[(2) - (2)].sym),0,REL_16); (yyvsp[(2) - (2)].sym)->type |= SYM_code; ;}
    break;

  case 115:
#line 915 "djasm.y"
    { if ((yyvsp[(1) - (2)].i)) emitb(0x66); emitb(0xe3); emits((yyvsp[(2) - (2)].sym),0,REL_8); (yyvsp[(2) - (2)].sym)->type |= SYM_code; ;}
    break;

  case 116:
#line 917 "djasm.y"
    { emitb(0xe9); emits((yyvsp[(2) - (2)].sym),0,REL_16); (yyvsp[(2) - (2)].sym)->type |= SYM_code; ;}
    break;

  case 117:
#line 918 "djasm.y"
    { emitb(0xeb); emits((yyvsp[(2) - (2)].sym),0,REL_8); (yyvsp[(2) - (2)].sym)->type |= SYM_code; ;}
    break;

  case 118:
#line 919 "djasm.y"
    { emitb(0xff); modrm(3,4,(yyvsp[(2) - (2)].i)); ;}
    break;

  case 119:
#line 920 "djasm.y"
    { emitb(0xff); reg(4); ;}
    break;

  case 120:
#line 921 "djasm.y"
    { emitb(0xff); reg(5); ;}
    break;

  case 121:
#line 922 "djasm.y"
    { emitb(0xea); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); emitw((yyvsp[(2) - (4)].i)); ;}
    break;

  case 122:
#line 923 "djasm.y"
    { emitb(0x66); emitb(0xea); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); emitw((yyvsp[(2) - (4)].i)); ;}
    break;

  case 123:
#line 925 "djasm.y"
    { emitb(0x0f); emitb(0x02); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 124:
#line 926 "djasm.y"
    { emitb(0x0f); emitb(0x02); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 125:
#line 928 "djasm.y"
    { emitb(0x8d); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 126:
#line 929 "djasm.y"
    { emitb(0x66); emitb(0x8d); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 127:
#line 931 "djasm.y"
    { strbuf[strbuflen]=0; do_linkcoff(strbuf); ;}
    break;

  case 128:
#line 932 "djasm.y"
    { emitb((yyvsp[(1) - (2)].i)); emits((yyvsp[(2) - (2)].sym),0,REL_8); ;}
    break;

  case 129:
#line 934 "djasm.y"
    { emitb(0x0f); emitb(0x03); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 130:
#line 935 "djasm.y"
    { emitb(0x0f); emitb(0x03); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 131:
#line 937 "djasm.y"
    { if ((yyvsp[(1) - (4)].i)>>8) emitb((yyvsp[(1) - (4)].i)>>8); emitb((yyvsp[(1) - (4)].i) & 0xff); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 132:
#line 938 "djasm.y"
    { emitb(0x66); if ((yyvsp[(1) - (4)].i)>>8) emitb((yyvsp[(1) - (4)].i)>>8); emitb((yyvsp[(1) - (4)].i) & 0xff); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 133:
#line 940 "djasm.y"
    { emitb(0xc6), reg(0); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 134:
#line 941 "djasm.y"
    { emitb(0xb0+(yyvsp[(2) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 135:
#line 942 "djasm.y"
    { emitb(0x88), modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 136:
#line 943 "djasm.y"
    { if ((yyvsp[(4) - (4)].i)==0 && _modrm.regs==0)
					      movacc=0xa2;
					  else
					      emitb(0x88); 
					  reg((yyvsp[(4) - (4)].i)); 
					;}
    break;

  case 137:
#line 949 "djasm.y"
    { if ((yyvsp[(2) - (4)].i)==0 && _modrm.regs==0)
					      movacc=0xa0;
					  else
					      emitb(0x8a);
					  reg((yyvsp[(2) - (4)].i));
					;}
    break;

  case 138:
#line 955 "djasm.y"
    { emitb(0xc7); reg(0); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); ;}
    break;

  case 139:
#line 956 "djasm.y"
    { emitb(0xb8+(yyvsp[(2) - (4)].i)); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); ;}
    break;

  case 140:
#line 957 "djasm.y"
    { emitb(0x89); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 141:
#line 958 "djasm.y"
    { if ((yyvsp[(4) - (4)].i)==0 && _modrm.regs==0)
					      movacc=0xa3;
					  else
					      emitb(0x89);
					  reg((yyvsp[(4) - (4)].i)); 
					;}
    break;

  case 142:
#line 964 "djasm.y"
    { if ((yyvsp[(2) - (4)].i)==0 && _modrm.regs==0)
					      movacc=0xa1;
					  else
					      emitb(0x8b);
					  reg((yyvsp[(2) - (4)].i));
					;}
    break;

  case 143:
#line 970 "djasm.y"
    { emitb(0x66); emitb(0xc7); reg(0); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); ;}
    break;

  case 144:
#line 971 "djasm.y"
    { emitb(0x66); emitb(0xb8+(yyvsp[(2) - (4)].i)); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); ;}
    break;

  case 145:
#line 972 "djasm.y"
    { emitb(0x66); emitb(0x89); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 146:
#line 973 "djasm.y"
    { emitb(0x66);
					  if ((yyvsp[(4) - (4)].i)==0 && _modrm.regs==0)
					      movacc=0xa3;
					  else
					      emitb(0x89);
					  reg((yyvsp[(4) - (4)].i));
					;}
    break;

  case 147:
#line 980 "djasm.y"
    { emitb(0x66);
					  if ((yyvsp[(2) - (4)].i)==0 && _modrm.regs==0)
					      movacc=0xa1;
					  else
					      emitb(0x8b);
					  reg((yyvsp[(2) - (4)].i));
					;}
    break;

  case 148:
#line 987 "djasm.y"
    { emitb(0x8c); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 149:
#line 988 "djasm.y"
    { emitb(0x8c); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 150:
#line 989 "djasm.y"
    { emitb(0x8e); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 151:
#line 990 "djasm.y"
    { emitb(0x8e); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 152:
#line 992 "djasm.y"
    { emitb(0x0f); emitb(0x22); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 153:
#line 993 "djasm.y"
    { emitb(0x0f); emitb(0x23); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 154:
#line 994 "djasm.y"
    { emitb(0x0f); emitb(0x26); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 155:
#line 995 "djasm.y"
    { emitb(0x0f); emitb(0x20); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 156:
#line 996 "djasm.y"
    { emitb(0x0f); emitb(0x21); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 157:
#line 997 "djasm.y"
    { emitb(0x0f); emitb(0x24); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 158:
#line 999 "djasm.y"
    { emitb(0x0f); emitb((yyvsp[(1) - (4)].i)); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 159:
#line 1000 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (4)].i)); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 160:
#line 1001 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (4)].i)+1); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 161:
#line 1003 "djasm.y"
    { emitb(0x0f); emitb((yyvsp[(1) - (4)].i)); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 162:
#line 1004 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (4)].i)); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 163:
#line 1005 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (4)].i)+1); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 164:
#line 1007 "djasm.y"
    { if (pc > (yyvsp[(2) - (2)].i)) djerror ("Backwards org directive"); else while (pc < (yyvsp[(2) - (2)].i)) emitb(0x90); ;}
    break;

  case 165:
#line 1008 "djasm.y"
    { if (pc > (yyvsp[(2) - (4)].i)) djerror ("Backwards org directive"); else while (pc < (yyvsp[(2) - (4)].i)) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 166:
#line 1010 "djasm.y"
    { emitb(0xe6); emitb((yyvsp[(2) - (4)].i)); ;}
    break;

  case 167:
#line 1011 "djasm.y"
    { emitb(0xe7); emitb((yyvsp[(2) - (4)].i)); ;}
    break;

  case 168:
#line 1012 "djasm.y"
    { emitb(0x66); emitb(0xe7); emitb((yyvsp[(2) - (4)].i));;}
    break;

  case 169:
#line 1013 "djasm.y"
    { emitb(0xee); ;}
    break;

  case 170:
#line 1014 "djasm.y"
    { emitb(0xef); ;}
    break;

  case 171:
#line 1015 "djasm.y"
    { emitb(0x66); emitb(0xef); ;}
    break;

  case 172:
#line 1017 "djasm.y"
    { emitb(0x58 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 173:
#line 1018 "djasm.y"
    { emitb(0x66); emitb(0x58 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 174:
#line 1019 "djasm.y"
    { do_sreg_pop((yyvsp[(2) - (2)].i)); ;}
    break;

  case 175:
#line 1020 "djasm.y"
    { emitb(0x8f); reg(0); ;}
    break;

  case 176:
#line 1021 "djasm.y"
    { emitb(0x66); emitb(0x8f); reg(0); ;}
    break;

  case 177:
#line 1022 "djasm.y"
    { emitb(0x50 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 178:
#line 1023 "djasm.y"
    { emitb(0x66); emitb(0x50 + (yyvsp[(2) - (2)].i)); ;}
    break;

  case 179:
#line 1024 "djasm.y"
    { do_sreg_push((yyvsp[(2) - (2)].i)); ;}
    break;

  case 180:
#line 1025 "djasm.y"
    { emitb(0xff); reg(6); ;}
    break;

  case 181:
#line 1026 "djasm.y"
    { emitb(0x66); emitb(0xff); reg(6); ;}
    break;

  case 182:
#line 1027 "djasm.y"
    { emitb(0x6a); emitb((yyvsp[(2) - (2)].i)); ;}
    break;

  case 183:
#line 1028 "djasm.y"
    { emitb(0x68); emits((yyvsp[(2) - (2)].relsym).sym,(yyvsp[(2) - (2)].relsym).ofs,REL_abs); ;}
    break;

  case 184:
#line 1029 "djasm.y"
    { emitb(0x66); emitb(0x68); emits((yyvsp[(2) - (2)].relsym).sym,(yyvsp[(2) - (2)].relsym).ofs,REL_abs32); ;}
    break;

  case 185:
#line 1031 "djasm.y"
    { emitb(0xc3); ;}
    break;

  case 186:
#line 1032 "djasm.y"
    { emitb(0xc2); emitw((yyvsp[(2) - (2)].i)); ;}
    break;

  case 187:
#line 1033 "djasm.y"
    { emitb(0xcb); ;}
    break;

  case 188:
#line 1034 "djasm.y"
    { emitb(0xca); emitw((yyvsp[(2) - (2)].i)); ;}
    break;

  case 189:
#line 1035 "djasm.y"
    { emitb(0x66); emitb(0xc3); ;}
    break;

  case 190:
#line 1036 "djasm.y"
    { emitb(0x66); emitb(0xc2); emitd((yyvsp[(2) - (2)].i)); ;}
    break;

  case 191:
#line 1037 "djasm.y"
    { emitb(0x66); emitb(0xcb); ;}
    break;

  case 192:
#line 1038 "djasm.y"
    { emitb(0x66); emitb(0xca); emitd((yyvsp[(2) - (2)].i)); ;}
    break;

  case 193:
#line 1040 "djasm.y"
    { emitb(0x0f); emitb(0x90+(yyvsp[(1) - (2)].i)); modrm(3, 0, (yyvsp[(2) - (2)].i)); ;}
    break;

  case 194:
#line 1041 "djasm.y"
    { emitb(0x0f); emitb(0x90+(yyvsp[(1) - (2)].i)); reg(0); ;}
    break;

  case 195:
#line 1044 "djasm.y"
    { emitb((yyvsp[(4) - (4)].i) == 1 ? 0xd0 : 0xc0); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); if ((yyvsp[(4) - (4)].i) != 1) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 196:
#line 1045 "djasm.y"
    { if ((yyvsp[(4) - (4)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0xd2); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 197:
#line 1046 "djasm.y"
    { emitb((yyvsp[(4) - (4)].i) == 1 ? 0xd0 : 0xc0); reg((yyvsp[(1) - (4)].i)); if ((yyvsp[(4) - (4)].i) != 1) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 198:
#line 1047 "djasm.y"
    { if ((yyvsp[(4) - (4)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0xd2); reg((yyvsp[(1) - (4)].i)); ;}
    break;

  case 199:
#line 1048 "djasm.y"
    { emitb((yyvsp[(4) - (4)].i) == 1 ? 0xd1 : 0xc1); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); if ((yyvsp[(4) - (4)].i) != 1) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 200:
#line 1049 "djasm.y"
    { if ((yyvsp[(4) - (4)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0xd3); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 201:
#line 1050 "djasm.y"
    { emitb((yyvsp[(4) - (4)].i) == 1 ? 0xd1 : 0xc1); reg((yyvsp[(1) - (4)].i)); if ((yyvsp[(4) - (4)].i) != 1) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 202:
#line 1051 "djasm.y"
    { if ((yyvsp[(4) - (4)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0xd3); reg((yyvsp[(1) - (4)].i)); ;}
    break;

  case 203:
#line 1052 "djasm.y"
    { emitb(0x66); emitb((yyvsp[(4) - (4)].i) == 1 ? 0xd1 : 0xc1); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); if ((yyvsp[(4) - (4)].i) != 1) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 204:
#line 1053 "djasm.y"
    { if ((yyvsp[(4) - (4)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0x66); emitb(0xd3); modrm(3, (yyvsp[(1) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 205:
#line 1054 "djasm.y"
    { emitb(0x66); emitb((yyvsp[(4) - (4)].i) == 1 ? 0xd1 : 0xc1); reg((yyvsp[(1) - (4)].i)); if ((yyvsp[(4) - (4)].i) != 1) emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 206:
#line 1055 "djasm.y"
    { if ((yyvsp[(4) - (4)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0x66); emitb(0xd3); reg((yyvsp[(1) - (4)].i)); ;}
    break;

  case 207:
#line 1065 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 208:
#line 1066 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 209:
#line 1067 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 210:
#line 1068 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 211:
#line 1069 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 212:
#line 1070 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 213:
#line 1071 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 214:
#line 1072 "djasm.y"
    { shxd_error((yyvsp[(1) - (6)].i)); ;}
    break;

  case 215:
#line 1080 "djasm.y"
    { emitb(0x0f); emitb((yyvsp[(1) - (6)].i)); modrm(3, (yyvsp[(4) - (6)].i), (yyvsp[(2) - (6)].i)); emitb((yyvsp[(6) - (6)].i)); ;}
    break;

  case 216:
#line 1081 "djasm.y"
    { if ((yyvsp[(6) - (6)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0x0f); emitb((yyvsp[(1) - (6)].i)+1); modrm(3, (yyvsp[(4) - (6)].i), (yyvsp[(2) - (6)].i)); ;}
    break;

  case 217:
#line 1082 "djasm.y"
    { emitb(0x0f); emitb((yyvsp[(1) - (6)].i)); reg((yyvsp[(4) - (6)].i)); emitb((yyvsp[(6) - (6)].i)); ;}
    break;

  case 218:
#line 1083 "djasm.y"
    { if ((yyvsp[(6) - (6)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0x0f); emitb((yyvsp[(1) - (6)].i)+1); reg((yyvsp[(4) - (6)].i)); ;}
    break;

  case 219:
#line 1086 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (6)].i)); modrm(3, (yyvsp[(4) - (6)].i), (yyvsp[(2) - (6)].i)); emitb((yyvsp[(6) - (6)].i)); ;}
    break;

  case 220:
#line 1087 "djasm.y"
    { if ((yyvsp[(6) - (6)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (6)].i)+1); modrm(3, (yyvsp[(4) - (6)].i), (yyvsp[(2) - (6)].i)); ;}
    break;

  case 221:
#line 1088 "djasm.y"
    { emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (6)].i)); reg((yyvsp[(4) - (6)].i)); emitb((yyvsp[(6) - (6)].i)); ;}
    break;

  case 222:
#line 1089 "djasm.y"
    { if ((yyvsp[(6) - (6)].i) != 1) djerror ("Non-constant shift count must be `cl'"); emitb(0x66); emitb(0x0f); emitb((yyvsp[(1) - (6)].i)+1); reg((yyvsp[(4) - (6)].i)); ;}
    break;

  case 223:
#line 1091 "djasm.y"
    { stack_ptr = pc; ;}
    break;

  case 224:
#line 1092 "djasm.y"
    { start_ptr = pc; main_obj=1; ;}
    break;

  case 225:
#line 1094 "djasm.y"
    { emitb(0xf6), reg(0); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 226:
#line 1095 "djasm.y"
    { emitb(0xf6), modrm(3, 0, (yyvsp[(2) - (4)].i)); emitb((yyvsp[(4) - (4)].i)); ;}
    break;

  case 227:
#line 1096 "djasm.y"
    { emitb(0x84), modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 228:
#line 1097 "djasm.y"
    { emitb(0x84), reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 229:
#line 1098 "djasm.y"
    { emitb(0x84), reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 230:
#line 1100 "djasm.y"
    { emitb(0xf7); reg(0); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); ;}
    break;

  case 231:
#line 1101 "djasm.y"
    { emitb(0xf7); modrm(3, 0, (yyvsp[(2) - (4)].i)); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs); ;}
    break;

  case 232:
#line 1102 "djasm.y"
    { emitb(0x85); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 233:
#line 1103 "djasm.y"
    { emitb(0x85); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 234:
#line 1104 "djasm.y"
    { emitb(0x85); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 235:
#line 1106 "djasm.y"
    { emitb(0x66); emitb(0xf7); reg(0); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); ;}
    break;

  case 236:
#line 1107 "djasm.y"
    { emitb(0x66); emitb(0xf7); modrm(3, 0, (yyvsp[(2) - (4)].i)); emits((yyvsp[(4) - (4)].relsym).sym,(yyvsp[(4) - (4)].relsym).ofs,REL_abs32); ;}
    break;

  case 237:
#line 1108 "djasm.y"
    { emitb(0x66); emitb(0x85); modrm(3, (yyvsp[(4) - (4)].i), (yyvsp[(2) - (4)].i)); ;}
    break;

  case 238:
#line 1109 "djasm.y"
    { emitb(0x66); emitb(0x85); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 239:
#line 1110 "djasm.y"
    { emitb(0x66); emitb(0x85); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 240:
#line 1112 "djasm.y"
    { strbuf[strbuflen] = 0; set_image_type(strbuf); ;}
    break;

  case 241:
#line 1113 "djasm.y"
    { if ((yyvsp[(2) - (2)].i) == 'h') set_out_type("h"); ;}
    break;

  case 242:
#line 1115 "djasm.y"
    { emitb(0x86); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); ;}
    break;

  case 243:
#line 1116 "djasm.y"
    { emitb(0x86); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 244:
#line 1117 "djasm.y"
    { emitb(0x86); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 245:
#line 1118 "djasm.y"
    { if (((yyvsp[(2) - (4)].i)==0) ^	((yyvsp[(4) - (4)].i)==0))
					      emitb(0x90+(yyvsp[(2) - (4)].i)+(yyvsp[(4) - (4)].i));
					  else
					      {emitb(0x87); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); }
					;}
    break;

  case 246:
#line 1123 "djasm.y"
    { emitb(0x87); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 247:
#line 1124 "djasm.y"
    { emitb(0x87); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 248:
#line 1125 "djasm.y"
    { emitb(0x66);
					  if (((yyvsp[(2) - (4)].i)==0) ^	((yyvsp[(4) - (4)].i)==0))
					      emitb(0x90+(yyvsp[(2) - (4)].i)+(yyvsp[(4) - (4)].i));
					  else
					      {emitb(0x87); modrm(3, (yyvsp[(2) - (4)].i), (yyvsp[(4) - (4)].i)); }
					;}
    break;

  case 249:
#line 1131 "djasm.y"
    { emitb(0x66); emitb(0x87); reg((yyvsp[(2) - (4)].i)); ;}
    break;

  case 250:
#line 1132 "djasm.y"
    { emitb(0x66); emitb(0x87); reg((yyvsp[(4) - (4)].i)); ;}
    break;

  case 252:
#line 1137 "djasm.y"
    { lineno++; ;}
    break;

  case 254:
#line 1142 "djasm.y"
    { add_struct_element((yyvsp[(1) - (2)].sym)); ;}
    break;

  case 255:
#line 1143 "djasm.y"
    { build_struct((yyvsp[(1) - (3)].sym),(yyvsp[(2) - (3)].i),(yyvsp[(3) - (3)].sym)); ;}
    break;

  case 256:
#line 1144 "djasm.y"
    { build_struct(0,(yyvsp[(1) - (2)].i),(yyvsp[(2) - (2)].sym)); ;}
    break;

  case 258:
#line 1146 "djasm.y"
    { add_struct_element((yyvsp[(1) - (1)].sym)); ;}
    break;

  case 261:
#line 1152 "djasm.y"
    { lineno++; ;}
    break;

  case 263:
#line 1157 "djasm.y"
    { add_enum_element((yyvsp[(1) - (1)].sym)); ;}
    break;

  case 264:
#line 1158 "djasm.y"
    { struct_pc = (yyvsp[(3) - (3)].i); add_enum_element((yyvsp[(1) - (3)].sym)); ;}
    break;

  case 265:
#line 1162 "djasm.y"
    { if (struct_tp=='s') {
					      struct_pc++;
					  } else {
					      struct_pc=MAX(struct_pc,1);
					  }
					;}
    break;

  case 266:
#line 1168 "djasm.y"
    { if (struct_tp=='s') {
					      struct_pc+=(yyvsp[(2) - (3)].i);
					  } else {
					      struct_pc=MAX(struct_pc,(yyvsp[(2) - (3)].i));
					  }
					;}
    break;

  case 267:
#line 1174 "djasm.y"
    { if (struct_tp=='s') {
					      struct_pc+=2;
					  } else {
					      struct_pc=MAX(struct_pc,2);
					  }
					;}
    break;

  case 268:
#line 1180 "djasm.y"
    { if (struct_tp=='s') {
					      struct_pc+=2*(yyvsp[(2) - (3)].i);
					  } else {
					      struct_pc=MAX(struct_pc,2*(yyvsp[(2) - (3)].i));
					  }
					;}
    break;

  case 269:
#line 1186 "djasm.y"
    { if (struct_tp=='s') {
					      struct_pc+=4;
					  } else {
					      struct_pc=MAX(struct_pc,4);
					  }
					;}
    break;

  case 270:
#line 1192 "djasm.y"
    { if (struct_tp=='s') {
					      struct_pc+=4*(yyvsp[(2) - (3)].i);
					  } else {
					      struct_pc=MAX(struct_pc,4*(yyvsp[(2) - (3)].i));
					  }
					;}
    break;

  case 271:
#line 1202 "djasm.y"
    { emitb((yyvsp[(1) - (1)].i)); ;}
    break;

  case 272:
#line 1203 "djasm.y"
    { emit(strbuf, strbuflen); ;}
    break;

  case 273:
#line 1204 "djasm.y"
    { for (i=0; i<(yyvsp[(1) - (3)].i); i++) emitb((yyvsp[(3) - (3)].i)); ;}
    break;

  case 276:
#line 1213 "djasm.y"
    { emitw((yyvsp[(1) - (1)].i)); ;}
    break;

  case 277:
#line 1214 "djasm.y"
    { emits((yyvsp[(1) - (2)].sym),(yyvsp[(2) - (2)].i),REL_abs); ;}
    break;

  case 278:
#line 1215 "djasm.y"
    { for (i=0; i<(yyvsp[(1) - (3)].i); i++) emitw((yyvsp[(3) - (3)].i)); ;}
    break;

  case 281:
#line 1224 "djasm.y"
    { emitd((yyvsp[(1) - (1)].i)); ;}
    break;

  case 282:
#line 1225 "djasm.y"
    { emits((yyvsp[(1) - (2)].sym),(yyvsp[(2) - (2)].i),REL_abs32); ;}
    break;

  case 283:
#line 1226 "djasm.y"
    { for (i=0; i<(yyvsp[(1) - (3)].i); i++) emitd((yyvsp[(3) - (3)].i)); ;}
    break;

  case 288:
#line 1237 "djasm.y"
    { emitb(sreg_overrides[(yyvsp[(1) - (5)].i)]); ;}
    break;

  case 291:
#line 1243 "djasm.y"
    { _modrm.offset -= (yyvsp[(3) - (3)].i); ;}
    break;

  case 292:
#line 1247 "djasm.y"
    { emitb(sreg_overrides[(yyvsp[(1) - (3)].i)]); ;}
    break;

  case 293:
#line 1248 "djasm.y"
    { if (_modrm.addr32) {
					      _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
					      djerror("Cannot mix 16 and 32 bit addressing");
					  } else {
					      _modrm.regs |= (1<<(yyvsp[(1) - (1)].i));
					      _modrm.addr16=1;
					  }
					;}
    break;

  case 294:
#line 1256 "djasm.y"
    { addr32((1<<(yyvsp[(1) - (1)].i))|0x100); ;}
    break;

  case 295:
#line 1257 "djasm.y"
    { addr32((yyvsp[(1) - (1)].i)); ;}
    break;

  case 296:
#line 1258 "djasm.y"
    { _modrm.syms[_modrm.nsyms++] = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 297:
#line 1259 "djasm.y"
    { _modrm.offset += (yyvsp[(1) - (1)].i); ;}
    break;

  case 298:
#line 1263 "djasm.y"
    { if ((yyvsp[(3) - (3)].i)==1 || (yyvsp[(3) - (3)].i)==2 || (yyvsp[(3) - (3)].i)==4 || (yyvsp[(3) - (3)].i)==8)
					      (yyval.i) = (1<<((yyvsp[(1) - (3)].i))) | ((yyvsp[(3) - (3)].i)<<8);
					  else {
					      _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
					      djerror("Scale must be 1,2,4 or 8");
					  }
					;}
    break;

  case 299:
#line 1270 "djasm.y"
    { if ((yyvsp[(1) - (3)].i)==1 || (yyvsp[(1) - (3)].i)==2 || (yyvsp[(1) - (3)].i)==4 || (yyvsp[(1) - (3)].i)==8)
					      (yyval.i) = (1<<((yyvsp[(3) - (3)].i))) | ((yyvsp[(1) - (3)].i)<<8);
					  else {
					      _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
					      djerror("Scale must be 1,2,4 or 8");
					  }
					;}
    break;

  case 300:
#line 1277 "djasm.y"
    { if ((yyvsp[(3) - (3)].i)>=0 && (yyvsp[(3) - (3)].i)<=3)
					      (yyval.i) = (1<<((yyvsp[(1) - (3)].i))) | (0x100<<(yyvsp[(3) - (3)].i));
					  else {
					      _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
					      djerror("Shift must be 0,1,2 or 3");
					  }
					;}
    break;

  case 301:
#line 1287 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 302:
#line 1288 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (1)].sym)->value; ;}
    break;

  case 303:
#line 1289 "djasm.y"
    { (yyval.i) = pc_symbol.value; ;}
    break;

  case 304:
#line 1290 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) || (yyvsp[(3) - (3)].i); ;}
    break;

  case 305:
#line 1291 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) | (yyvsp[(3) - (3)].i); ;}
    break;

  case 306:
#line 1292 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) ^ (yyvsp[(3) - (3)].i); ;}
    break;

  case 307:
#line 1293 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) && (yyvsp[(3) - (3)].i); ;}
    break;

  case 308:
#line 1294 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) & (yyvsp[(3) - (3)].i); ;}
    break;

  case 309:
#line 1295 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) == (yyvsp[(3) - (3)].i); ;}
    break;

  case 310:
#line 1296 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) > (yyvsp[(3) - (3)].i); ;}
    break;

  case 311:
#line 1297 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) < (yyvsp[(3) - (3)].i); ;}
    break;

  case 312:
#line 1298 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) >= (yyvsp[(3) - (3)].i); ;}
    break;

  case 313:
#line 1299 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) <= (yyvsp[(3) - (3)].i); ;}
    break;

  case 314:
#line 1300 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) != (yyvsp[(3) - (3)].i); ;}
    break;

  case 315:
#line 1301 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) << (yyvsp[(3) - (3)].i); ;}
    break;

  case 316:
#line 1302 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) >> (yyvsp[(3) - (3)].i); ;}
    break;

  case 317:
#line 1303 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) + (yyvsp[(3) - (3)].i); ;}
    break;

  case 318:
#line 1304 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) - (yyvsp[(3) - (3)].i); ;}
    break;

  case 319:
#line 1305 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) * (yyvsp[(3) - (3)].i); ;}
    break;

  case 320:
#line 1306 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) / (yyvsp[(3) - (3)].i); ;}
    break;

  case 321:
#line 1307 "djasm.y"
    { (yyval.i) = (yyvsp[(1) - (3)].i) % (yyvsp[(3) - (3)].i); ;}
    break;

  case 322:
#line 1308 "djasm.y"
    { (yyval.i) = -(yyvsp[(2) - (2)].i); ;}
    break;

  case 323:
#line 1309 "djasm.y"
    { (yyval.i) = !(yyvsp[(2) - (2)].i); ;}
    break;

  case 324:
#line 1310 "djasm.y"
    { (yyval.i) = ~(yyvsp[(2) - (2)].i); ;}
    break;

  case 325:
#line 1311 "djasm.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 326:
#line 1315 "djasm.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 327:
#line 1316 "djasm.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 328:
#line 1320 "djasm.y"
    { (yyval.relsym).sym = (yyvsp[(1) - (2)].sym); (yyval.relsym).ofs = (yyvsp[(2) - (2)].i); ;}
    break;

  case 329:
#line 1321 "djasm.y"
    { (yyval.relsym).sym = zerosym; (yyval.relsym).ofs = (yyvsp[(1) - (1)].i); ;}
    break;

  case 330:
#line 1325 "djasm.y"
    { (yyval.i) = (yyvsp[(2) - (2)].i); ;}
    break;

  case 331:
#line 1326 "djasm.y"
    { (yyval.i) = -(yyvsp[(2) - (2)].i); ;}
    break;

  case 332:
#line 1327 "djasm.y"
    { (yyval.i) = 0; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4862 "djasm.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1330 "djasm.y"
 /***********************************************************************/

typedef struct FileStack {
  struct FileStack *prev;
  FILE *f;
  int line;
  char *name;
} FileStack;

FileStack *file_stack = 0;

FILE *infile;
FILE *outfile;

int scmp_a(void const *a, void const *b)
{
  return strcmp((*(Symbol **)a)->name, (*(Symbol **)b)->name);
}

int scmp_n(void const *a, void const *b)
{
  return (*(Symbol **)a)->value - (*(Symbol **)b)->value;
}

static int
opcode_compare (const void *e1, const void *e2)
{
  return strcmp (((struct opcode *)e1)->name, ((struct opcode *)e2)->name);
}

int main(int argc, char **argv)
{
  Symbol *s;
  Patch *p;
  unsigned char exe[EXE_HEADER_SIZE+4];
  char *pexe = (char *)exe;
  int symcount = 0;
  int min_uninit;
  time_t now;
  char *outfilename, *leader;
  char *current_map_file;

  if (argc < 2)
  {
    fprintf(stderr,"usage: djasm infile [outfile] [mapfile]\n");
    exit(1);
  }

  /* Sort the opcodes now so that we can use `bsearch' later.  */
  qsort (opcodes,
	 sizeof (opcodes) / sizeof (opcodes[0]),
	 sizeof (opcodes[0]),
	 opcode_compare);
  zerosym = set_symbol (get_symbol ("__zero__", 1), 0);

  inname = argv[1];
  infile = fopen(argv[1], "r");
  if (infile == 0)
  {
    fprintf(stderr, "Error: cannot open file %s for reading\n", argv[1]);
    perror("The error was");
    exit(1);
  }
  yyparse();
  fclose(infile);
  if (bsspc == -1)
  {
    bsspc = pc;
    generated_bytes = last_align_end==pc ? last_align_begin : pc;
  }

  sortsyms(scmp_a);

  for (s=symtab; s; s=s->next)
  {
    if (!istemp(s->name, 0))
      symcount++;
    if (!s->defined && s->patches)
    {
      for (p=s->patches; p; p=p->next)
	fprintf(stderr,"%s:%d: undefined symbol `%s'\n", p->filename, p->lineno, s->name);
      undefs++;
    }
  }
  if (undefs)
    return 1;
  if (total_errors)
  {
    fprintf(stderr, "%s: %d errors\n", inname, total_errors);
    return 1;
  }

  printf("%#x bytes generated, %#x bytes in file, %#x bytes total, %d symbols\n",
    generated_bytes, bsspc, pc, symcount);

  min_uninit = (pc-bsspc+15)/16;

  memset(exe, 0, EXE_HEADER_SIZE+4);
  exe[0] = 0x4d;		/* MAGIC */
  exe[1] = 0x5a;
  exe[2] = bsspc;		/* bytes in last page */
  exe[3] = (bsspc>>8)&1;
  exe[4] = (bsspc+1023)>>9;	/* number of sectors */
  exe[5] = (bsspc+1023)>>17;
  exe[6] = 0;			/* relocation entries */
  exe[7] = 0;
  exe[8] = EXE_HEADER_BLOCKS;	/* blocks in header */
  exe[9] = 0;
  exe[10] = min_uninit;		/* min uninitialized paragraphs */
  exe[11] = (min_uninit>>8);
  exe[12] = 0xff;		/* max uninitialized paragraphs */
  exe[13] = 0xff;
  exe[14] = 0;			/* relative SS */
  exe[15] = 0;
  exe[16] = stack_ptr;		/* SP */
  exe[17] = stack_ptr>>8;
  exe[18] = 0;			/* checksum */
  exe[19] = 0;
  exe[20] = start_ptr;		/* IP */
  exe[21] = start_ptr >> 8;
  exe[22] = 0;			/* relative CS */
  exe[23] = 0;

  /* These must be zero, otherwise they are interpreted as an offset to 
     a "new executable" header. */
  exe[60] = 0;
  exe[61] = 0;
  exe[62] = 0;
  exe[63] = 0;
#define INFO_TEXT_START (64)

  time(&now);

  sprintf(pexe + INFO_TEXT_START, "\r\n%s generated from %s by djasm, on %.24s\r\n", argv[2], argv[1], ctime(&now));
  if (copyright)
    strncat(pexe + INFO_TEXT_START, copyright, (512-3-INFO_TEXT_START) - strlen(pexe + INFO_TEXT_START)); /* -3 for the following line: */
  strcat(pexe + INFO_TEXT_START, "\r\n\032");

  if (! argv[2])
  {
    char *cp, *dot = NULL;
    outfilename = (char *)alloca(strlen(argv[1])+5);
    strcpy(outfilename, argv[1]);
    for (cp=outfilename; *cp; cp++)
    {
      if (*cp == ':' || *cp == '\\' || *cp == '/')
        dot = NULL;
      if (*cp == '.')
        dot = cp;
    }
    if (!dot)
    {
      dot = cp;
      *dot = '.';
    }
    strcpy(dot+1, ext_types[out_type]);
  }
  else
  {
    char *cp, *dot = NULL;
    size_t sz = strlen(argv[2]);
    outfilename = argv[2];
    for (cp=outfilename; *cp; cp++)
    {
      if (*cp == ':' || *cp == '\\' || *cp == '/')
        dot = NULL;
      if (*cp == '.')
        dot = cp;
    }
    if (!dot)
    {
      outfilename = (char *)alloca(sz+5);
      strcpy(outfilename, argv[2]);
      dot = outfilename + sz;
      *dot = '.';
      strcpy(dot+1, ext_types[out_type]);
    }
    else
      set_out_type(dot+1);
  }

  switch (out_type)
  {
    case OUT_exe:
    case OUT_com:
    case OUT_bin:
    case OUT_sys:
    case OUT_obj:
      outfile = fopen(outfilename, "wb");
      break;
    case OUT_h:
    case OUT_inc:
    case OUT_s:
      outfile = fopen(outfilename, "w");
      break;
  }
  if (outfile == 0)
  {
    fprintf(stderr, "Error: cannot open file %s for writing\n", outfilename);
    perror("The error was");
    exit(1);
  }

  switch (out_type)
  {
    case OUT_exe:
      fwrite(exe, EXE_HEADER_SIZE, 1, outfile);
      fwrite(outbin, bsspc, 1, outfile);
      break;

    case OUT_com:
      fwrite(outbin+256, bsspc-256, 1, outfile);
      break;

    case OUT_bin:
    case OUT_sys:
      fwrite(outbin, bsspc, 1, outfile);
      break;

    case OUT_h:
      if (image_type == OUT_exe)
        for (i=0; i<EXE_HEADER_SIZE; i++)
        {
          fprintf(outfile, "0x%02x,", exe[i]);
          if ((i&15) == 15)
            fputc('\n', outfile);
        }
      for (i=((image_type==OUT_com)?0x100:0); i<bsspc; i++)
      {
        fprintf(outfile, "0x%02x", outbin[i]);
        if (i<bsspc-1)
          fputc(',', outfile);
        if ((i&15) == 15)
          fputc('\n', outfile);
      }
      if (i&15)
        fputc('\n', outfile);
      break;

    case OUT_inc:
    case OUT_s:
      if (out_type == OUT_inc)
        leader = INC_LEADER;
      else
        leader = S_LEADER;
      fputs(leader, outfile);
      if (image_type == OUT_exe)
        for (i=0; i<EXE_HEADER_SIZE; i++)
        {
          fprintf(outfile, "0x%02x", exe[i]);
          if ((i&15) == 15)
          {
            fputc('\n', outfile);
            fputs(leader, outfile);
          }
          else
            fputc(',', outfile);
        }
      for (i=((image_type==OUT_com)?0x100:0); i<bsspc; i++)
      {
        fprintf(outfile, "0x%02x", outbin[i]);
        if ((i&15) == 15)
        {
          fputc('\n', outfile);
          if (i<bsspc-1)
            fputs(leader, outfile);
        }
        else
          if (i<bsspc-1)
            fputc(',', outfile);
      }
      if (i&15)
        fputc('\n', outfile);
      break;
    case OUT_obj:
      write_THEADR(outfile,inname);
      write_LNAMES(outfile,"","CODE","BSS","TEXT","DATA",0);
      write_SEGDEF(outfile,bsspc,4,2,1);	/* text and data */
      write_SEGDEF(outfile,pc-bsspc,5,3,1);	/* .bss */
      write_EXTDEF(outfile,symtab);
      write_PUBDEF(outfile,symtab,bsspc);
      write_LEDATA(outfile,1,outbin,bsspc,symtab);
      write_MODEND(outfile,main_obj,start_ptr);
      break;
  }
  fclose(outfile);
  
  if (argc > 3)
  {
    FILE *mapfile = fopen(argv[3], "w");
    lineaddr_s *laddr;
    fprintf(mapfile, "%#x bytes generated, %#x bytes in file, %#x bytes total, %d symbols\n",
      generated_bytes, bsspc, pc, symcount);

    fprintf(mapfile, "\nStart Stop  Length Name Class\n");
    fprintf(mapfile, "%04XH %04XH %04XH  code code\n", 0, pc-1, pc);

    fprintf(mapfile, "\nAddress    Symbols by Name\n\n");
    for (s = symtab; s; s=s->next)
      if (!istemp(s->name, 0))
        fprintf(mapfile, "0000:%04X  %s (%c)\n", s->value, s->name, SYMTYPES[s->type]);
    fprintf(mapfile, "\nAddress    Symbols by Value\n\n");
    sortsyms(scmp_n);
    for (s = symtab; s; s=s->next)
      if (!istemp(s->name, 0))
        fprintf(mapfile, "0000:%04X  %s (%c)\n", s->value, s->name, SYMTYPES[s->type]);
    current_map_file = 0;
    laddr = lineaddr;
    for (i=0; i<num_lineaddr; i++)
    {
      if (current_map_file != lineaddr[i].name)
      {
	current_map_file = lineaddr[i].name;
	if ((i & 3) != 3)
	  fprintf(mapfile, "\n");
	fprintf(mapfile, "\nLine numbers for (%s)\n", current_map_file);
	num_lineaddr-=i;
	lineaddr+=i;
	i=0;
      }
      fprintf(mapfile, "%5d 0000:%04X", lineaddr[i].line, lineaddr[i].addr);
      if ((i & 3) == 3)
        fputc('\n', mapfile);
      else
        fputc(' ', mapfile);
    }
    lineaddr = laddr;
    fputc('\n', mapfile);
    fclose(mapfile);
  }

  while (symtab)
  {
    free(symtab->name);
    s = symtab->next;
    free(symtab);
    symtab = s;
  }
  if (copyright)
    free(copyright);
  if (lineaddr)
    free(lineaddr);
  if (outbin)
    free (outbin);

  return 0;
}

void djerror(char *s)
{
  fprintf(stderr, "%s:%d: %s\n", inname, lineno, s);
  strbuf[strbuflen] = 0;
  total_errors++;
}

void yyerror(char *s)
{
  djerror(s);
  fprintf(stderr, "%s:%d: Last token was `%s' (%s)\n", inname, lineno, last_token, yytname[(unsigned char)yytranslate[last_tret]]);
}

void
shxd_error(int opcode)
{
  char *bad_op;
  char *good_op;
  char msg[80];

  if (opcode == 4)
  {
    bad_op = "shld";
    good_op = "dshl";
  }
  else
  {
    bad_op = "shrd";
    good_op = "dshr";
  }
  sprintf(msg, "Obsolete use of `%s' detected.  Use `%s' instead.", bad_op, good_op);
  djerror(msg);
}

Symbol *get_symbol(char *name, int create)
{
  Symbol *s;
  for (s=symtab; s; s=s->next)
    if (strcmp(name, s->name) == 0)
      return s;
  if (!create)
    return 0;
  s = (Symbol *)malloc(sizeof(Symbol));
  s->next = symtab;
  symtab = s;
  s->name = (char *)malloc(strlen(name)+1);
  strcpy(s->name, name);
  s->value = 0;
  s->defined = 0;
  s->external = 0;
  s->public = 0;
  s->patches = 0;
  s->first_used = lineno;
  s->type = SYM_unknown;
  return s;
}

void
add_enum_element(Symbol * s)
{
  if (islocal(s->name) || istemp(s->name, 0))
  {
    djerror("Cannot have local or temporary labels within an enum");
  }
  else
  {
    char *id = alloca(strlen(s->name) + strlen(struct_sym) + 2);
    strcpy(id, struct_sym);
    strcat(id, ".");		/* should this be "_" to disambiguate enums
				   from structs? */
    strcat(id, s->name);
    if (!s->defined && !s->patches)
    {
      /* only delete fresh symbols */
      destroy_symbol(s, 0);
    }
    set_symbol(get_symbol(id, 1), struct_pc++);
  }
}

void add_struct_element(Symbol *s)
{
  if (islocal(s->name) || istemp(s->name,0)) {
    djerror("Cannot have local or temporary labels within a structure");
  } else {
    char *id=alloca(strlen(s->name)+strlen(struct_sym)+2);
    strcpy(id,struct_sym);
    strcat(id,".");
    strcat(id,s->name);
    if (!s->defined && !s->patches) {
      /* only delete fresh symbols */
      destroy_symbol(s,0);
    }
    if (struct_tp=='s') {
      /* .struct */
      set_symbol(get_symbol(id,1),struct_pc);
    } else {
      /* .union */
      set_symbol(get_symbol(id,1),0);
    }
  }
}

int is_structure(Symbol *s)
{
  char *n=s->name;
  size_t l=strlen(n);
  if (!s->next) {
    /* the elements of a struct or union always follow the symbol */
    return 0;
  }
  s=s->next;
  if (strncmp(n,s->name,l) || s->name[l]!='.') {
    /* Structure elements always have the structure name followed by a period before
     * the element name.
     */
    return 0;
  }
  return 1;
}

int set_structure_symbols(Symbol *ele, Symbol *struc, int tp, int base, int type)
{
  if (!struc->defined) {
    djerror("undefined symbol used in struct");
    return 0;
  }
  if (!is_structure(struc)) {
    djerror("symbol must be a .struct or .union");
    return 0;
  }
  set_symbol(ele,base)->type|=type;
  {
    int sLen=strlen(struc->name);
    int eLen=strlen(ele->name);
    Symbol *s=struc->next;
    while (s && !strncmp(s->name,struc->name,sLen) && s->name[sLen]=='.') {
      char *id=alloca(strlen(s->name)-sLen+eLen+1);
      strcpy(id,ele->name);
      strcpy(id+eLen,s->name+sLen);
      set_symbol(get_symbol(id,1),base+s->value)->type|=type;
      s=s->next;
    }
  }
  return 1;
}

void emit_struct(Symbol *ele, int tp, Symbol *struc)
{
  int i;

  if (set_structure_symbols(ele,struc,tp,pc,(pc?SYM_data:SYM_code)))
    for (i = 0; i < struc->value; i++)
      emitb(0); /* only unitialized structures supported */
}

void emit_struct_abs(Symbol *ele, int tp, Symbol *struc, int offset)
{
  /* NOTE: Does not actually emit any bytes! (by design) */
  set_structure_symbols(ele,struc,tp,offset,(offset?SYM_data:SYM_code));
}

void build_struct(Symbol *ele, int tp, Symbol *struc)
{
  if (ele && (islocal(ele->name) || istemp(ele->name,0))) {
    djerror("Cannot have local or temporary labels within a structure");
  } else {
    char *id=alloca((ele?strlen(ele->name):0)+strlen(struct_sym)+2);
    Symbol *sym;
    strcpy(id,struct_sym);
    if (ele) {
      strcat(id,".");
      strcat(id,ele->name);
      if (!ele->defined && !ele->patches) {
	/* only delete fresh symbols */
	destroy_symbol(ele,0);
      }
    }
    sym=get_symbol(id,1);
    if (!ele) {
	symtab=symtab->next;
	sym->next=0;
    }
    set_structure_symbols(sym,struc,tp,(struct_tp=='s')?struct_pc:0,SYM_abs);
    if (!ele) {
      destroy_symbol(sym,0);
    }
    if (struct_tp=='s')
      struct_pc+=struc->value;
    else
      struct_pc=MAX(struct_pc,struc->value);
  }
}
					
Symbol *set_symbol(Symbol *s, int value)
{
  if (!islocal(s->name) && !istemp(s->name,0))
    destroy_locals();
  if (istemp(s->name, 'b'))
    s->defined = 0;
  if (s->defined)
    fprintf(stderr,"%s:%d: warning: symbol %s redefined\n", inname, lineno, s->name);
  s->value = value;
  s->defined = 1;
  while (s->patches)
  {
    int v=0, o=0;
    unsigned char *cp;
    Patch *p = s->patches;
    s->patches = s->patches->next;
    switch (p->rel)
    {
    case REL_abs:
    case REL_abs32:
      v = value;
      break;
    case REL_16:
      v = value - p->location - 2;
      break;
    case REL_8:
      v = value - p->location - 1;
      break;
    }
    cp = outbin + p->location;
    switch (p->rel)
    {
    case REL_abs32:
      o = (LONG32)(cp[0] | (cp[1] << 8) | (cp[2] << 16) | (cp[3] << 24));
      break;
    case REL_abs:
    case REL_16:
      o = (signed short)(cp[0] | (cp[1] << 8));
      break;
    case REL_8:
      o = (signed char)(cp[0]);
      break;
    }
    o += v;
    switch (p->rel)
    {
    case REL_abs32:
      cp[3] = o>>24;
      cp[2] = o>>16;
      /* fall through */
    case REL_abs:
    case REL_16:
      cp[1] = o>>8;
      cp[0] = o;
      break;
    case REL_8:
      if (o > 127 || o < -128)
      {
	/* So far away from me
	   So far I just can't see
	   So far away from me
	   You're so far away from me
	   -- from `So far away' by Mark Knopfler.  */
	fprintf(stderr, "%s:%d: 8-bit relocation too big (%d); use long form\n", p->filename, p->lineno, o);
	total_errors++;
      }
      cp[0] = o;
      break;
    }
    free(p);
  }
  if (istemp(s->name, 'f'))
    s->defined = 0;
  return s;
}

void destroy_symbol(Symbol *sym, int undef_error)
{
  Symbol **s=&symtab;
  while (*s)
  {
    if (*s==sym)
    {
      Symbol *_s=*s;
      if (undef_error && !_s->defined && _s->patches)
      {
	Patch *p,*_p;
	for (p=_s->patches; p; p=_p) {
	  fprintf(stderr,"%s:%d: undefined symbol `%s'\n", p->filename, p->lineno, _s->name);
	  _p=p->next;
	  free(p);
	}
	undefs++;
      }
      _s=(*s)->next;
      free(*s);
      *s=_s;
    }
    else
    {
      s=&(*s)->next;
    }
  }
}

void destroy_locals(void)
{
  Symbol **s=&symtab;
  while (*s)
  {
    if (islocal((*s)->name))
    {
      Symbol *_s=*s;
      if (!_s->defined && _s->patches)
      {
	Patch *p,*_p;
	for (p=_s->patches; p; p=_p) {
	  fprintf(stderr,"%s:%d: undefined symbol `%s'\n", p->filename, p->lineno, _s->name);
	  _p=p->next;
	  free(p);
	}
	undefs++;
      }
      _s=(*s)->next;
      free(*s);
      *s=_s;
    }
    else
    {
      s=&(*s)->next;
    }
  }
}

void sortsyms(int (*sortf)(void const *,void const *))
{
  int ns, i;
  Symbol *s, **st;
  if (!symtab)
    return;
  for (s=symtab, ns=0; s; s=s->next)
    ns ++;
  st = (Symbol **)malloc(sizeof(Symbol *) * ns);
  for (s=symtab, ns=0; s; s=s->next, ns++)
    st[ns] = s;
  qsort(st, ns, sizeof(Symbol *), sortf);
  for (i=0; i<ns-1; i++)
    st[i]->next = st[i+1];
  st[i]->next = 0;
  symtab = st[0];
  free(st);
}

void emit(void *ptr, int len)
{
  while (pc + len > outsize)
  {
    outsize += 512;
    outbin = realloc(outbin, outsize);
  }
  set_lineaddr();
  memcpy(outbin+pc, ptr, len);
  pc += len;
}

void emitb(int b)
{
  unsigned char c = b;
  emit(&c, 1);
}

void emitw(int w)
{
  emitb(w);
  emitb(w>>8);
}

void emitd(LONG32 d)
{
  emitw(d);
  emitw(d>>16);
}

void emits(Symbol *s, int offset, int rel)
{
  Patch *p;
  int v;
  if (s->defined)
  {
    switch (rel)
    {
    case REL_abs32:
      v = s->value + offset;
      emitd(v);
      break;
    case REL_abs:
      v = s->value + offset;
      emitw(v);
      break;
    case REL_abs8:
      v = s->value + offset;
      emitb(v);
      break;
    case REL_16:
      v = s->value - pc - 2 + offset;
      emitw(v);
      break;
    case REL_8:
      v = s->value - pc - 1 + offset;
      if (v < -128 || v > 127)
      {
	fprintf(stderr, "%s:%d: 8-bit relocation too big (%d); use long form\n", inname, lineno, v);
	total_errors++;
      }
      emitb(v);
      break;
    }
    return;
  }
  p = (Patch *)malloc(sizeof(Patch));
  p->next = s->patches;
  s->patches = p;
  p->location = pc;
  p->lineno = lineno;
  p->filename = inname;
  p->rel = rel;
  switch (rel)
  {
  case REL_abs32:
    emitd(offset);
    break;
  case REL_abs:
  case REL_16:
    emitw(offset);
    break;
  case REL_8:
    if (offset < -128 || offset > 127)
    {
      fprintf(stderr, "%s:%d: 8-bit relocation offset too big (%d); use long form\n", inname, lineno, offset);
      total_errors++;
    }
    emitb(offset);
    break;
  }
}

void modrm(int mod, int reg, int rm)
{
  emitb((mod<<6) | (reg<<3) | rm);
}

int findreg(int regbits)
{
  int i=0;
  while (regbits) {
    regbits>>=1;
    i++;
  }
  return i?i-1:4;
}

int findscl(int sclbits)
{
  static int bits[]={0,0,1,0,2,0,0,0,3};
  return bits[sclbits];
}

int nooffset(int mbyte, int needsib)
{
    if (_modrm.offset == 0 && _modrm.nsyms == 0) {
      emitb(mbyte);
      if (needsib)
	emitb(mbyte>>8);
      if (mbyte&0100)
        emitb(0);
      _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
      return 1;
    }
    return 0;
}

int reg2mbyte[] = { 0x48, 0x88, 0x60, 0xa0, 0x40, 0x80, 0x20, 0x08 };

void reg(int which)
{
  int i;
  int v;
  int mbyte = which << 3;
  int needsib = 0;

  if (_modrm.regs == 0) {
    /* This handles the case of displacement only addressing (no register
     * ofsets)
     */
    mbyte=movacc ? movacc : mbyte + (_modrm.addr32 ? 5 : 6);
    movacc=0;
  } else if (_modrm.regs == 0x20 && _modrm.offset == 0 && _modrm.nsyms == 0) {
    /* [bp+0] */
    nooffset(mbyte|0106,0);
    return;
  } else {
    if (_modrm.addr32) {
      if (_modrm.addr32&0xff) {
	int sib= findreg( _modrm.addr32     &0xff)    |
	        (findreg((_modrm.addr32>>8 )&0xff)<<3)|
	        (findscl((_modrm.addr32>>16)&0x0f)<<6);
	if (sib==045 && _modrm.offset == 0 && _modrm.nsyms == 0) {
	  /* [ebp+0] */
	  nooffset(mbyte|0104|(045<<8),1);
	  return;
	} else if (sib==044) {
	  /* [esp] */
	  mbyte|=(sib<<8)|004;
	  needsib=1;
	} else if ((sib&070)==0040) {
	  /* no index */
	  mbyte|=sib&007;
	} else if ((sib&007)==0005) {
	  /* ebp is base */
	  mbyte|=(sib<<8)|004;
	  needsib=1;
	  if (nooffset(mbyte|0100,1))
	    return;
	} else {
	  mbyte|=(sib<<8)|004;
	  needsib=1;
	}
	if (nooffset(mbyte,needsib))
	  return;
	mbyte|=0200;
      } else {
	int sib=(005				     )|
	        (findreg((_modrm.addr32>>8 )&0xff)<<3)|
		(findscl((_modrm.addr32>>16)&0x0f)<<6);
	mbyte&=070;
	mbyte|=(sib<<8)|004;
	needsib=1;
	if (nooffset(mbyte,1))
	  return;
      }
    } else {
      /* 16 bit addressing */
      for (i=0; i<8; i++)
	if (reg2mbyte[i] == _modrm.regs)
	{
	  mbyte |= i;
	  break;
	}
      if (i == 8)
      {
	fprintf(stderr,"%s:%d: Invalid registers in R/M\n", inname, lineno);
	total_errors ++;
      }
      if (nooffset(mbyte,needsib))
	return;
      mbyte|=0200;
    }
  }

  v = _modrm.offset;
  for (i=0; i<_modrm.nsyms; i++)
  {
    Symbol *s = _modrm.syms[i];
    if (s->defined)
      v += s->value;
    else
    {
      Patch *p;
      p = (Patch *)malloc(sizeof(Patch));
      p->next = s->patches;
      s->patches = p;
      p->location = pc+1+needsib; /* ALL bytes emitted below, accounts for yet to be emitted mbyte */
      p->lineno = lineno;
      p->filename = inname;
      p->rel = _modrm.addr32 ? REL_abs32 : REL_abs;
      _modrm.regs=0; /* force offset field to be full size (2/4 bytes rather than 1) */
    }
  }
  if (_modrm.regs && v>=-128 && v<=127) {
    emitb(mbyte^0300); /* change mod from 2/4 ((d)word offset) to 1 (byte offset) */
    if (needsib)
      emitb(mbyte>>8);
    emitb(v);
  } else {
    emitb(mbyte);
    if (needsib)
      emitb(mbyte>>8);
    if (_modrm.addr32)
      emitd(v);
    else
      emitw(v);
  }

  _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
}

void addr32(int sib)
{
  char *err=0;

  if (_modrm.addr16) {
    err="Cannot mix 16 and 32 bit addressing";
  } else {
    if (!_modrm.addr32) emitb(0x67);
    _modrm.addr32|=0x1000000;
    if ((sib&0xf00)>0x100) {
      if ((sib&0xff)==0x10) {
	err="esp cannot be scaled";
      } else if (_modrm.addr32&0xff00) {
	err="scaled index already used";
      } else {
	_modrm.addr32|=sib<<8;
      }
    } else {
      if (!(_modrm.addr32&0xff)) {
	_modrm.addr32|=(sib&0xff)|0x1000000;
      } else if (!(_modrm.addr32&0xff00)) {
	if ((sib&0xff)==0x10) {
	  if ((_modrm.addr32&0xff)==0x10) {
	    err="esp cannot be the index";
	  } else {
	    _modrm.addr32=(_modrm.addr32&0xff)<<8;
	    _modrm.addr32|=(sib&0xff)|0x1010000;
	  }
	} else {
	  _modrm.addr32|=sib<<8;
	}
      } else {
	err="scaled index already used";
      }
    }
  }
  if (err) {
    djerror(err);
    _modrm.nsyms = _modrm.addr32 = _modrm.addr16 = _modrm.offset = _modrm.regs = 0;
  } else {
    _modrm.regs=-1;
  }
}

int yylex(void)
{
  last_tret = yylex1();
  return last_tret;
}

static struct {
  char c1, c2;
  int token;
} twochars[] = {
  {'=', '=', '='},
  {'>', '=', OP_GE},
  {'<', '=', OP_LE},
  {'<', '>', OP_NE},
  {'!', '=', OP_NE},
  {'&', '&', OP_AND},
  {'|', '|', OP_OR},
  {'<', '<', OP_SHL},
  {'>', '>', OP_SHR}
};

int yylex1(void)
{
  int c, c2, i, oldc;
  struct opcode *opp, op;

  do {
    c = fgetc(infile);
  } while (c == ' ' || c == '\t');

  switch (c)
  {
    case EOF:
      if (file_stack)
      {
        FileStack *tmp = file_stack;
        fclose(infile);
        /*free(inname);*/ /* needed by lineaddr_s and Patch */
        lineno = file_stack->line + 1; /* Correct for .include line */
        infile = file_stack->f;
        inname = file_stack->name;
        file_stack = file_stack->prev;
        free(tmp);
        return yylex1();
      }
      return 0;

    case 'a' ... 'z':
    case 'A' ... 'Z':
    case '_':
    case '$':
    case '.':
    case '@':
    case '?':
      if (c=='?')
	{
	  strbuf[0]=c;
	  fscanf(infile, "%[a-zA-Z0-9_$.@]", strbuf+1);
	}
      else
	{
	  ungetc(c, infile);
	  fscanf(infile, "%[a-zA-Z0-9_$.@]", strbuf);
	}
      strcpy(last_token, strbuf);
      if (strcmp(strbuf, ".") == 0)
        return PC;
      op.name = strbuf;
      opp = bsearch (&op,
		     opcodes, 
		     sizeof (opcodes) / sizeof (opcodes[0]),
		     sizeof (opcodes[0]),
		     opcode_compare);
      if (opp)
	{
	  yylval.i = opp->attr;
	  return opp->token;
	}
      else
	{
	  yylval.sym = get_symbol(strbuf,1);
	  return yylval.sym->defined ? KID : UID;
	}

    case '0' ... '9':
    #ifdef __linux
      /* fscanf "%i" doesn't work reliably with libc5.4.44 for large hex nubmers */
      if (c == '0')
        {
	  /* octal or hex */
	  yylval.i = 0;
	  c = fgetc (infile);
	  if (c == 'x' || c == 'X')
	    {
	      while (1)
		{
		  c = fgetc (infile);
		  if (!isxdigit (c))
		    {
		      ungetc(c, infile);
		      break;
		    }
		  c = toupper (c);
		  if (c > '9')
		    c -= 'A' - '9' - 1;
		  yylval.i *= 16;
		  yylval.i += c - '0';
		}
	    }
	  else if (c >= '0' && c <= '7')
	    {
	      yylval.i = c - '0';
	      while (1)
		{
		  c = fgetc (infile);
		  if (!(c >= '0' && c <= '7'))
		    {
		      ungetc(c, infile);
		      break;
		    }
		  yylval.i *= 8;
		  yylval.i += c - '0';
		}
	    }
	  else
	    ungetc(c, infile);
	}
      else
        {
	  yylval.i = c - '0';
	  while (1)
	    {
	      c = fgetc (infile);
	      if (!isdigit (c))
		{
		  ungetc(c, infile);
		  break;
		}
	      yylval.i *= 10;
	      yylval.i += c - '0';
	    }
        }
    #else
      ungetc(c, infile);
      fscanf(infile, "%i", &(yylval.i));
    #endif
      sprintf(last_token, "%d", yylval.i);
      return NUMBER;
      break;

    case '>':
    case '<':
    case '!':
    case '&':
    case '|':
    case '=':
      c2 = fgetc (infile);
      for (i = 0; i < 9; i++)
	if (c == twochars[i].c1 && c2 == twochars[i].c2)
	  return twochars[i].token;
      ungetc (c2, infile);
      return c;

    case '"':
    case '\'':
      oldc = c;
      i = 0;
      while (1)
      {
        c = fgetc(infile);
        if (c == oldc)
        {
          strcpy(last_token, strbuf);
          strbuflen = i;
          if (strbuflen == 1)
          {
            yylval.i = strbuf[0];
            return NUMBER;
          }
          return STRING;
	}
        switch (c)
        {
          case '\\':
            switch (c = fgetc(infile))
            {
              case '0':
                strbuf[i++] = 0;
                break;
              case 'n':
                strbuf[i++] = '\n';
                break;
              case 'r':
                strbuf[i++] = '\r';
                break;
              case 't':
                strbuf[i++] = '\t';
                break;
              default:
                strbuf[i++] = c;
                break;
            }
            break;
          default:
            strbuf[i++] = c;
            break;
        }
      }
      abort ();
    case ';':
      while (fgetc(infile) != '\n');
      c = '\n';
      /* Fall through.  */
    case '\n':
      strcpy(last_token, "NL");
      return c;
    default:
      sprintf(last_token, "<%c>", c);
      return c;
  }
}

int istemp(char *symname, char which)
{
  if (symname[0] != '@') return 0;
  if (which)
  {
    if (symname[1] != which) return 0;
  }
  else
  {
    if (symname[1] != 'f' && symname[1] != 'b') return 0;
  }
  if (!isdigit((unsigned char)symname[2])) return 0;
  if (symname[3]) return 0;
  return 1;
}

int islocal(char *symname)
{
  if (symname[0]!='?') return 0;
  return 1;
}

void do_sreg_pop(int sreg)
{
  switch (sreg)
  {
    case 0: /* es */
      emitb(0x07);
      break;
    case 1: /* cs */
      djerror("Cannot pop CS");
      break;
    case 2: /* ss */
      emitb(0x17);
      break;
    case 3: /* ds */
      emitb(0x1f);
      break;
    case 4: /* fs */
      emitb(0x0f);
      emitb(0xa1);
      break;
    case 5: /* gs */
      emitb(0x0f);
      emitb(0xa9);
      break;
  }
}

void do_sreg_push(int sreg)
{
  switch (sreg)
  {
    case 0: /* es */
      emitb(0x06);
      break;
    case 1: /* cs */
      emitb(0x0e);
      break;
    case 2: /* ss */
      emitb(0x16);
      break;
    case 3: /* ds */
      emitb(0x1e);
      break;
    case 4: /* fs */
      emitb(0x0f);
      emitb(0xa0);
      break;
    case 5: /* gs */
      emitb(0x0f);
      emitb(0xa8);
      break;
  }
}

void set_lineaddr()
{
  static int last_lineno = -1;
  if (lineno == last_lineno)
    return;
  last_lineno = lineno;
  if (num_lineaddr == max_lineaddr)
  {
    max_lineaddr += 32;
    if (lineaddr)
      lineaddr = (lineaddr_s *)realloc(lineaddr, max_lineaddr * sizeof(lineaddr_s));
    else
      lineaddr = (lineaddr_s *)malloc(max_lineaddr * sizeof(lineaddr_s));
  }
  lineaddr[num_lineaddr].line = lineno;
  lineaddr[num_lineaddr].addr = pc;
  lineaddr[num_lineaddr].name = inname;
  num_lineaddr++;
}

void do_align(int p2, int val)
{
  size_t offset;

  if (image_type == OUT_com)
    offset = 0;
  else
    offset = EXE_HEADER_SIZE;

  last_align_begin = pc;
  while ((pc+offset) % p2)
    emitb(val);
  last_align_end = pc;
}

void add_copyright(char *buf)
{
  char *tmp;
  if (copyright == 0)
  {
    copyright = (char *)malloc(strlen(buf)+1);
    strcpy(copyright, buf);
    return;
  }
  tmp = (char *)malloc(strlen(copyright) + strlen(buf) + 3);
  strcpy(tmp, copyright);
  strcat(tmp, "\r\n");
  strcat(tmp, buf);
  free(copyright);
  copyright = tmp;
}

void add_rcs_ident(void)
{
  char tmp[500];
  time_t now;
  struct tm *tm;
  time(&now);
  tm = localtime(&now);
  sprintf(tmp, "%cId: %s built %04d-%02d-%02d %02d:%02d:%02d by djasm $\n",
	  '$', inname,
	  tm->tm_year + 1900,
	  tm->tm_mon + 1,
	  tm->tm_mday,
	  tm->tm_hour,
	  tm->tm_min,
	  tm->tm_sec);
  add_copyright(tmp);
  sprintf(tmp, "@(#) %s built %04d-%02d-%02d %02d:%02d:%02d by djasm\n",
	  inname,
	  tm->tm_year + 1900,
	  tm->tm_mon + 1,
	  tm->tm_mday,
	  tm->tm_hour,
	  tm->tm_min,
	  tm->tm_sec);
  add_copyright(tmp);
}

void set_out_type(char *t)
{
  int i;
  for (i=0; ext_types[i]; i++)
  {
    if (strcmp(ext_types[i], t) == 0)
    {
      out_type = i;
      return;
    }
  }
  fprintf(stderr,"Unknown output type: `%s'\n", t);
}

void set_image_type(char *t)
{
  int i;
  for (i=0; ext_types[i]; i++)
  {
    if (strcmp(ext_types[i], t) == 0)
    {
      if (i == OUT_com && image_type != OUT_com)
      {
        if (pc)
        {
          fprintf(stderr, "Cannot make com file without .type \"com\"\n");
          exit(1);
        }
        while (pc < 0x100)
          emitb(0x90);
      }
      image_type = i;
      return;
    }
  }
  fprintf(stderr,"Unknown output type: `%s'\n", t);
}

void do_include(char *fname)
{
  FILE *f;
  FileStack *fs;
  
  f = fopen(fname, "r");
  if (!f)
  {
    fprintf(stderr, "%s:%d: error opening `%s'", inname, lineno, fname);
    perror("");
    return;
  }
  fs = (FileStack *)malloc(sizeof(FileStack));
  fs->line = lineno;
  fs->prev = file_stack;
  fs->f = infile;
  fs->name = inname;
  file_stack = fs;

  infile = f;
  inname = (char *)malloc(strlen(fname)+1);
  strcpy(inname, fname);
  lineno = 1;
}

/* #define DEBUG_RELOC */

void do_linkcoff (char *filename)
{
  long len;
  int f;
  char *data, *p;
  char *coff_filename;
  FILHDR *header;
  SCNHDR *f_thdr;		/* Text section header */
  SCNHDR *f_dhdr;		/* Data section header */
  SCNHDR *f_bhdr;		/* Bss section header */
/*AOUTHDR f_ohdr;*/		/* Optional file header (a.out) */
  SYMENT *symbol;
  RELOC *rp;
  int cnt;
  size_t i;
  void *base;
  int textbase /*, delta*/;
#ifdef DEBUG_RELOC
  int database, bssbase;
#endif
  char smallname[9];
/*unsigned char *cp;*/

  f = open (filename, O_RDONLY | O_BINARY);
  if (f < 0)
    {
      fprintf(stderr, "%s:%d: error opening `%s'", inname, lineno, filename);
      perror("");
      return;
    }
  len = lseek (f, 0L, SEEK_END);
  lseek (f, 0L, SEEK_SET);
  data = alloca (len);
  read (f, data, (unsigned)len);
  close (f);

  header = (FILHDR *) data;
  f_thdr = (void *)data + sizeof (FILHDR) + header->f_opthdr;
  f_dhdr = f_thdr + 1;
  f_bhdr = f_dhdr + 1;
  if (I386BADMAG (*header)
      || header->f_nscns != 3
      || strcmp (f_thdr->s_name, _TEXT)
      || strcmp (f_dhdr->s_name, _DATA)
      || strcmp (f_bhdr->s_name, _BSS))
    {
      fprintf (stderr, "%s:%d: `%s' is not a valid COFF file.\n", inname, lineno, filename);
      return;
    }

  textbase = pc;
  emit(data + f_thdr->s_scnptr, f_thdr->s_size);
#ifdef DEBUG_RELOC
  database = pc;
#endif
  emit(data + f_dhdr->s_scnptr, f_dhdr->s_size);
#ifdef DEBUG_RELOC
  bssbase = pc;
#endif
  for (i = 0; i < f_bhdr->s_size; i++)
    emitb (0);

#ifdef DEBUG_RELOC
  printf (stderr,"textbase is at %04x\n", textbase);
  printf (stderr,"database is at %04x\n", database);
  printf (stderr,"bssbase  is at %04x\n", bssbase);
#endif

  symbol = (void *) data + header->f_symptr;
  base = (void *) symbol + header->f_nsyms * SYMESZ;
  coff_filename = strdup (filename);
  for (cnt = header->f_nsyms; cnt > 0; symbol++, cnt--)
    {
      if (symbol->e.e.e_zeroes == 0)
	p = base + symbol->e.e.e_offset;
      else
	strncpy (p = smallname, symbol->e.e_name, 8),
	p[8] = 0;

      switch (symbol->e_sclass)
	{
	case C_EXT:
	  switch (symbol->e_scnum)
	    {
	    case 1:
	      set_symbol (get_symbol (p, 1),
			  textbase + symbol->e_value)->type |= SYM_code;
	      break;
	    case 2:
	      set_symbol (get_symbol (p, 1),
			  textbase + symbol->e_value)->type |= SYM_data;
	      break;
	    case 3:
	      set_symbol (get_symbol (p, 1),
			  textbase + symbol->e_value)->type |= SYM_data;
	      break;
	    case N_UNDEF:
	      if (symbol->e_value == 0)
		/*0*/;  /* Nothing -- external reference.  */
	      else if (!get_symbol (p, 0))
		{
		  /* New common variable.  */
		  set_symbol (get_symbol (p, 1), pc)->type |= SYM_data;
		  for (i = 0; i < symbol->e_value; i++)
		    emitb (0);
		}
	      break;
	    }
	  break;
	}
      cnt -= symbol->e_numaux;
      symbol += symbol->e_numaux;
    }

  symbol = (void *) data + header->f_symptr;
  for (i = 0; i < 2; i++)
    {
      if (i == 0)
	rp = (RELOC *) (data + f_thdr->s_relptr),
	cnt = f_thdr->s_nreloc;
      else
	rp = (RELOC *) (data + f_dhdr->s_relptr),
	cnt = f_dhdr->s_nreloc;

      for (; cnt > 0; cnt--, rp++)
	{
	  Symbol *s=0;
	  unsigned char *vaddr_ptr=outbin + textbase + rp->r_vaddr;
	  int vaddr;
	  int delta;

	  vaddr=vaddr_ptr[0] | (vaddr_ptr[1] << 8) |
		(vaddr_ptr[2] << 16) | (vaddr_ptr[3] << 24);


	  if (symbol[rp->r_symndx].e.e.e_zeroes == 0)
	    p = base + symbol[rp->r_symndx].e.e.e_offset;
	  else
	    strncpy (p = smallname, symbol[rp->r_symndx].e.e_name, 8),
	    p[8] = 0;

#ifdef DEBUG_RELOC
	  s = get_symbol (p, 0);
	  printf ("ofs=%04x  typ=%02x  sec=%d"
		  "  val=%08x  data=%08x"
		  "  name=%s\n",
		  rp->r_vaddr + textbase,
		  rp->r_type,
		  symbol[rp->r_symndx].e_scnum,
		  s ? s->value : 0, 
		  vaddr,
		  p);
#endif
	  if (!strcmp (p, _TEXT))
	    delta = textbase;
	  else if (!strcmp (p, _DATA))
	    delta = textbase;
	  else if (!strcmp (p, _BSS))
	    delta = textbase;
	  else
	    {
	      s = get_symbol (p, 1);
	      if (!s->defined)
		{
		  Patch *pat = (Patch *) malloc (sizeof (Patch));

		  if (rp->r_type == RELOC_REL32)
		    fprintf (stderr,"%s:%d: warning:"
			     "Call from COFF file to (yet) undefined "
			     "destination, %s, is not supported.\n", inname, lineno, p);
		  pat->next = s->patches;
		  s->patches = pat;
		  pat->location = textbase + rp->r_vaddr;
		  pat->lineno = -1;
		  pat->filename = coff_filename;
		  pat->rel = REL_abs32;
		}
	    }

	  switch (rp->r_type)
	    {
	    case RELOC_ADDR32:
	      if (symbol[rp->r_symndx].e_scnum > 0)
		delta = textbase;
	      else
		delta = s->value - symbol[rp->r_symndx].e_value;
	      break;
	    case RELOC_REL32:
	      if (symbol[rp->r_symndx].e_scnum > 0)
		delta = 0;
	      else
		delta = s->value - textbase;
	      break;
	    default:
	      fprintf (stderr, "%s:%d:"
		       "COFF file %s contains bad relocation "
		       "entry type (0x%02x).\n",
		       inname, lineno, filename, rp->r_type);
	      delta = 0;
	    }
	  /*cp = (unsigned char *)(outbin + textbase + rp->r_vaddr);*/
	  vaddr += delta;
	  vaddr_ptr[0]=vaddr;
	  vaddr_ptr[1]=vaddr>>8;
	  vaddr_ptr[2]=vaddr>>16;
	  vaddr_ptr[3]=vaddr>>24;
	}
    }
}

int write_BYTE(unsigned char byte, FILE *outfile, unsigned char *checksum)
{
  fputc(byte,outfile);
  *checksum-=byte;
  return 1;
}

int write_WORD(unsigned short word, FILE *outfile, unsigned char *checksum)
{
  return write_BYTE(word&0xff,outfile,checksum) +
	 write_BYTE((word>>8)&0xff,outfile,checksum);
}

int write_STRING(char *str, FILE *outfile, unsigned char *checksum)
{
  int length=0;
  int len=strlen(str);

  if (len>254)
    len=254;
  length+=write_BYTE(len,outfile,checksum);
  while (len--)
    length+=write_BYTE(*str++,outfile,checksum);
  return length;
}

int write_INDEX(int index, FILE *outfile, unsigned char *checksum)
{
  if (index>127)
    return write_WORD(index+0x8000,outfile,checksum);
  else
    return write_BYTE(index,outfile,checksum);
}

void write_THEADR(FILE *outfile, char *inname)
{
  unsigned char checksum=0;
  off_t lptr,cptr;
  int length;

  write_BYTE(0x80,outfile,&checksum);
  /* reserve space for the length field */
  lptr=ftell(outfile);
  write_WORD(0,outfile,&checksum); /* does not change checksum */

  length=write_STRING(inname,outfile,&checksum);
  cptr=ftell(outfile);
  fseek(outfile,lptr,0/*SEEK_SET*/);
  write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
  fseek(outfile,cptr,0/*SEEK_SET*/);
  write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
}

void write_LNAMES(FILE *outfile, ...)
{
  va_list names;
  int written=0;
  int length=0;
  off_t lenptr=0;
  unsigned char checksum=0;
  char *name;

  va_start(names,outfile);
  name=va_arg(names,char*);
  
  while (name)
    {
      int len=strlen(name);
      /* truncate names to 254 characters (omf limitation) */
      if (len>254)
	len=254;
      /* make sure the record doesn't overflow */
      if (length+len>1020)
	{
	  off_t cptr=ftell(outfile);
	  fseek(outfile,lenptr,SEEK_SET);
	  write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
	  fseek(outfile,cptr,SEEK_SET);
	  write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
	  length=0;
	  written=0;
	}
      if (!written)
	{
	  written=1;
	  write_BYTE(0x96,outfile,&checksum);
	  /* reserve space for the length field */
	  lenptr=ftell(outfile);
	  write_WORD(0,outfile,&checksum); /* does not change checksum */
	}
      length+=write_STRING(name,outfile,&checksum);
      name=va_arg(names,char*);
    }
  if (written)
    {
      off_t cptr=ftell(outfile);
      fseek(outfile,lenptr,SEEK_SET);
      write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
      fseek(outfile,cptr,SEEK_SET);
      write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
    }
}

void write_SEGDEF(FILE *outfile, int size, int name, int class, int overlay)
{
  unsigned char checksum=0;
  write_BYTE(0x98,outfile,&checksum);
  write_WORD(7+(name>127)+(class>127)+(overlay>127),outfile,&checksum);
  /* A=2 (word), C=2 (public), B=?, P=0 */
  write_BYTE(0x48|((size==0x1000)<<1),outfile,&checksum);
  write_WORD(size,outfile,&checksum);
  write_INDEX(name,outfile,&checksum);
  write_INDEX(class,outfile,&checksum);
  write_INDEX(overlay,outfile,&checksum);
  write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
}

void write_EXTDEF(FILE *outfile, Symbol *symtab)
{
  int written=0;
  int length=0;
  off_t lenptr=0;
  unsigned char checksum=0;
  Symbol *sym=symtab;

  while (sym)
    {
      if (sym->external)
        {
	  int len=strlen(sym->name);
	  /* truncate names to 254 characters (omf limitation) */
	  if (len>254)
	    len=254;
	  /* make sure the record doesn't overflow */
	  if (length+len>1020)
	    {
	      off_t cptr=ftell(outfile);
	      fseek(outfile,lenptr,SEEK_SET);
	      write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
	      fseek(outfile,cptr,SEEK_SET);
	      write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
	      length=0;
	      written=0;
	    }
	  if (!written)
	    {
	      written=1;
	      write_BYTE(0x96,outfile,&checksum);
	      /* reserve space for the length field */
	      lenptr=ftell(outfile);
	      write_WORD(0,outfile,&checksum); /* does not change checksum */
	    }
	  length+=write_STRING(sym->name,outfile,&checksum);
	}
      sym=sym->next;
    }
  if (written)
    {
      off_t cptr=ftell(outfile);
      fseek(outfile,lenptr,SEEK_SET);
      write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
      fseek(outfile,cptr,SEEK_SET);
      write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
    }
}

void write_PUBDEF(FILE *outfile, Symbol *symtab, int bss_start)
{
  int length=0;
  off_t lenptr=0,cptr;
  unsigned char checksum=0;
  Symbol *sym=symtab;

  while (sym)
    {
      if (sym->public && sym->defined) /* silently ignore undefined pubdefs */
        {
	  write_BYTE(0x96,outfile,&checksum);
	  /* reserve space for the length field */
	  lenptr=ftell(outfile);
	  write_WORD(0,outfile,&checksum); /* does not change checksum */

	  length+=write_INDEX(0,outfile,&checksum); /* group index */
	  if (sym->type&SYM_abs)
	    {
	      length+=write_INDEX(0,outfile,&checksum);
	      length+=write_WORD(0,outfile,&checksum);
	      length+=write_STRING(sym->name,outfile,&checksum);
	    }
	  else
	    {
	      if (sym->value>=bss_start)
		{
		  length+=write_INDEX(5,outfile,&checksum);
		  length+=write_STRING(sym->name,outfile,&checksum);
		  length+=write_WORD(sym->value-bss_start,outfile,&checksum);
		}
	      else
	        {
		  length+=write_INDEX(4,outfile,&checksum);
		  length+=write_STRING(sym->name,outfile,&checksum);
		  length+=write_WORD(sym->value,outfile,&checksum);
		}
	    }
	  write_INDEX(0,outfile,&checksum);

	  cptr=ftell(outfile);
	  fseek(outfile,lenptr,SEEK_SET);
	  write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
	  fseek(outfile,cptr,SEEK_SET);
	  write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
	  length=0;
	}
      sym=sym->next;
    }
}

void write_LEDATA(FILE *outfile, int segment, unsigned char *outbin, int size,
		  Symbol *symtab)
{
  /* does not yet support relocations :( */
  int len;
  int maxlen=1020-(segment>127);
  int offset=0;
  int length=0;
  off_t lenptr,cptr;
  unsigned char checksum=0;

  while (size)
    {
      len=size;
      if (len>maxlen)
	len=maxlen;
      write_BYTE(0xa0,outfile,&checksum);
      /* reserve space for the length field */
      lenptr=ftell(outfile);
      write_WORD(0,outfile,&checksum); /* does not change checksum */

      length+=write_INDEX(segment,outfile,&checksum);
      length+=write_WORD(offset,outfile,&checksum);
      offset+=len;
      size-=len;
      while (len--)
        length+=write_BYTE(*outbin++,outfile,&checksum);
      cptr=ftell(outfile);
      fseek(outfile,lenptr,SEEK_SET);
      write_WORD(length+1,outfile,&checksum); /* plus 1 for checksum */
      fseek(outfile,cptr,SEEK_SET);
      write_BYTE(checksum,outfile,&checksum); /* sets checksum to 0 */
      length=0;
      /* !!! write out fixups (none generated yet as extern not yet implemented)
       * also need to make sure the last bytes of the ledata are not a partial
       * relocation site.
       */
    }
}

void write_MODEND(FILE *outfile, int main_obj, int start_ptr)
{
  unsigned char checksum=0;

  write_BYTE(0x8a,outfile,&checksum);
  if (main_obj)
    {
      write_WORD(6,outfile,&checksum); /* five bytes plus 1 for checksum */
      write_BYTE(0xc1,outfile,&checksum); /* main, start, fixup */
      /* the following is a FIXUPP record for the start address */
      write_BYTE(0x50,outfile,&checksum);
      write_INDEX(1,outfile,&checksum);
      write_WORD(start_ptr,outfile,&checksum);
    }
  else
    {
      write_WORD(2,outfile,&checksum); /* one byte plus 1 for checksum */
      write_BYTE(1,outfile,&checksum); /* fixup only (eh? why not 0?) */
    }
  write_BYTE(checksum,outfile,&checksum);
}

