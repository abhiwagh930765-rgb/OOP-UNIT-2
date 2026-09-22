#include <iostream>

class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
    virtual ~Shape() = default;
};

class Rectangle : public Shape {  // Rectangle inherits Shape
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override {  // Override area() for rectangle
        return length * width;
    }
};

class Circle : public Shape {  // Circle inherits Shape
private:
    double radius;

public:
    explicit Circle(double givenRadius)
        : radius(givenRadius) {}

    double area() const override {  // Override area() for circle
        return 3.141592653589793 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    std::cout << "Rectangle Area: " << rectangle.area() << '\n';
    std::cout << "Circle Area: " << circle.area() << '\n';

    return 0;
}