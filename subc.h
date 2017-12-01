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
#define DECL_TYPE_VOID		5	
#define DECL_TYPE_CHAR		6	
#define DECL_TYPE_ARRAY		7	
#define DECL_TYPE_PTR		8	
#define DECL_TYPE_STRUCT	9	

/*for error type*/
#define SUCCESS			100	
#define NOT_DECLARED		0
#define REDECL			1
#define NOT_SAME_TYPE		2
#define LHS_NOT_VAR		3
#define RHS_NOT_VAR_CONST	4
#define NOT_STRUC_FIELD		6	 
#define INCOMPLETE_STRUCT	7
#define WRONG_RETURN_VALUE	8
#define MULTIPLE_RETURN_TYPE	9
#define IMCOPATIBLE_COMPARE	10
#define	NOT_COMPUTABLE		11
#define NOT_VAR			12
#define NOT_CONST_VAR		13
#define NOT_PROPER_TYPE		14
#define NOT_FORMAL_ARGS		15			

#define NOT_CONST		16
#define NOT_FUNC		17
#define NOT_TYPE		18
#define NOT_INT			19	
#define NOT_VOID		20	
#define NOT_CHAR		21	
#define NOT_ARRAY		22	
#define NOT_PTR			23	
#define NOT_STRUCT		24	


/* structure for ID */
struct id {
      char *name;
      int lextype;
      int leng;
};

/* structure for scope stack & args list */
struct node {
	struct node	*next;
	struct node	*prev;
	void		*data;	
};

/* structure for symbol table entry */
struct ste {
	struct id	*name;
	struct decl	*decl;
	struct ste 	*prev;
	struct node 	*scope;
};

/* structure for declaration */
struct decl {
	int		declClass;
	struct decl	*type;
	int		value;
	char		*charValue;
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

/* For hash table */
unsigned hash(char *name);
struct id *enter(int lextype, char *name, int length);
struct id *lookup(char *name);

int read_line();

/* For symbol table */

void initType();
void pushScope();

struct ste* popScope();

void changeSSTopPnting(struct ste* newSte);

struct ste* lookupSymbol(struct id* name);

int declare(struct id* name, struct decl* type);

void setSteScope();

//Make Var decl.
struct decl* makeVarDecl(struct decl* varType);

//Make const declaration struct.
struct decl* makeConstDecl(struct decl* arrDecl, int intValue);

//Make Func decl.
struct decl* makeFuncDecl();

//Make type decl(int, void, char)
struct decl* makeTypeDecl(int typeClass);

//Make type decl(array)
struct decl* makeArrDecl(int elementNum, struct decl* elementType);

//Make type decl(ptr)
struct decl* makePtrDecl(struct decl* pointingType);

//Make type decl(struct)
struct decl* makeStructDecl(struct ste* fieldList);

int checkIsVar(struct decl* declPtr);

int checkIsConst(struct decl* declPtr);

int checkIsFunc(struct decl* declPtr);

int checkIsType(struct decl* declPtr);

int checkIsArray(struct decl* declPtr);

int checkIsPtr(struct decl* declPtr);

int checkIsStruct(struct decl* declPtr);

int checkIsType(struct decl* declPtr);

int checkIsArr(struct decl* declPtr);

int checkIsPtr(struct decl* declPtr);

int checkIsStruct(struct decl* declPtr);

void printSymbolTable();
void printList(struct node **head);
//node operation
void addToTail(struct node **head, struct node *newNode);

void addToHead(struct node **head, struct node *newNode);

void removeFromHead(struct node **head);

void resetList (struct node **head);

int checkIsListEmpty (struct node **head);

int checkIsTail (struct node **head, struct node* targeNode);

struct node* findPointingTo(struct node** head, struct node* targetNode);

struct node* getTail(struct node** head);

struct ste* reverseSte(struct ste* steList);

struct ste* recurReverSte(struct ste* steList);

struct decl* findDeclByStr(char* name);
#endif

