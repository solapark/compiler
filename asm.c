#include "asm.h"
static int str_area_size = 0;
static int return_label_num = 0;
static FILE* outputFile=NULL;

void setOutputFile(FILE* file){
    outputFile = file;
}

struct operand* setReturnLabel(struct operand* opPtr){
   opPtr -> label = "label_";
   opPtr -> isLabelUsed = 1;
   opPtr -> integer = return_label_num ++;
   opPtr -> isIntUsed = 1;
   return opPtr;
}


struct operand* setLabel(struct operand* opPtr, char* label){
   opPtr -> label = label;
   opPtr -> isLabelUsed = 1;
   return opPtr;
}

struct operand* setInteger(struct operand* opPtr,int integer){
   opPtr -> integer = integer;
   opPtr -> isIntUsed = 1;
   return opPtr;
}

struct operand* setString(struct operand* opPtr,char* string){
   opPtr -> string = string;
   opPtr -> isStringUsed = 1;
   return opPtr;
}

struct operand* setRegType(struct operand* opPtr,int regType){
   opPtr -> regType = regType;
   return opPtr;
}

struct operand* makeOperand(){
   struct operand* opPtr = (struct operand*) malloc(sizeof(struct operand));
   return opPtr;
}
struct operand* setReturnLabelInt(int integer){
   struct operand* opPtr = makeOperand();
   setInteger(opPtr, integer);
   setLabel(opPtr, "label_"); 
   return opPtr;
}
struct operand* setNewReturnLabel(){
   struct operand* opPtr = makeOperand();
   setReturnLabel(opPtr);
   return opPtr;
}

struct operand* setNewLabel(char* label){
   struct operand* opPtr = makeOperand();
   setLabel(opPtr, label);
   return opPtr;
}

struct operand* setNewInteger(int integer){
    struct operand* opPtr = makeOperand();
   setInteger(opPtr, integer);
   return opPtr;
}

struct operand* setNewString(char* string){
    struct operand* opPtr = makeOperand();
   setString(opPtr, string);
   return opPtr;
}

struct operand* setNewRegType(int regType){
    struct operand* opPtr = makeOperand();
   setRegType(opPtr, regType);
   return opPtr;
}

int getInteger(struct operand* opPtr){
    return opPtr -> integer;
}

void writeInitCode(){
    code_gen(PUSH_CONST, setNewLabel("EXIT"));
    code_gen(PUSH_REG,setNewRegType(FP));
    code_gen(PUSH_REG,setNewRegType(SP));
    code_gen(POP_REG, setNewRegType(FP));
    code_gen(JUMP, setNewLabel("main"));
    code_gen(WRITE_LABEL, setNewLabel("EXIT"));
    code_gen(EXIT, NULL);
}

void writeFuncFinalCode(struct operand* funcName){
    code_gen(WRITE_LABEL_FINAL, funcName);
    code_gen(PUSH_REG, setNewRegType(FP));
    code_gen(POP_REG, setNewRegType(SP));
    code_gen(POP_REG, setNewRegType(FP));
    code_gen(POP_REG, setNewRegType(PC));
    code_gen(WRITE_LABEL_END, funcName);
}


void code_gen_structLHSAssign(int structSize){
    //assume that stackTop is like below
    //RHS <-sp
    //RHS
    //LHS_addr
    //LHS_addr

    //LHS ptr = sp - structSize

    if(structSize == 0){
        code_gen(ASSIGN, NULL);
        return;
    }

    for(int i = 0; i<structSize; i++){
        //LHS
        code_gen(PUSH_REG, setNewRegType(SP));
        code_gen(PUSH_CONST, setNewInteger(-1*(structSize+i)));
        code_gen(ADD, NULL);
        code_gen(FETCH, NULL);

        //RHS
        code_gen(PUSH_REG, setNewRegType(SP));
        code_gen(PUSH_CONST, setNewInteger(-1*(i+1)));
        code_gen(ADD, NULL);
        code_gen(FETCH, NULL);

        //assign
        code_gen(ASSIGN, NULL);
    }

    //erase residual
    code_gen(SHIFT_SP, setNewInteger(-1*(structSize*2)));
}
void code_gen_structAssign(int structSize){
    //assume that stackTop is like below
    //RHS <-sp
    //RHS
    //LHS_addr
    //LHS_addr

    //LHS ptr = sp - structSize

    if(structSize == 0){
        code_gen(ASSIGN, NULL);
        return;
    }

    for(int i = 0; i<structSize; i++){
        //LHS
        code_gen(PUSH_REG, setNewRegType(SP));
        code_gen(PUSH_CONST, setNewInteger(-1*(structSize+i)));
        code_gen(ADD, NULL);

        //RHS
        code_gen(PUSH_REG, setNewRegType(SP));
        code_gen(PUSH_CONST, setNewInteger(-1*(i+1)));
        code_gen(ADD, NULL);
        code_gen(FETCH, NULL);

        //assign
        code_gen(ASSIGN, NULL);
    }

    //erase residual
    code_gen(SHIFT_SP, setNewInteger(-1*(structSize)));
}
/*
void code_gen_structLHSAssign(int LHSscope, int LHSoffset, int structSize){
    //assume that stackTop is like below
    //RHS <-sp
    //RHS

    printf("LHS offset : %d\n", LHSoffset);
    //assume that stackTop is RHS address
    int offset = LHSoffset;
    for(int i = structSize; i>0; i--){
        //push LHS addr
        code_gen( LHSscope, setNewInteger(offset));
        //push RHS addr
        code_gen( PUSH_REG, setNewRegType(SP));
        code_gen( PUSH_CONST, setNewInteger(-1*(i)));
        code_gen(ADD, NULL);
        //RHS fetch
        code_gen(FETCH, NULL);
        //assign
        code_gen(ASSIGN, NULL);

        offset += 1;
    }
}
*/

void structFieldAssign(int LHSscope, int LHSoffset, int structSize){
    //assume that stackTop is like below
    //RHS <-sp
    //RHS

    printf("LHS offset : %d\n", LHSoffset);
    //assume that stackTop is RHS address
    int offset = LHSoffset;
    for(int i = 0; i<structSize; i++){
        //push LHS addr
        code_gen( LHSscope, setNewInteger(offset));
        //push RHS addr
        code_gen( PUSH_REG, setNewRegType(SP));
        code_gen( PUSH_CONST, setNewInteger(-1*(structSize -i)));
        code_gen(ADD, NULL);
        //RHS fetch
        code_gen(FETCH, NULL);
        //assign
        code_gen(ASSIGN, NULL);

        offset += 1;
    }
}

void code_gen_structParam(int structSize){
    //assume that stackTop is RHS address
    if(structSize>1){
        for(int i = 0; i<structSize-1; i++){
            //push struct field addr
            code_gen(PUSH_REG, setNewRegType(SP));
            code_gen(FETCH, NULL);
            code_gen( PUSH_CONST, setNewInteger(1));
            code_gen(ADD, NULL);
        }

        for(int i = 0; i<structSize; i++){
            //push RHS addr
            code_gen(FETCH, NULL);
            code_gen(SHIFT_SP, setNewInteger(-1));
        }
        code_gen(SHIFT_SP, setNewInteger(structSize));

    }else {
        code_gen(FETCH, NULL);
    }

}

void code_gen_structReturn(int structSize){
    //assume that stackTop is RHS address
    int LHSaddr = -1*structSize;
    for(int i = 0; i<structSize; i++){
        //push LHS
        code_gen(PUSH_REG, setNewRegType(FP));
        code_gen(PUSH_CONST, setNewInteger(-1));
        code_gen(ADD, NULL);
        code_gen(PUSH_CONST, setNewInteger(LHSaddr++));
        code_gen(ADD, NULL);
        //push RHS addr
        //access to top RHS
        code_gen( PUSH_REG, setNewRegType(SP));
        code_gen( PUSH_CONST, setNewInteger(-1));
        code_gen(ADD, NULL);
        code_gen(FETCH, NULL);
        //access to targer RHS
        code_gen( PUSH_CONST, setNewInteger(i));
        code_gen(ADD, NULL);
        //RHS fetch
        code_gen(FETCH, NULL);
        //assign
        code_gen(ASSIGN, NULL);
    }

    //remove residual
    code_gen(SHIFT_SP, setNewInteger(-2));
}

void code_gen_structSpace(int structSize){
    //assume that stackTop is addr of struct 1st member.
    if(structSize == 0 || structSize == 1){
        return;
    }
    for(int i = 1; i<structSize; i++){
        code_gen( PUSH_REG, setNewRegType(SP));
        code_gen(FETCH, NULL);
        code_gen( PUSH_CONST, setNewInteger(1));
        code_gen(ADD, NULL);
    }
}
void code_gen_LHSStructSpace(int structSize){
    code_gen_structSpace(structSize);
}
void code_gen_RHSStructSpace(int structSize){
    //assume that stackTop is addr of struct 1st member.
    if(structSize == 0){
        code_gen(FETCH, NULL);
        return;
    }
    code_gen_structSpace(structSize);

    code_gen(SHIFT_SP, setNewInteger(-1*(structSize-1)));
    for(int i = 0; i<structSize; i++){
        code_gen(FETCH, NULL);
        code_gen(SHIFT_SP, setNewInteger(1));
    }
}
#define fprint  1
#define print  1


void code_gen(int opcode, struct operand* operand){
#if fprint
    switch(opcode) {
        case NEGATE: 
            fprintf(outputFile,"	negate\n");
            break;
        case NOT: 
            fprintf(outputFile,"	not\n");
            break;
        case ABS: 
            fprintf(outputFile,"	abs\n");
            break;
        case ADD: 
            fprintf(outputFile,"	add\n");
            break;
        case SUB:
            fprintf(outputFile,"	sub\n");
            break;
        case MUL:
            fprintf(outputFile,"	mul\n");
            break;
        case DIV:
            fprintf(outputFile,"	div\n");
            break;
        case MOD: 
            fprintf(outputFile,"	mod\n");
            break;
        case AND: 
            fprintf(outputFile,"	and\n");
            break;
        case OR:
            fprintf(outputFile,"	or\n");
            break;
        case EQUAL: 
            fprintf(outputFile,"	equal\n");
            break;
        case NOT_EQUAL: 
            fprintf(outputFile,"	not_equal\n");
            break;
        case GREATER: 
            fprintf(outputFile,"	greater\n");
            break;
        case GREATER_EQUAL:
            fprintf(outputFile,"	greater_equal\n");
            break;
        case LESS: 
            fprintf(outputFile,"	less\n");
            break;
        case LESS_EQUAL:
            fprintf(outputFile,"	less_equal\n");
            break;
        case EXIT:
            fprintf(outputFile,"	exit\n");
            break;
        case ASSIGN: 
            fprintf(outputFile,"	assign\n");
            break;
        case FETCH:
            fprintf(outputFile,"	fetch\n");
            break;
        case READ_INT: 
            fprintf(outputFile,"	read_int\n");
            break;
        case READ_CHAR:
            fprintf(outputFile,"	read_char\n");
            break;
        case WRITE_INT: 
            fprintf(outputFile,"	write_int\n");
            break;
        case WRITE_CHAR: 
            fprintf(outputFile,"	wrtie_char\n");
            break;
        case WRITE_STRING:
            fprintf(outputFile,"	write_string\n");
            break;

         case JUMP: 
            fprintf(outputFile,"	jump");
            if(operand->isLabelUsed){
                fprintf(outputFile," %s", operand->label);
            }
            if(operand->isIntUsed){
                fprintf(outputFile," %d", operand->integer);
            }
            fprintf(outputFile,"\n");
            break;
        case JUMP_TO_FINAL: 
            fprintf(outputFile,"	jump");
            fprintf(outputFile," %s_final", operand->label);
            fprintf(outputFile,"\n");
            break;
        case JUMP_TO_RETURN_LABEL: 
            fprintf(outputFile,"	jump");
            fprintf(outputFile," %s%d\n", operand->label, operand->integer);
            break;
        case BRANCH_TRUE: 
            fprintf(outputFile,"	branch_true");
            if(operand->isLabelUsed){
                fprintf(outputFile," %s", operand->label);
            }
            if(operand->isIntUsed){
                fprintf(outputFile,"%d", operand->integer);
            }
            fprintf(outputFile,"\n");
            break;
        case BRANCH_FALSE:
            fprintf(outputFile,"	branch_false");
            if(operand->isLabelUsed){
                fprintf(outputFile," %s", operand->label);
            }
            if(operand->isIntUsed){
                fprintf(outputFile,"%d", operand->integer);
            }
            fprintf(outputFile,"\n");
            break;
        case PUSH_CONST:
            fprintf(outputFile,"	push_const");
            if(operand->isLabelUsed){
                fprintf(outputFile," %s", operand->label);
            }
            if(operand->isIntUsed){
                fprintf(outputFile," %d", operand->integer);
            }
            fprintf(outputFile,"\n");
            break;
        case PUSH_CONST_RETURN_LABEL:
            fprintf(outputFile,"	push_const");
            fprintf(outputFile," %s", operand->label);
            fprintf(outputFile,"%d", operand->integer);
            fprintf(outputFile,"\n");
            break;
        case PUSH_CONST_STRING :
            fprintf(outputFile,"    push_const str_%d\n", operand->integer);
            str_area_size++;
            break;
        case PUSH_CONST_LGLOB :
            fprintf(outputFile,"    push_const Lglob+%d\n", operand->integer);
            break;
        case PUSH_REG: 
            fprintf(outputFile,"	push_reg");
            switch(operand->regType) {
                case PC:
                    fprintf(outputFile," pc\n");	
                    break;
                case SP:
                    fprintf(outputFile," sp\n");	
                    break;
                case FP:
                    fprintf(outputFile," fp\n");	
                    break;
            }
            break;
        case POP_REG:
            fprintf(outputFile,"	pop_reg");
            switch(operand->regType) {
                case PC:
                    fprintf(outputFile," pc\n");	
                    break;
                case SP:
                    fprintf(outputFile," sp\n");	
                    break;
                case FP:
                    fprintf(outputFile," fp\n");	
                    break;
            }
            break;

        case SHIFT_SP:
            fprintf(outputFile,"	shift_sp %d\n", operand->integer);
            break;

        case DATA_SAVE:
            fprintf(outputFile,"Lglob.  data %d\n", operand->integer);
            break;
        case STRING_SAVE:
            fprintf(outputFile,"str_%d. string %s\n", str_area_size, operand->string);
            setInteger(operand, str_area_size);
            break;
 
        case WRITE_LABEL :
            fprintf(outputFile,"%s:\n", operand->label);
            break;
        case WRITE_RETURN_LABEL :
            fprintf(outputFile,"%s%d:\n", operand->label, operand->integer);
            break;
        case WRITE_LABEL_START :
            fprintf(outputFile,"%s_start:\n", operand->label);
            break;
        case WRITE_LABEL_FINAL :
            fprintf(outputFile,"%s_final:\n", operand->label);
            break;
         case WRITE_LABEL_END :
            fprintf(outputFile,"%s_end:\n", operand->label);
            break;
         case VAR_GLOBAL_ACCESS :
            code_gen(PUSH_CONST_LGLOB, setNewInteger(operand->integer));
            break;
         case VAR_LOCAL_ACCESS :
         case VAR_PARAM_ACCESS :
            code_gen(PUSH_REG, setNewRegType(FP));
            code_gen(PUSH_CONST, setNewInteger(operand->integer));
            code_gen(ADD, NULL);
            break;
    }
#endif
#if print
    switch(opcode) {
        case NEGATE: 
            printf("	negate\n");
            break;
        case NOT: 
            printf("	not\n");
            break;
        case ABS: 
            printf("	abs\n");
            break;
        case ADD: 
            printf("	add\n");
            break;
        case SUB:
            printf("	sub\n");
            break;
        case MUL:
            printf( "	mul\n");
            break;
        case DIV:
            printf( "	div\n");
            break;
        case MOD: 
            printf( "	mod\n");
            break;
        case AND: 
            printf( "	and\n");
            break;
        case OR:
            printf( "	or\n");
            break;
        case EQUAL: 
            printf( "	equal\n");
            break;
        case NOT_EQUAL: 
            printf( "	not_equal\n");
            break;
        case GREATER: 
            printf( "	greater\n");
            break;
        case GREATER_EQUAL:
            printf( "	greater_equal\n");
            break;
        case LESS: 
            printf( "	less\n");
            break;
        case LESS_EQUAL:
            printf( "	less_equal\n");
            break;
        case EXIT:
            printf( "	exit\n");
            break;
        case ASSIGN: 
            printf( "	assign\n");
            break;
        case FETCH:
            printf( "	fetch\n");
            break;
        case READ_INT: 
            printf( "	read_int\n");
            break;
        case READ_CHAR:
            printf( "	read_char\n");
            break;
        case WRITE_INT: 
            printf( "	write_int\n");
            break;
        case WRITE_CHAR: 
            printf( "	wrtie_char\n");
            break;
        case WRITE_STRING:
            printf( "	write_string\n");
            break;

         case JUMP: 
            printf( "	jump");
            if(operand->isLabelUsed){
                printf( " %s", operand->label);
            }
            if(operand->isIntUsed){
                printf( " %d", operand->integer);
            }
            printf( "\n");
            break;
        case JUMP_TO_FINAL: 
            printf( "	jump");
            printf( " %s_final", operand->label);
            printf( "\n");
            break;
        case JUMP_TO_RETURN_LABEL: 
            printf( "	jump");
            printf( " %s%d\n", operand->label, operand->integer);
            break;
        case BRANCH_TRUE: 
            printf( "	branch_true");
            if(operand->isLabelUsed){
                printf( " %s", operand->label);
            }
            if(operand->isIntUsed){
                printf( "%d", operand->integer);
            }
            printf( "\n");
            break;
        case BRANCH_FALSE:
            printf( "	branch_false");
            if(operand->isLabelUsed){
                printf( " %s", operand->label);
            }
            if(operand->isIntUsed){
                printf( "%d", operand->integer);
            }
            printf( "\n");
            break;
        case PUSH_CONST:
            printf( "	push_const");
            if(operand->isLabelUsed){
                printf( " %s", operand->label);
            }
            if(operand->isIntUsed){
                printf( " %d", operand->integer);
            }
            printf( "\n");
            break;
        case PUSH_CONST_RETURN_LABEL:
            printf( "	push_const");
            printf( " %s", operand->label);
            printf( "%d", operand->integer);
            printf( "\n");
            break;
        case PUSH_CONST_STRING :
            printf( "    push_const str_%d\n", operand->integer);
            //str_area_size++;
            break;
        case PUSH_CONST_LGLOB :
            printf( "    push_const Lglob+%d\n", operand->integer);
            break;
        case PUSH_REG: 
            printf( "	push_reg");
            switch(operand->regType) {
                case PC:
                    printf( " pc\n");	
                    break;
                case SP:
                    printf( " sp\n");	
                    break;
                case FP:
                    printf( " fp\n");	
                    break;
            }
            break;
        case POP_REG:
            printf( "	pop_reg");
            switch(operand->regType) {
                case PC:
                    printf( " pc\n");	
                    break;
                case SP:
                    printf( " sp\n");	
                    break;
                case FP:
                    printf( " fp\n");	
                    break;
            }
            break;

        case SHIFT_SP:
            printf( "	shift_sp %d\n", operand->integer);
            break;

        case DATA_SAVE:
            printf( "Lglob. data %d\n", operand->integer);
            break;
        case STRING_SAVE:
            printf( "str_%d. string %s\n", str_area_size, operand->string);
            setInteger(operand, str_area_size);
            break;
 
        case WRITE_LABEL :
            printf( "%s:\n", operand->label);
            break;
        case WRITE_RETURN_LABEL :
            printf( "%s%d:\n", operand->label, operand->integer);
            break;
        case WRITE_LABEL_START :
            printf( "%s_start:\n", operand->label);
            break;
        case WRITE_LABEL_FINAL :
            printf( "%s_final:\n", operand->label);
            break;
         case WRITE_LABEL_END :
            printf( "%s_end:\n", operand->label);
            break;
/*         case VAR_GLOBAL_ACCESS :
            code_gen(PUSH_CONST_LGLOB, setNewInteger(operand->integer));
            break;
         case VAR_LOCAL_ACCESS :
            printf("var_local_access\n");
            //code_gen(PUSH_REG, setNewRegType(FP));
            code_gen(PUSH_CONST, setNewInteger(operand->integer));
            code_gen(ADD, NULL);
            break;
         case VAR_PARAM_ACCESS :
            printf("var_param_access\n");
            code_gen(PUSH_REG, setNewRegType(FP));
            code_gen(PUSH_CONST, setNewInteger(operand->integer));
            code_gen(ADD, NULL);
            break;
            */
    }
    return;
#endif
}


