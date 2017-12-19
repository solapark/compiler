#ifndef __ASM_H__
#define __ASM_H__

#include <stdio.h>
#include <strings.h>

/*for code generation*/
#define INT_CONST	258 
#define STRING_CONST	259 
#define NEGATE	260 
#define NOT	261 
#define ABS	262 
#define ADD	263 
#define SUB	264 
#define MUL	265 
#define DIV	266 
#define MOD	267 
#define AND	268 
#define OR	269 
#define EQUAL	270 
#define NOT_EQUAL	271 
#define GREATER	272 
#define GREATER_EQUAL	273 
#define LESS	274 
#define LESS_EQUAL	275 
#define JUMP	276 
#define JUMP_TO_FINAL	304 
#define BRANCH_TRUE	277 
#define BRANCH_FALSE	278 
#define EXIT	279 
#define PUSH_CONST	280 
#define PUSH_CONST_RETURN_LABEL	303 
#define PUSH_REG	281 
#define POP_REG	282 
#define SHIFT_SP	283 
#define ASSIGN	284 
#define FETCH	285 
#define READ_INT	286 
#define READ_CHAR	287 
#define WRITE_INT	288 
#define WRITE_CHAR	289 
#define WRITE_STRING	290 
#define SP	291 
#define FP	292 
#define PC	293 
//#define ID	294 
#define DATA_SAVE	295 
#define STRING_SAVE	296 
#define NEW_LINE	297
#define WRITE_LABEL 298
#define WRITE_RETURN_LABEL  302 
#define WRITE_LABEL_START 299
#define WRITE_LABEL_FINAL   300 
#define WRITE_LABEL_END     301 
//304

struct operand
{
	char* label;
    int isLabelUsed;
	int integer;
    int isIntUsed;
    char* string;
    int isStringUsed;
    int regType;
};

#endif
