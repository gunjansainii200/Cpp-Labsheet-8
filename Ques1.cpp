// Q1. Write a C++ function to find a prime number.

#include <iostream>
using namespace std;

void checkPrime(int number)
{
    int count = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkPrime(number);

    return 0;
}

// Output:
// Enter a number: 7
// Prime Number
