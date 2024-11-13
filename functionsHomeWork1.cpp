// functionsHomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void mySumProcedure(){
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "\nEnter number 2: ";
    cin >> num2;
    cout << "************************\n";
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

int mySumFunction(){
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "\nEnter number 2: ";
    cin >> num2;

    return num1 + num2;
}

int main()
{
    mySumProcedure();
    cout << mySumFunction() << endl;

    return 0;
}
