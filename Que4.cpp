
// Q4. Write a C++ function to copy a string from another string.

#include <iostream>
#include <string>
using namespace std;

void copyString(string source, string &destination)
{
    destination = source;
}

int main()
{
    string str1, str2;

    cout << "Enter a string: ";
    getline(cin, str1);

    copyString(str1, str2);

    cout << "Copied string: " << str2;

    return 0;
}

// Output:
// Enter a string: Hello World
// Copied string: Hello World
