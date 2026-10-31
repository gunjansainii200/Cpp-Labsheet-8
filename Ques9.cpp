
// Q9. Write a C++ function to swap two numbers using call-by-reference.

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swapNumbers(num1, num2);

    cout << "After swapping: ";
    cout << num1 << " " << num2;

    return 0;
}

// Output:
// Enter two numbers: 10 20
// After swapping: 20 10
