// Program 6: Demonstration of Multiple Inheritance

#include <iostream>
using namespace std;

// First base class
class Academic
{
protected:
    int academicMarks;

public:
    // Constructor
    Academic(int marks)
    {
        academicMarks = marks;
    }

    // Display academic marks
    void showAcademic()
    {
        cout << "Academic Marks: " << academicMarks << endl;
    }
};

// Second base class
class Sports
{
protected:
    int sportsMarks;

public:
    // Constructor
    Sports(int marks)
    {
        sportsMarks = marks;
    }

    // Display sports marks
    void showSports()
    {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

// Multiple inheritance
class Student : public Academic, public Sports
{
public:
    // Constructor
    Student(int academic, int sports)
        : Academic(academic), Sports(sports)
    {
    }

    // Display total
    void showTotal()
    {
        cout << "Total Marks: "
             << academicMarks + sportsMarks << endl;
    }
};

int main()
{
    // Create Student object
    Student s(76, 18);

    // Display marks
    s.showAcademic();
    s.showSports();
    s.showTotal();

    return 0;
}
