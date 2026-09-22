#include <iostream>
#include <string>
#include <utility>

class University {
public:
    // Nested class: Department is defined inside University
    class Department {
    private:
        std::string name;  // Stores department name

    public:
        explicit Department(std::string departmentName)
            : name(std::move(departmentName)) {}  // Initialize department name

        void display() const {
            std::cout << "Department: " << name << '\n';  // Display department
        }
    };
};

int main() {
    // Access nested class using University::Department
    University::Department department(
        "Artificial Intelligence and Data Science"
    );

    department.display();  // Call display function

    return 0;
}