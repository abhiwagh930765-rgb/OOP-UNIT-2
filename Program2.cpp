// Program 2: Demonstration of Protected Member Access

#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
protected:
    string name;

public:
    // Constructor
    Employee(string n)
    {
        name = n;
    }
};

// Derived class
class Developer : public Employee
{
private:
    string language;

public:
    // Constructor
    Developer(string n, string lang) : Employee(n)
    {
        language = lang;
    }

    // Display details
    void display()
    {
        cout << "Developer: " << name << endl;
        cout << "Language: " << language << endl;
    }
};

int main()
{
    // Create Developer object
    Developer d("Sarthak", "CPP");

    // Display details
    d.display();

    return 0;
}
