// mini project: Vehicle Rental System

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
protected:
    string registrationNumber;
    double ratePerDay;

public:
    // Constructor
    Vehicle(string reg, double rate)
    {
        registrationNumber = reg;
        ratePerDay = rate;
    }

    // Calculate rent
    virtual double calculateRent(int days)
    {
        return ratePerDay * days;
    }

    // Display details
    virtual void display()
    {
        cout << "Registration: "
             << registrationNumber << endl;

        cout << "Rate per day: "
             << ratePerDay << endl;
    }
};

// Car class
class Car : public Vehicle
{
private:
    int numberOfDoors;

public:
    // Constructor
    Car(string reg, double rate, int doors)
        : Vehicle(reg, rate)
    {
        numberOfDoors = doors;
    }

    // Display car details
    void display() override
    {
        Vehicle::display();

        cout << "Doors: "
             << numberOfDoors << endl;
    }
};

// Bike class
class Bike : public Vehicle
{
private:
    int engineCapacity;

public:
    // Constructor
    Bike(string reg, double rate, int capacity)
        : Vehicle(reg, rate)
    {
        engineCapacity = capacity;
    }

    // Calculate bike rent
    double calculateRent(int days) override
    {
        return ratePerDay * days * 0.9;
    }

    // Display bike details
    void display() override
    {
        Vehicle::display();

        cout << "Engine Capacity: "
             << engineCapacity << " cc" << endl;
    }
};

int main()
{
    // Create Car object
    Car car("MH15JK2468", 1800, 4);

    // Create Bike object
    Bike bike("MH15LM1357", 650, 125);

    // Display car details
    cout << "Car Details" << endl;
    car.display();

    // Calculate car rent
    cout << "Rent for 4 days: "
         << car.calculateRent(4) << endl;

    cout << endl;

    // Display bike details
    cout << "Bike Details" << endl;
    bike.display();

    // Calculate bike rent
    cout << "Rent for 4 days: "
         << bike.calculateRent(4) << endl;

    return 0;
}
