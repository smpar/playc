#include <stdio.h>
#include <stdlib.h>

struct my_struct{
    int mi;
    float mf;
    char mc;
};

typedef struct my_struct Struct;

typedef char* String;

typedef char Name[100];

Struct* create_object() {
    Struct* bb = malloc(sizeof(Struct));
    bb->mi = 189;
    bb->mf = 11.3;
    bb->mc = 'b';

    return bb;
}

int main() {

    char c[100];
    Name oi;
  //  NAMES c;
    struct my_struct b;
    b.mi = 89;
    b.mf = 1.3;
    b.mc = 'a';
    printf("%ld\n", sizeof(b));

    Struct* poit = malloc(sizeof(*poit));
    Struct* poit2 = malloc(sizeof(struct my_struct));
    free(poit);
    free(poit2);

    struct my_struct* p = &b;
    printf("%d\n", p->mi);
    printf("%f\n", (*p).mf);

    Struct* pp = create_object();
    printf("%d\n", pp->mi);
    printf("%f\n", (*pp).mf);
    free(pp);
}
