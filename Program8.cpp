#include <iostream>                              // Used for input/output

class Base {                                     // Base class
public:
    Base() {
        std::cout << "Base constructor\n";       // Base constructor is called first
    }

    ~Base() {
        std::cout << "Base destructor\n";        // Base destructor is called last
    }
};

class Derived : public Base {                    // Derived class inherits Base
public:
    Derived() {
        std::cout << "Derived constructor\n";   // Derived constructor is called after Base
    }

    ~Derived() {
        std::cout << "Derived destructor\n";     // Derived destructor is called first
    }
};

int main() {
    Derived object;                              // Creates Derived object
    return 0;                                    // Object is destroyed here
}