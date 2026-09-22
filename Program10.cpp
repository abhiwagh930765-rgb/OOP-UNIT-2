#include <iostream>

class Vehicle {
public:
    virtual void move() const {  // Virtual function for runtime polymorphism
        std::cout << "Vehicle is moving\n";
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {  // Car inherits Vehicle
public:
    void move() const override {  // Override base class function
        std::cout << "Car moves on roads\n";
    }
};

class Boat : public Vehicle {  // Boat inherits Vehicle
public:
    void move() const override {  // Override base class function
        std::cout << "Boat moves on water\n";
    }
};

int main() {
    Car car;
    Boat boat;

    car.move();   // Calls Car's move()
    boat.move();  // Calls Boat's move()

    return 0;
}