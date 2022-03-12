#include <stdio.h>
#include <stdlib.h>
#include "game_obj.h"

struct foo; //incomplete struct

int main() {
    GameObj* pp = create_object();
    GameObjp ppp = create_objectp();

    print_int(pp);
    print_intp(ppp);

    //printf("%d\n", ppp->mi); //error: dereferencing pointer to incomplete type ‘GameObj’ {aka ‘struct my_struct’}

    //struct foo s; //error: storage size of ‘s’ isn’t known
    struct foo* s = NULL;

    free(pp);
    free(ppp);
}
