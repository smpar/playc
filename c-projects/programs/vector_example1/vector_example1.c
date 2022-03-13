#include <stdio.h>
#include <stdlib.h>

#include "ADTVector.h"

int* create_int(int value) {
    int* a = malloc(sizeof(int));
    *a = value;
    return a;
}

void fill_vector(Vector vec, int n) {
    for(int i = 0; i < n; i++)
        vector_insert_last(vec, create_int(2*i));
}

void remove_vec_items(Pointer p) {
    printf("Remove: %d\n", *(int*)p);
    free(p);
}

Vector create_my_vector() {
    Vector vec = vector_create(0, remove_vec_items);

    int n = 10;
    fill_vector(vec, n);

    return vec;
}

int main(int argc, char* argv[]) {


    Vector vec = create_my_vector();

    //Vector vec = vector_create(10, NULL);
    //Vector vec = vector_create(10, remove_vec_items);

    int size = vector_size(vec);
    printf("Size: %d\n", size);

    //int a = 10; // Dangerous when allocating/deallocationg through function.
    //Pointer p = &a;
    //vector_set_at(vec, 0, p);

    //int* a = malloc(sizeof(int));  //Best option to allocate it through a function - create_int.
    //*a = 10;
    //vector_set_at(vec, 0, a);

    //int* v = create_int(10);
    //vector_set_at(vec, 0, v);
    vector_set_at(vec, 0, create_int(10));
    Pointer at = vector_get_at(vec, 0);
    printf("addr: %p\n", at);
    printf("value: %d\n", *(int*)at);
    printf("---------\n");

    //fill_vector(vec, size);

    for(int i = 0; i < vector_size(vec); i++) {
        Pointer p = vector_get_at(vec,i);
        printf("value: %d\n", *(int*)p);
    }

    //free(at);
    vector_destroy(vec);
}