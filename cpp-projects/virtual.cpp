#include<iostream>

// Without use of virtual function.
class Animal {
public:
    int a, b;
    Animal(): a(1), b(2) {}
    void display() {
        std::cout << "On Animal - a: " << a << " || b: " << b << std::endl; 
    }

    virtual void display_virtual() {
        std::cout << "On Animal virtual - a: " << a << " || b: " << b << std::endl; 
    }

    virtual void display_pure_virtual() = 0;
};

class Dog: public Animal {
    int x, y;
public:
    Dog(): x(10), y(20) {}
    void display() {
        std::cout << "On Dog - x: " << x << " || y: " << y << std::endl; 
    }

    void display_virtual() {
        std::cout << "On Dog virtual - x: " << x << " || y: " << y << std::endl; 
    }

    void display_pure_virtual() {
        std::cout << "On Animal pure virtual - a: " << a << " || b: " << b << std::endl; 
    }
};

int main() {
    //Animal anim;
    //anim.display(); // On Animal - a: 1 || b: 2

    Dog dog;
    dog.display();  // On Dog - x: 10 || y: 20

    Animal* pAnim;
    pAnim = &dog;
    pAnim->display();   // On Animal - a: 1 || b: 2

    Animal* pAnimVirtual;
    pAnimVirtual = &dog;
    pAnimVirtual->display_virtual();   // On Dog virtual - x: 10 || y: 20
}