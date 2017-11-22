/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

#include <stdio.h>
#include <strings.h>


/* for declclass*/ 
#define DECL_VAR		0
#define DECL_CONST		1
#define DECL_FUNC		2
#define DECL_TYPE		3	
#define DECL_TYPE_INT		4	
#define DECL_TYPE_ARRAY		5	
#define DECL_TYPE_PTR		6	
#define DECL_TYPE_STRUCT	7	

/* structure for ID */
struct id {
      char *name;
      int lextype;
};

/* structure for symbol table entry */
struct ste {
	struct id	*name;
	struct decl	*decl;
	struct std 	*prev;
};

/* structure for declaration */
struct decl {
	int		declClass;
	struct decl	*type;
	int		value;
	float		realValue;
	struct ste	*formals;
	struct decl	*returnType;
	int		typeClass;
	struct decl	*elementVar;
	int		numIndex;
	struct ste	*fieldList;
	struct decl	*ptrTo;
	int		size;
	struct ste	**scope;
	struct decl	*next;
};

/* structure for scope stack entry */
struct sse{
	struct ste* bound;
};

/* For hash table */
unsigned hash(char *name);
struct id *enter(int lextype, char *name, int length);
struct id *lookup(char *name);

int read_line();

/* For symbol table */
void pushScope();
struct ste* popScope();
void insert(struct id* name, struct decl* type);
struct ste* lookupSymbol(struct id* name);

void declare(struct id* name, struct decl* type);

struct decl* makeTypeDecl(int typeClass);   
struct decl* makeVarDecl(struct decl* varType);   
struct decl* makeConstDecl(struct decl* arrDecl);   
struct decl* makeArrDecl(int elementNum, struct decl* elementType);
struct decl* makePtrDecl(struct decl* pointingType);
struct decl* makeStructDecl(struct ste* fieldList);

void addTypeToVar(struct decl* type, struct decl* varListHead);

struct decl* findCurDecl(struct decl* declPtr);

void checkIsType(struct decl* declPtr); 
void checkIsVar(struct decl* declPtr); 
void checkIsConst(struct decl* declPtr); 
void checkIsArr(struct decl* declPtr); 
void checkIsPtr(struct decl* declPtr); 
void checkIsStruct(struct decl* declPtr); 

#endif

