#include <iostream>

class complex {
private:
    float r, i;

public:
    complex(float r, float i) {
        this->r=r;
        this->i=i;
    }

    complex() {}

    void display_data() {
        std::cout << "real part = " << r << std::endl;
        std::cout << "imaginary part = " <<i << std::endl;
    }

    complex operator +(complex opc) {
        return complex (r + opc.r, i + opc.i);
    }
};

int main() {
    complex a(2,3);
    complex b(3,4);
    complex c = a+b;
    c.display_data();
    return 0;
}