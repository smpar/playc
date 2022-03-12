#include <stdio.h>

struct my_struct{
    int mi;
    float mf;
    char mc;
};

int main() {
    struct my_struct b;
    b.mi = 89;
    b.mf = 1.3;
    b.mc = 'a';
    printf("%ld\n", sizeof(b));

    struct my_struct* p = &b;
    printf("%d\n", p->mi);
    printf("%f\n", (*p).mf);
}
