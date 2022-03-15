#include<iostream>

class ShalloC {
private:
int* x;

public:
ShalloC(int m) {
    x = new int;
    *x = m;
}

ShalloC(const ShalloC& obj) {
    x = new int;
    *x = obj.GetX();
}

~ShalloC() {
    //if(!x)
    delete x;
}

int GetX() const {
    return *x;
}

void SetX(int m) {
    *x = m;
}

void PrintX() {
    std::cout << "Int X=" << *x << std::endl;
}

};

int main() {
    ShalloC ob1(10);
    ShalloC ob2 = ob1;
    ob1.PrintX();
    ob2.PrintX();

    ob1.SetX(12);
    ob1.PrintX();
    ob2.PrintX();
    return 0;
}