// Lesson#49HomeWork2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void starsPrinter(){
    for(int line = 10; line >= 1; line--){
        for(int star = line; star >= 1; star--){
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    starsPrinter();

    return 0;
}