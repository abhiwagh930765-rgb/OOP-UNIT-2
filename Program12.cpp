#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;  // Protected member can be accessed by derived classes

public:
    explicit Person(std::string personName)
        : name(std::move(personName)) {}  // Initialize Person's name

    void displayName() const {
        std::cout << "Name: " << name << '\n';
    }
};

class Student : virtual public Person {
    // Virtual inheritance ensures only ONE Person object
    // is created in TeachingAssistant
public:
    Student() : Person("Unknown") {}
};

class Employee : virtual public Person {
    // Employee also virtually inherits Person
    // So Student and Employee share the same Person
public:
    Employee() : Person("Unknown") {}
};

class TeachingAssistant : public Student, public Employee {
    // Multiple inheritance: TeachingAssistant inherits
    // from both Student and Employee

public:
    explicit TeachingAssistant(std::string assistantName)
        : Person(std::move(assistantName)),  // Most-derived class initializes Person
          Student(),                         // Call Student constructor
          Employee() {}                      // Call Employee constructor
};

int main() {
    TeachingAssistant assistant("Riya");
    // Creates TeachingAssistant object
    // Constructor order: Person -> Student -> Employee -> TeachingAssistant

    assistant.displayName();
    // Calls Person's displayName() function

    return 0;
}