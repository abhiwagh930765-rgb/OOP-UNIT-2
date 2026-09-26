// Program 8: Demonstration of Constructor and Destructor Order

#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Constructor
    Base()
    {
        cout << "Base constructor" << endl;
    }

    // Destructor
    ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Constructor
    Derived()
    {
        cout << "Derived constructor" << endl;
    }

    // Destructor
    ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    // Create Derived object
    Derived obj;

    return 0;
}
