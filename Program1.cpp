// Program 1: Demonstration of Single Inheritance

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

    // Display student details
    void displayStudent()
    {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    // Create Student object
    Student s("Sarthak", 102);

    // Display details
    s.displayStudent();

    return 0;
}
