
// Q2. Write a C++ function to print the Fibonacci series.

#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, next;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";
    fibonacci(n);

    return 0;
}

// Output:
// Enter number of terms: 7
// Fibonacci series: 0 1 1 2 3 5 8
