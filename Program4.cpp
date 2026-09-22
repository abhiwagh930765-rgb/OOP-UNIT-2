#include <iostream>                         
#include <string>                           // Used for string data type
#include <utility>                          // Used for std::move

class Person {                              // Base class
protected:
    std::string name;                       // Protected data member

public:
    explicit Person(std::string personName) // Constructor of Person
        : name(std::move(personName)) {}    // Initializes name

    void showPerson() const {               // Member function to display person details
        std::cout << "Name: " << name << '\n';
    }
};

class Employee : public Person {            // Employee inherits from Person
protected:
    int employeeId;                         // Protected data member

public:
    Employee(std::string employeeName, int id) // Constructor of Employee
        : Person(std::move(employeeName)), employeeId(id) {} // Initializes base and ID

    void showEmployee() const {             // Member function to display employee details
        std::cout << "Employee ID: " << employeeId << '\n';
    }
};

class Manager : public Employee {           // Manager inherits from Employee
private:
    int teamSize;                           // Private data member

public:
    Manager(std::string managerName, int id, int size) // Constructor of Manager
        : Employee(std::move(managerName), id), teamSize(size) {} // Initializes base and team size

    void showManager() const {              // Member function to display manager details
        showPerson();                       // Calls Person's function
        showEmployee();                     // Calls Employee's function
        std::cout << "Team Size: " << teamSize << '\n'; // Displays team size
    }
};

int main() {                                // Program execution starts here
    Manager manager("Ravi", 501, 8);        // Creates Manager object
    manager.showManager();                  // Calls showManager()
    return 0;                             
}