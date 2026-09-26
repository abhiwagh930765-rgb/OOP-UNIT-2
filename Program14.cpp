// Program 14: Demonstration of Nested Class

#include <iostream>
#include <string>
using namespace std;

// Outer class
class University
{
public:

    // Nested class
    class Department
    {
    private:
        string name;

    public:
        // Constructor
        Department(string n)
        {
            name = n;
        }

        // Display department
        void display()
        {
            cout << "Department: " << name << endl;
        }
    };
};

int main()
{
    // Create nested class object
    University::Department d(
        "Computer Engineering"
    );

    // Display department
    d.display();

    return 0;
}
