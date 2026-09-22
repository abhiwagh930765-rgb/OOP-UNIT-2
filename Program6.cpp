#include <iostream>                                  // Used for input/output

class Academic {                                     // Base class for academic marks
protected:
    int academicMarks;                               // Stores academic marks

public:
    explicit Academic(int marks) : academicMarks(marks) {} // Constructor

    void showAcademic() const {                      // Displays academic marks
        std::cout << "Academic Marks: " << academicMarks << '\n';
    }
};

class Sports {                                       // Base class for sports marks
protected:
    int sportsMarks;                                 // Stores sports marks

public:
    explicit Sports(int marks) : sportsMarks(marks) {} // Constructor

    void showSports() const {                        // Displays sports marks
        std::cout << "Sports Marks: " << sportsMarks << '\n';
    }
};

class Student : public Academic, public Sports {     // Multiple inheritance
public:
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {}      // Calls both base constructors

    void showTotal() const {                          // Calculates total marks
        std::cout << "Total Marks: "
                  << academicMarks + sportsMarks << '\n';
    }
};

int main() {
    Student student(80, 15);                         // Creates Student object
    student.showAcademic();                          // Displays academic marks
    student.showSports();                            // Displays sports marks
    student.showTotal();                             // Displays total marks

    return 0;
}