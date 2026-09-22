#include <iostream>                              // Used for input/output
#include <string>                                // Used for string data type
#include <utility>                               // Used for std::move

class Employee {                                 // Base class
protected:
    std::string name;                            // Protected data member

public:
    explicit Employee(std::string employeeName)  // Constructor of Employee
        : name(std::move(employeeName)) {}       // Initializes name
};

class Developer : public Employee {              // Developer inherits from Employee
private:
    std::string language;                        // Private data member

public:
    Developer(std::string employeeName,          // Constructor of Developer
              std::string programmingLanguage)
        : Employee(std::move(employeeName)),     // Calls Employee constructor
          language(std::move(programmingLanguage)) {} // Initializes language

    void display() const {                       // Member function to display details
        std::cout << "Developer: " << name << '\n';     // Displays developer name
        std::cout << "Language: " << language << '\n';  // Displays programming language
    }
};

int main() {                                     // Program execution starts here
    Developer developer("Neha", "C++");          // Creates Developer object
    developer.display();                         // Calls display function
    return 0;                                    // Ends the program
}