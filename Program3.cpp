#include <iostream>                              // Used for input/output

class Base {                                    // Base class
public:
    void show() const {                         // Public member function
        std::cout << "Base public function\n";  // Displays message
    }
};

class PublicDerived : public Base {             // Public inheritance
};

class PrivateDerived : private Base {           // Private inheritance
public:
    void callBaseShow() const {                 // Member function of derived class
        show();                                 // Calls Base class function
    }
};

int main() {                                    // Program execution starts here
    PublicDerived publicObject;                 // Creates PublicDerived object
    publicObject.show();                        // Calls inherited public function

    PrivateDerived privateObject;               // Creates PrivateDerived object
    privateObject.callBaseShow();               // Calls function that accesses Base::show()

    // privateObject.show();                    // Error: show() is private through private inheritance

    return 0;                                   // Ends the program
}