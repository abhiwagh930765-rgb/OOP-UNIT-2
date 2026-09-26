// Program 12: Demonstration of Virtual Base Class and Diamond Inheritance

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    // Constructor
    Person(string n)
    {
        name = n;
    }

    // Display name
    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

// Virtual base class
class Student : virtual public Person
{
public:
    // Constructor
    Student() : Person("Unknown")
    {
    }
};

// Virtual base class
class Employee : virtual public Person
{
public:
    // Constructor
    Employee() : Person("Unknown")
    {
    }
};

// Final derived class
class TeachingAssistant : public Student, public Employee
{
public:
    // Constructor
    TeachingAssistant(string n)
        : Person(n), Student(), Employee()
    {
    }
};

int main()
{
    // Create object
    TeachingAssistant ta("Meera");

    // Display name
    ta.displayName();

    return 0;
}
