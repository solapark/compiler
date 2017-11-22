#include "subc.h"

struct symbolTable{
	struct ste* head;
	struct ste* cur;
	struct ste* tail;
};

struct scopeStack{
	struct sse* top;
	struct sse* bottom; 
};

static struct symbolTable *symbolTPtr;
static struct scopeStack *scopeSPtr;

/* For symbol table */
void pushScope(){
}
struct ste* popScope(){
}
void insert(struct id* name, struct decl* type){
}
struct ste* lookupSymbol(struct id* name){
}

void declare(struct id* name, struct decl* type){
}


//Make type decl
struct decl* makeTypeDecl(int typeClass){
	struct decl* declptr = (struct decl*) malloc(sizeof(struct decl));	
	declptr->declClass = DECL_TYPE;
	declptr->typeClass = typeClass;
	return declptr;
}

//Make Var decl.
struct decl* makeVarDecl(struct decl* varType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_VAR;
	declPtr->type = varType;
	return declPtr; 
}
//Make const declaration struct.
struct decl* makeConstDecl(struct decl* arrDecl){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_CONST;
	declPtr->type = arrDecl;
	return declPtr; 

}
struct decl* makeArrDecl(int elementNum, struct decl* elementType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->type = elementType;
	declPtr->numIndex = elementNum;
	return declPtr; 
}
struct decl* makePtrDecl(struct decl* pointingType){

	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->type = pointingType;
	return declPtr; 

}

struct decl* makeStructDecl(struct ste* fieldList){
	struct decl* declPtr = (struct decl*) malloc(sizeof(struct decl));	
	declPtr->declClass = DECL_TYPE;
	declPtr->fieldList = fieldList;
	return declPtr; 
}

void addTypeToVar(struct decl* type, struct decl* varListHead){
}

struct decl* findCurDecl(struct decl* declPtr){
}

void checkIsType(struct decl* declPtr){
} 
void checkIsVar(struct decl* declPtr){
} 
void checkIsConst(struct decl* declPtr){
} 
void checkIsArr(struct decl* declPtr){
} 
void checkIsPtr(struct decl* declPtr){
} 
void checkIsStruct(struct decl* declPtr){
} 
