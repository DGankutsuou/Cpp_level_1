// Lesson#49HomeWork3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void numbersPrinter(){
    for(int line = 10; line >= 1; line--){
        for(int number = 1; number <= line; number++){
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