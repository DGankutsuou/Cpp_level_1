// Lesson#49HomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// print from AA to ZZ

#include <iostream>
using namespace std;

void aaaTOzzz(){
    for(char firstLetter = 65; firstLetter <= 90; firstLetter++){
        cout << "********" << firstLetter << "********\n";
        for(char secondLetter = 65; secondLetter <= 90; secondLetter++){
            cout << firstLetter << secondLetter;
            if(secondLetter != 90){
                cout << ", ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    aaaTOzzz();

    return 0;
}