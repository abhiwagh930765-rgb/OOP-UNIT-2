// Program 5: Demonstration of Hierarchical Inheritance

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
protected:
    string registrationNumber;

public:
    // Constructor
    Vehicle(string reg)
    {
        registrationNumber = reg;
    }

    // Start vehicle
    void start()
    {
        cout << "Vehicle " << registrationNumber << " started" << endl;
    }
};

// Car class
class Car : public Vehicle
{
public:
    // Constructor
    Car(string reg) : Vehicle(reg)
    {
    }

    // Car function
    void openBoot()
    {
        cout << "Car boot opened" << endl;
    }
};

// Bike class
class Bike : public Vehicle
{
public:
    // Constructor
    Bike(string reg) : Vehicle(reg)
    {
    }

    // Bike function
    void helmetReminder()
    {
        cout << "Please wear a helmet" << endl;
    }
};

int main()
{
    // Create Car object
    Car car("MH14EF2468");

    // Create Bike object
    Bike bike("MH14GH1357");

    // Car operations
    car.start();
    car.openBoot();

    // Bike operations
    bike.start();
    bike.helmetReminder();

    return 0;
}
