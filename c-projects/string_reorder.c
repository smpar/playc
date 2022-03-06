#include <stdio.h>
#include <string.h>

size_t get_length(char*);

int main(int argc, char *argv[]) {
    char* string = argv[1];

    size_t i = 0;
    size_t length = get_length(string);

    // For loop
    printf("For loop:\n");
    for(i = 0; i < length; i++) {
        printf("%c\n", string[i]);
    }

    // While loop
    printf("While loop:\n");
    i = 0;
    while (string[i] != '\0') {
        printf("%c\n", string[i]);
	i++;
    }
}

size_t get_length(char* string) {
    return strlen(string);
}
