#include <stdio.h>
#include "stats.h"

int main(int argc, char* argv[]) {
    int array[] = {9, 17, 3, 4, 9};
    int array1[] = {};

    size_t size = sizeof(array)/sizeof(array[0]);
    int max = find_max(array, size);
    printf("Max number: %d\n", max);
}

/* gcc -c minmax.c -I../../include/ -o minmax.o
gcc -c ../../modules/stats.c -I../../include/ -o stats.o
gcc minmax.o stats.o -o minmax*/