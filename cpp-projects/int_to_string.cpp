#include<iostream>
#include<string>
#include<sstream>

std::string my_func(int i) {
    std::stringstream ss;
    ss << i;
    return ss.str();
}

int main() {
    int i = 567;

    std::string str = my_func(i);
    const char* pc = str.c_str();

    std::cout << "string: " << str << " || char*: " << pc << std::endl;

    int sz1 = str.length();
    int sz2 = sizeof(pc);   // pc is a pointer, thus the size is 8B.
    std::cout << "sz1: " << sz1 << std::endl;
    std::cout << "str[1]: " << str[1] << std::endl;

    std::cout << "sz2: " << sz2 << std::endl;
    std::cout << "pc[0]: " << pc[0] << std::endl;

}