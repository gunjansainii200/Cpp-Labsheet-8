
// Q3. Write a C++ function to apply the Bubble Sort technique on an array.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {5, 2, 8, 1, 3};

    bubbleSort(arr, 5);

    cout << "Sorted array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Output:
// Sorted array: 1 2 3 5 8
