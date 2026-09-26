// Program 4: Demonstration of Multilevel Inheritance

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

    // Display person details
    void showPerson()
    {
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Employee : public Person
{
protected:
    int employeeId;

public:
    // Constructor
    Employee(string n, int id) : Person(n)
    {
        employeeId = id;
    }

    // Display employee details
    void showEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
    }
};

// Derived class
class Manager : public Employee
{
private:
    int teamSize;

public:
    // Constructor
    Manager(string n, int id, int size) : Employee(n, id)
    {
        teamSize = size;
    }

    // Display manager details
    void showManager()
    {
        showPerson();
        showEmployee();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    // Create Manager object
    Manager m("Akash", 708, 12);

    // Display details
    m.showManager();

    return 0;
}
