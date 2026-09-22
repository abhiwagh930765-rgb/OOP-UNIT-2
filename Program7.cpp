#include <iostream>                              // Used for input/output

class Academic {                                 // Base class
public:
    void display() const {                       // Displays academic information
        std::cout << "Academic information\n";
    }
};

class Sports {                                   // Base class
public:
    void display() const {                       // Displays sports information
        std::cout << "Sports information\n";
    }
};

class Student : public Academic, public Sports { // Multiple inheritance
public:
    void displayAll() const {                    // Displays information from both classes
        Academic::display();                     // Calls Academic display()
        Sports::display();                       // Calls Sports display()
    }
};

int main() {
    Student student;                             // Creates Student object

    student.Academic::display();                 // Resolves ambiguity using scope resolution
    student.Sports::display();                   // Resolves ambiguity using scope resolution
    student.displayAll();                        // Calls both display functions

    return 0;                                    // Ends the program
}