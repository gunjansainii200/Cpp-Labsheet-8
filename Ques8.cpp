
// Q8. Write a C++ function to find the sum of diagonal numbers in a matrix.

#include <iostream>
using namespace std;

void diagonalSum(int matrix[3][3])
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum = sum + matrix[i][i];
    }

    cout << "Sum of diagonal elements: " << sum;
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    diagonalSum(matrix);

    return 0;
}

// Output:
// Sum of diagonal elements: 15
