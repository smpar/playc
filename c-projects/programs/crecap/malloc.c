#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%ld\n", sizeof(int));
    int* a = malloc(4 * sizeof(int));
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(*a));
    printf("%ld\n", sizeof(char));
}
