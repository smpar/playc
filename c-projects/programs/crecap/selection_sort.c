#include<stdio.h>

void print_array(int arr[], int n){
    for(int i = 0; i < n-1; i++)
        printf("%d - ", arr[i]);
    printf("\n");
}

// Selection sort
void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){

        int pos = i;
        for(int j = i; j < n-1; j++)
            if(arr[j] < arr[pos])
                pos = j;

        int tmp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = tmp;
    }
}

// Recursive selection sort
int find_min(int arr[], int n){
    int pos = 0;
    for(int i = 0; i < n-1; i++)
        if(arr[i] < arr[pos])
            pos = i;
    return pos;
}

void swap(int arr[], int a, int b){
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void selection_sort_recursive(int arr[], int n){

    if(n < 2)
        return;

    swap(arr, 0, find_min(arr, n));

    // selection_sort_recursive(arr+1, n-1);
    selection_sort_recursive(&arr[1], n-1);
}

int main() {

    int arr[] = {3, 4, 1, 89, 54, 34, 9, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    print_array(arr, n);

    int arr2[] = {3, 4, 1, 89, 54, 34, 9, 16};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    selection_sort_recursive(arr2, n2);
    print_array(arr2, n2);
}