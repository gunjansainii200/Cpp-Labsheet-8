
// Q12. Write a program to demonstrate encapsulation
// using a class Bank Account.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 1000;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "Current Balance: " << balance;
    }
};

int main()
{
    BankAccount account;

    account.deposit(500);
    account.withdraw(200);
    account.display();

    return 0;
}

// Output:
// Amount deposited successfully.
// Amount withdrawn successfully.
// Current Balance: 1300
