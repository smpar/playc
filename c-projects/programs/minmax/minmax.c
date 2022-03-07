#include <stdio.h>
#include <stdlib.h>

#include "stats.h"

int main(int argc, char* argv[]) {
    //int array[] = {9, 17, 3, 4, 9};
    //size_t size = sizeof(array)/sizeof(array[0]);
    //int array1[] = {};

    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++){
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    int size = argc - 1;
    int array[size];

    for(int i = 0; i < size; i++)
        array[i] = atoi(argv[i+1]);

    int max = find_max(array, size);
    printf("Max number: %d\n", max);
}

/* gcc -c minmax.c -I../../include/ -o minmax.o
gcc -c ../../modules/stats.c -I../../include/ -o stats.o
gcc minmax.o stats.o -o minmax*/