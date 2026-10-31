
// Q14. Write a program to demonstrate function overloading.

#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Addition of integers: " << c.add(10, 20);
    cout << "\nAddition of decimal numbers: " << c.add(5.5, 2.5);

    return 0;
}

// Output:
// Addition of integers: 30
// Addition of decimal numbers: 8
