// Lesson#49HomeWork6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void numbersPrinter(){
    for(int line = 1; line <= 10; line++){
        for(int number = line; number <= 10; number++){
            cout << number << " ";
        }
        cout << "\n";
    }
}

int main()
{
    numbersPrinter();

    return 0;
}