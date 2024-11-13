// HomeWork11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string name;
    unsigned short age;
    string city;
    string country;
    int monthlySalary;
    char gender;
    bool maried;

    cout << "Please enter the folowing informations:\n\n";
    cout << "*************************************\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "City: ";
    cin >> city;
    cout << "Country: ";
    cin >> country;
    cout << "MonthlySalary: ";
    cin >> monthlySalary;
    cout << "Gender: ";
    cin >> gender;
    cout << "Maried: ";
    cin >> maried;
    cout << "*************************************\n";

    cout << "*************************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "MonthlySalary: " << monthlySalary << endl;
    cout << "YearlySalary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Maried: " << maried << endl;
    cout << "*************************************\n";

    return 0;
}
