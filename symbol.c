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

struct decl* makeTypeDecl(int typeClass){
}
struct decl* makeVarDecl(struct decl* varType){
}
struct decl* makeConstDecl(struct decl* arrDecl){
}
struct decl* makeArrDecl(int elementNum, struct decl* elementType){
}
struct decl* makePtrDecl(struct decl* pointingTypte){
}
struct decl* makeStructDecl(struct ste* fieldList){
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
