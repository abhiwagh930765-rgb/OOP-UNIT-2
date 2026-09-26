// Program 11: Demonstration of Abstract Class

#include <iostream>
using namespace std;

// Abstract base class
class Shape
{
public:
    // Pure virtual function
    virtual double area() = 0;
};

// Rectangle class
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    // Calculate area
    double area() override
    {
        return length * width;
    }
};

// Circle class
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    Circle(double r)
    {
        radius = r;
    }

    // Calculate area
    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    // Create Rectangle object
    Rectangle r(8, 4);

    // Create Circle object
    Circle c(3);

    // Display areas
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Circle Area: " << c.area() << endl;

    return 0;
}
