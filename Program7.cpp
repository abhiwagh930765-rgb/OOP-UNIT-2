// Program 7: Demonstration of Resolving Multiple Inheritance Ambiguity

#include <iostream>
using namespace std;

// First base class
class Academic
{
public:
    // Display academic information
    void display()
    {
        cout << "Academic information" << endl;
    }
};

// Second base class
class Sports
{
public:
    // Display sports information
    void display()
    {
        cout << "Sports information" << endl;
    }
};

// Multiple inheritance
class Student : public Academic, public Sports
{
public:
    // Display both functions
    void displayAll()
    {
        Academic::display();
        Sports::display();
    }
};

int main()
{
    // Create Student object
    Student s;

    // Resolve ambiguity
    s.Academic::display();
    s.Sports::display();

    // Display both
    s.displayAll();

    return 0;
}
