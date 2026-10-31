
// Q5. Write a C++ function to find out the number of words in a string.

#include <iostream>
#include <string>
using namespace std;

int countWords(string str)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && !inWord)
        {
            count++;
            inWord = true;
        }
        else if (str[i] == ' ')
        {
            inWord = false;
        }
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str);

    return 0;
}

// Output:
// Enter a string: Hello World C++
// Number of words: 3
