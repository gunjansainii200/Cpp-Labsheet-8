
// Q15. Write a program to demonstrate abstraction using an abstract class Shape.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        float radius = 5;
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        int length = 10, breadth = 5;
        cout << "Area of Rectangle: " << length * breadth;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.area();
    r.area();

    return 0;
}

// Output:
// Area of Circle: 78.5
// Area of Rectangle: 50
