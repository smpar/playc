#include <stdio.h>

#include <iostream>
#include <cstring>
#include <algorithm>

void print_ar(int ar[], int n) {
    for(int i = 0; i < n; i++)
        std::cout << ar[i] << " ";
    printf("\n");
}

void revert_ar(char ar[], int n) {
    for(int i = 0; i < n/2; i++) {
        char t = ar[i];
        ar[i] = ar[n-1-i];
	ar[n-1-i] = t;
    }
}

int main () {
    int ar[] = {1, 2, 3, 4, 5};
    int n = sizeof(ar)/sizeof(ar[0]);
    print_ar(ar, n);

    char s1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int n1 = strlen(s1);
    std::cout << s1 << " n1: " << n1 << std::endl;
    revert_ar(s1, n1);
    std::cout << s1 << " n1: " << n1 << std::endl;

    std::string s3("Hello");
    int len = s3.length();
    for(int i = 0; i < len/2; i++) {
        std::swap(s3[i], s3[len-1-i]);
    }
    std::cout << s3 << std::endl;

    std::string s4("ABCD");
    reverse(s4.begin(), s4.end());
    std::cout << s4 << std::endl;
}
