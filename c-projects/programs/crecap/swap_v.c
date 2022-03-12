#include <stdio.h>

void swap1(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

void swap2(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {

    int a = 1;
    int b = 2;
    printf("a: %d, b: %d\n", a, b);
    
    swap1(a,b);
    printf("a: %d, b: %d\n", a, b);

    int* ap = &a;
    int* bp = &b;

    swap2(ap,bp);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}
