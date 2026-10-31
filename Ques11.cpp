
// Q11. Write a program to define a class Car
// with members brand and price.

#include <iostream>
#include <string>
using namespace std;

class Car
{
    string brand;
    float price;

public:
    void input()
    {
        cout << "Enter car brand: ";
        cin >> brand;

        cout << "Enter car price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nBrand: " << brand;
        cout << "\nPrice: " << price << endl;
    }
};

int main()
{
    Car car1, car2;

    cout << "Enter details of first car:\n";
    car1.input();

    cout << "\nEnter details of second car:\n";
    car2.input();

    cout << "\nCar Information:";
    car1.display();
    car2.display();

    return 0;
}

// Output:
// Enter details of first car:
// Enter car brand: BMW
// Enter car price: 500000
//
// Enter details of second car:
// Enter car brand: Audi
// Enter car price: 600000
//
// Car Information:
// Brand: BMW
// Price: 500000
// Brand: Audi
// Price: 600000
