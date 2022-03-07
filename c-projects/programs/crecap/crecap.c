#include <stdio.h>
#include <stdlib.h>

int* foo() {
    int my_int = 1;
    int* p = &my_int;
    *p = 10;

    return p;
}

void bar2(int* p) {
    *p = 100;
}

void bar1() {
    int m = 1;
    int* p = &m;
    *p = 10;

    bar2(p);
    printf("*p %d\n", *p);

}



int main() {
/////////////////////////////
    bar1();
/////////////////////////////

    int* q;
    q = foo();
    //*q = 100;
    printf("value q %d\n", *q);


/////////////////////////////
    int foo = 4;

    int bar[] = {4, 9, 3};

    malloc(12);
    
    int* p;

    printf("addr foo %p\n", &foo);
    printf("addr p %p\n", &p);
    printf("value p %p\n", p);

    p = &foo;
    printf("value p %p\n", p);

    p = &bar[0];
    printf("value p %p\n", p);

    p = bar;
    printf("value p %p\n", p);
}