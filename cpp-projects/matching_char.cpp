#include <iostream>
#include <map>

int main() {
    std::map<char, int> mapc;

    std::string s("test");
    int n = s.length();
    for(int i = 0; i < n; i++) {
        std::cout << s[i] << std::endl;
	mapc[s[i]]++;
    }

    std::cout << "----" << std::endl;

    for(std::map<char, int>::iterator it = mapc.begin(); it != mapc.end(); ++it)
        std::cout << it->first << " " << it->second << std::endl;
}
