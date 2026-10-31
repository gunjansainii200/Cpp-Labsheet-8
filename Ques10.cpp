
// Q10. Write a program to define a class Student
// with data members name, roll_no, and marks.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int roll_no;
    float marks;

public:
    void input()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details:";
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll_no;
        cout << "\nMarks: " << marks;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}

// Output:
// Enter name: Rahul
// Enter roll number: 101
// Enter marks: 85
//
// Student Details:
// Name: Rahul
// Roll Number: 101
// Marks: 85
