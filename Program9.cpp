#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;  // Accessible in derived class

public:
    explicit Person(std::string personName)
        : name(std::move(personName)) {}
};

class Student : public Person {  // Student inherits Person
private:
    int rollNumber;

public:
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    void display() const {
        std::cout << "Name: " << name << '\n';
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Kiran", 24);  // Create Student object
    student.display();             // Display student details

    return 0;
}