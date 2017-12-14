void print_inst(int opcode, struct operand* operand){
    switch(opcode) {
        case NEGATE: 
            printf("negate\n");
            break;
        case NOT: 
            printf("not\n");
            break;
        case ABS: 
            printf("abs\n");
            break;
        case ADD: 
            printf("add\n");
            break;
        case SUB:
            printf("sub\n");
            break;
        case MUL:
            printf("mul\n");
            break;
        case DIV:
            printf("div\n");
            break;
        case MOD: 
            printf("mod\n");
            break;
        case AND: 
            printf("and\n");
            break;
        case OR:
            printf("or\n");
            break;
        case EQUAL: 
            printf("equal\n");
            break;
        case NOT_EQUAL: 
            printf("not_equal\n");
            break;
        case GREATER: 
            printf("greater\n");
            break;
        case GREATER_EQUAL:
            printf("greater_equal\n");
            break;
        case LESS: 
            printf("less\n");
            break;
        case LESS_EQUAL:
            printf("less_equal\n");
            break;
        case EXIT:
            printf("exit\n");
            break;
        case ASSIGN: 
            printf("assign\n");
            break;
        case FETCH:
            printf("fetch\n");
            break;
        case READ_INT: 
            printf("read_int\n");
            break;
        case READ_CHAR:
            printf("read_char\n");
            break;
        case WRITE_INT: 
            printf("write_int\n");
            break;
        case WRITE_CHAR: 
            printf("wrtie_char\n");
            break;
        case WRITE_STRING:
            printf("write_string\n");
            break;

        case JUMP: 
            printf("jump");
            if(isLabelUsed){
                printf(" %s", operand->label);
            }
            if(isIntConstUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;
        case BRANCH_TRUE: 
             printf("branch_true");
             if(isLabelUsed){
                printf(" %s", operand->label);
            }
            if(isIntConstUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;
        case BRANCH_FALSE:
              printf("branch_false");
              if(isLabelUsed){
                printf(" %s", operand->label);
            }
            if(isIntConstUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;
       case PUSH_CONST:
            printf("push_const");
               if(isLabelUsed){
                printf(" %s", operand->label);
            }
            if(isIntConstUsed){
                printf(" %d", operand->integer);
            }
            printf("\n");
            break;

        case PUSH_REG: 
            printf("push_reg");
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
            printf("pop_reg");
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
            printf("shift_sp %d\n", operand->integer);
            break;

        case DATA_SAVE:
            printf("Lglob. data %d\n", operand->integer);
            break;
         case STRING_SAVE:
            printf("str_%d. string %s\n", string_area_size++, operand->string);
            break;
    }
}
