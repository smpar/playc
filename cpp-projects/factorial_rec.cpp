#include <iostream>

int factorial(int n) {
    if(n == 1)
        return 1;
    return n * factorial(n-1);
}

int main() {
    int x;
    std::cin >> x;
    std::cout << "x: " << x << std::endl;
    int res = factorial(x);
    std::cout << "res: " << res << std::endl;
}
