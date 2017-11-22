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

