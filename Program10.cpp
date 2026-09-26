// Program 10: Demonstration of Function Overriding

#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    // Virtual function
    virtual void move()
    {
        cout << "Vehicle is moving" << endl;
    }
};

// Car class
class Car : public Vehicle
{
public:
    // Override function
    void move() override
    {
        cout << "Car moves on roads" << endl;
    }
};

// Boat class
class Boat : public Vehicle
{
public:
    // Override function
    void move() override
    {
        cout << "Boat moves on water" << endl;
    }
};

int main()
{
    // Create objects
    Car car;
    Boat boat;

    // Call overridden functions
    car.move();
    boat.move();

    return 0;
}
