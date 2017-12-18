#include "asm.h"
static int str_area_size = 0;

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
void writeInitCode(){
    code_gen(PUSH_CONST, setNewLabel("EXIT"));
    code_gen(PUSH_REG,setNewRegType(FP));
    code_gen(PUSH_REG,setNewRegType(SP));
    code_gen(POP_REG, setNewRegType(FP));
    code_gen(JUMP, setNewLabel("main"));
    code_gen(WRITE_LABEL, setNewLabel("EXIT"));
    code_gen(EXIT, NULL);
}

void code_gen(int opcode, struct operand* operand){
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
            printf("	mul\n");
            break;
        case DIV:
            printf("	div\n");
            break;
        case MOD: 
            printf("	mod\n");
            break;
        case AND: 
            printf("	and\n");
            break;
        case OR:
            printf("	or\n");
            break;
        case EQUAL: 
            printf("	equal\n");
            break;
        case NOT_EQUAL: 
            printf("	not_equal\n");
            break;
        case GREATER: 
            printf("	greater\n");
            break;
        case GREATER_EQUAL:
            printf("	greater_equal\n");
            break;
        case LESS: 
            printf("	less\n");
            break;
        case LESS_EQUAL:
            printf("	less_equal\n");
            break;
        case EXIT:
            printf("	exit\n");
            break;
        case ASSIGN: 
            printf("	assign\n");
            break;
        case FETCH:
            printf("	fetch\n");
            break;
        case READ_INT: 
            printf("	read_int\n");
            break;
        case READ_CHAR:
            printf("	read_char\n");
            break;
        case WRITE_INT: 
            printf("	write_int\n");
            break;
        case WRITE_CHAR: 
            printf("	wrtie_char\n");
            break;
        case WRITE_STRING:
            printf("	write_string\n");
            break;

        case JUMP: 
            printf("	jump");
            if(operand->isLabelUsed){
                printf(" %s", operand->label);
            }
            if(operand->isIntUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;
        case BRANCH_TRUE: 
            printf("	branch_true");
            if(operand->isLabelUsed){
                printf(" %s", operand->label);
            }
            if(operand->isIntUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;
        case BRANCH_FALSE:
            printf("	branch_false");
            if(operand->isLabelUsed){
                printf(" %s", operand->label);
            }
            if(operand->isIntUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;
        case PUSH_CONST:
            printf("	push_const");
            if(operand->isLabelUsed){
                printf(" %s", operand->label);
            }
            if(operand->isIntUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;

        case PUSH_REG: 
            printf("	push_reg");
            switch(operand->regType) {
                case PC:
                    printf(" pc\n");	
                    break;
                case SP:
                    printf(" sp\n");	
                    break;
                case FP:
                    printf(" fp\n");	
                    break;
            }
            break;
        case POP_REG:
            printf("	pop_reg");
            switch(operand->regType) {
                case PC:
                    printf(" pc\n");	
                    break;
                case SP:
                    printf(" sp\n");	
                    break;
                case FP:
                    printf(" fp\n");	
                    break;
            }
            break;

        case SHIFT_SP:
            printf("	shift_sp %d\n", operand->integer);
            break;

        case DATA_SAVE:
            printf("Lglob. data %d\n", operand->integer);
            break;
        case STRING_SAVE:
            printf("str_%d. string %s\n", str_area_size++, operand->string);
            break;
 
        case WRITE_LABEL :
            printf("%s:\n", operand->label);
            break;
        case WRITE_LABEL_START :
            printf("%s_start:\n", operand->label);
            break;
        case WRITE_LABEL_FINAL :
            printf("%s_final:\n", operand->label);
            break;
         case WRITE_LABEL_END :
            printf("%s_end:\n", operand->label);
            break;
    }
}


