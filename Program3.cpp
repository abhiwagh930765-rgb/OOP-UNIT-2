// Program 3: Demonstration of Public and Private Inheritance

#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Public function
    void show()
    {
        cout << "Base public function" << endl;
    }
};

// Public inheritance
class PublicDerived : public Base
{
};

// Private inheritance
class PrivateDerived : private Base
{
public:
    // Access base function
    void callBaseShow()
    {
        show();
    }
};

int main()
{
    // Public derived object
    PublicDerived obj1;

    // Call base function
    obj1.show();

    // Private derived object
    PrivateDerived obj2;

    // Call through derived function
    obj2.callBaseShow();

    return 0;
}
