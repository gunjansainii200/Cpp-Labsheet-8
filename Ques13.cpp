
// Q13. Write a program to demonstrate single inheritance.

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void inputPerson()
    {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
public:
    float marks;

    void inputMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details:";
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nMarks: " << marks;
    }
};

int main()
{
    Student s;

    s.inputPerson();
    s.inputMarks();
    s.display();

    return 0;
}

// Output:
// Enter name: Rahul
// Enter age: 18
// Enter marks: 85
//
// Student Details:
// Name: Rahul
// Age: 18
// Marks: 85
