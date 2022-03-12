#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game_obj.h"

struct foo; //incomplete struct

typedef void* Pointer;

void myf(int* p) {
    *p = 18;
}

typedef int(*Function)(void*, void*);

int comp_int(void* a, void* b) {
    if(*(int*)a >= *(int*)b)
        return 1;
    return -1;
}

int comp_string(void* a, void* b) {
    return strcmp(a, b);
}

int maxi(int a, int b) {
    return a >= b ? a:b;
}

//generic function
void* max(void* a, void* b, Function compare) {
    if(compare(a, b) >= 0)
        return a;
    return b;
}

int main() {

    int k1 = maxi(1, 2);
    //float k2 = max(1.2, 2.4);
    printf("%d\n", k1);

    Function fint = comp_int;
    int o1 = 1, o2 = 2;
    void* o3 = max(&o1, &o2, fint);
    printf("%d\n", *(int*)o3);

    char o4 = 'a', o5 = 'b';
    void* o6 = max(&o4, &o5, comp_string);
    printf("%s\n", (char*)o6);

    printf("--------\n");
    int a1[3];
    int a2 = 3;
    long a3 = 5;
    char a4 = 'a';

    void* p = &a2;
    printf("%d\n", *(int*)p);
    //*p = 18; //warning: dereferencing ‘void *’ pointer

    p = &a3;
    printf("%ld\n", *(long*)p);

    Pointer q = &a4;
    printf("%c\n", *(char*)q);

    /*Pointer aq;
    myf(aq);
    printf("%d\n", *(int*)aq); //Segmentation fault (core dumped)
    */
}
