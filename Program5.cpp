#include <iostream>                            
#include <string>                                // Used for string data type
#include <utility>                               // Used for std::move

class Vehicle {                                  // Base class
protected:
    std::string registrationNumber;              // Protected data member

public:
    explicit Vehicle(std::string registration)   // Constructor of Vehicle
        : registrationNumber(std::move(registration)) {} // Initializes registration number

    void start() const {                         // Member function to start vehicle
        std::cout << "Vehicle " << registrationNumber << " started\n";
    }
};

class Car : public Vehicle {                     // Car inherits from Vehicle
public:
    explicit Car(std::string registration)       // Constructor of Car
        : Vehicle(std::move(registration)) {}    // Calls Vehicle constructor

    void openBoot() const {                      // Member function of Car
        std::cout << "Car boot opened\n";         // Displays message
    }
};

class Bike : public Vehicle {                    // Bike inherits from Vehicle
public:
    explicit Bike(std::string registration)      // Constructor of Bike
        : Vehicle(std::move(registration)) {}    // Calls Vehicle constructor

    void helmetReminder() const {                // Member function of Bike
        std::cout << "Please wear a helmet\n";   // Displays message
    }
};

int main() {                                     // Program execution starts here
    Car car("MH12AB1234");                       // Creates Car object
    Bike bike("MH12CD5678");                     // Creates Bike object

    car.start();                                 // Calls inherited start() function
    car.openBoot();                              // Calls Car's openBoot() function
    bike.start();                                // Calls inherited start() function
    bike.helmetReminder();                      // Calls Bike's helmetReminder() function

    return 0;                                 
}