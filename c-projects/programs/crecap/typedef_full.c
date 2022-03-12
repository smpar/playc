#include <stdio.h>
#include <stdlib.h>

struct my_struct{
    int mi;
    float mf;
    char mc;
};

typedef struct my_struct Struct;
typedef struct my_struct* Structp;

Struct* create_object() {
    Struct* bb = malloc(sizeof(Struct));
    bb->mi = 189;
    bb->mf = 11.3;
    bb->mc = 'b';
    return bb;
}

Structp create_objectp() {
    Structp bb = malloc(sizeof(bb));
    bb->mi = 189;
    bb->mf = 11.3;
    bb->mc = 'b';
    return bb;
}

void print_int(Struct* obj) {
    printf("%d\n", obj->mi);
}

void print_intp(Structp obj) {
    printf("%d\n", obj->mi);
}

int main() {

    Struct* pp = create_object();
    Structp ppp = create_objectp();

    print_int(pp);
    print_intp(ppp);
    free(pp);
    free(ppp);
}
