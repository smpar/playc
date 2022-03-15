#include<stdio.h>
#include <string.h>

int main() {
    char c[] = {'h','e','l','l','o'};

    int lenF = strlen(c);
    printf("length function: %d\n", lenF);

    int lenM = sizeof(c)/sizeof(c[0]);
    printf("length manual: %d\n", lenM);
}