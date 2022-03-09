#include <iostream>
#include <algorithm>

void print_ar(char s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%c ", s[i]);
    }
    printf("\n");
}

void swap(char* s1, char *s2) {
    char t = *s2;
    *s2 = *s1;
    *s1 = t;
}

void sort_ar(char s[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = n-1; j > i; j--)
	    if(s[j] < s[j-1])
	        swap(s+j, s+j-1);
}

int main() {
    std::cout << "Hello" << std::endl;

    std::string s1("ijsdnsavb");
    std::cout << "s1: " << s1 << std::endl;
    std::sort(s1.begin(), s1.end());
    std::cout << "s1: " << s1 << std::endl;

    char s2[] = {'i','j','s','d','n','s','a','v','b'};

    if(s1 != s2)
        std::cout << "Not Equal" << std::endl;

    int n = sizeof(s2)/sizeof(s2[0]);
    print_ar(s2, n);
    sort_ar(s2, n);
    print_ar(s2, n);

    if(s1 == s2)
        std::cout << "Equal" << std::endl;
}
