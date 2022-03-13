#include <stdio.h>
#include <stdlib.h>

#include "ADTStack.h"

char* create_char(char* in) {
    char* c = malloc(sizeof(char));
    *c = *in;
    return c;
}

int* create_int(int in) {
    int* num = malloc(sizeof(int));
    *num = in;
    return num;
}

int calculate(int a1, int a2, char* op) {
    char oper = *op;
    switch(oper) {
        case '+':
            return a1 + a2;
            break;
        case '-':
            return a1 - a2;
            break;
        case '*':
            return a1 * a2;
            break;
        case '/':
            return a1 / a2;
            break;
        case '%':
            return a1 % a2;
            break;
        default:
            return 0;
            break;
    }
}

int main(int argc, char* argv[]) { //./stack1 5 9 8 + \* 7 +

    Stack my_stack = stack_create(free);

    for(int i = 0; i < argc-1; i++) {
        printf("Adding: %s\n", argv[i+1]);

        if((*argv[i+1] != '+') && (*argv[i+1] != '-') && (*argv[i+1] != '*') && (*argv[i+1] != '/') && (*argv[i+1] != '%')) {
            stack_insert_top(my_stack, create_int(atoi(argv[i+1])));
        } else {
            int* ap1 = stack_top(my_stack);
            int a1 = *ap1;
            stack_remove_top(my_stack);

            int* ap2 = stack_top(my_stack);
            int a2 = *ap2;
            stack_remove_top(my_stack);

            int res = calculate(a2, a1, argv[i+1]);
            //printf("res: %d\n", res);
            stack_insert_top(my_stack, create_int(res));
        }
    }

    printf("Stack size: %d\n", stack_size(my_stack));
    int* postfix = stack_top(my_stack);
    printf("Stack result: %d\n", *postfix);
    stack_remove_top(my_stack);

    /*stack_insert_top(my_stack, create_char('b'));
    char* c = stack_top(my_stack);
    printf("%s\n", c);*/

    stack_destroy(my_stack);
}