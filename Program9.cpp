// Program 9: Demonstration of Parameterized Base Constructor

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    // Parameterized constructor
    Person(string n)
    {
        name = n;
    }
};

// Derived class
class Student : public Person
{
private:
    int rollNumber;

public:
    // Constructor
    Student(string n, int r) : Person(n)
    {
        rollNumber = r;
    }

    // Display details
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    // Create Student object
    Student s("Sonu", 46);

    // Display details
    s.display();

    return 0;
}
