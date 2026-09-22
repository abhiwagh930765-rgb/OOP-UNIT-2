#include <iostream>                         // Used for input/output
#include <string>                           // Used for string data type
#include <utility>                          // Used for std::move

class Person {                              // Base class
protected:
    std::string name;                       // Protected data member

public:
    explicit Person(std::string personName) // Constructor of Person
        : name(std::move(personName)) {}    // Initializes name

    void displayName() const {              // Member function to display name
        std::cout << "Name: " << name << '\n';
    }
};

class Student : public Person {             // Student inherits from Person
private:
    int rollNumber;                         // Private data member

public:
    Student(std::string studentName, int roll) // Constructor of Student
        : Person(std::move(studentName)),      // Calls Person constructor
          rollNumber(roll) {}                  // Initializes rollNumber

    void displayStudent() const {            // Member function to display student details
        displayName();                       // Calls inherited function
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {                                // Program execution starts here
    Student student("Amit", 101);            // Creates Student object
    student.displayStudent();                // Calls displayStudent()
    return 0;                                // Ends the program
}