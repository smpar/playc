#include <stdio.h>
#include <limits.h>

int find_max(int* array, size_t size) {
    int max = INT_MIN; // mikrotero anw fragma tou sunolou
    for (int i = 0; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}