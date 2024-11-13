// Lesson#49HomeWork5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void lettersPrinter(){
    for(int line = 65; line <= 70; line++){
        for(char letter = 65; letter <= line; letter++){
            cout << letter << " ";
        }
        cout << "\n";
    }
}

int main()
{
    lettersPrinter();

    return 0;
}