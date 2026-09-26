// mini project 2: Employee Payroll System

#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Employee
{
protected:
    int employeeId;
    string name;

public:
    // Constructor
    Employee(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    // Pure virtual function
    virtual double calculateSalary() = 0;

    // Display basic details
    void displayBasicDetails()
    {
        cout << "Employee ID: "
             << employeeId << endl;

        cout << "Name: "
             << name << endl;
    }
};

// Permanent employee
class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double allowance;

public:
    // Constructor
    PermanentEmployee(
        int id,
        string n,
        double basic,
        double extra
    ) : Employee(id, n)
    {
        basicSalary = basic;
        allowance = extra;
    }

    // Calculate salary
    double calculateSalary() override
    {
        return basicSalary + allowance;
    }
};

// Contract employee
class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor
    ContractEmployee(
        int id,
        string n,
        double rate,
        int hours
    ) : Employee(id, n)
    {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    // Calculate salary
    double calculateSalary() override
    {
        return hourlyRate * hoursWorked;
    }
};

// Display salary slip
void displayPaySlip(Employee& employee)
{
    // Display employee details
    employee.displayBasicDetails();

    // Display salary
    cout << "Salary: "
         << employee.calculateSalary() << endl;

    cout << endl;
}

int main()
{
    // Create permanent employee
    PermanentEmployee p(
        205,
        "Anjali",
        45000,
        7500
    );

    // Create contract employee
    ContractEmployee c(
        206,
        "Rohan",
        650,
        72
    );

    // Display salary slips
    displayPaySlip(p);
    displayPaySlip(c);

    return 0;
}
