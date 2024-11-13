// if_enums_HomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum EnScreenColor { Red = 1, Blue, Green, Yellow }; // others will automaticaly be 2, 3, 4.

void screenColorInput(EnScreenColor &screenColor) {
    unsigned short colorNumber;
    cout << "**************************\n";
    cout << "1- Red\n2- Blue\n3- Green\n4- Yellow\n";
    cout << "Choose your screen color: ";
    cin >> colorNumber;
    screenColor = (EnScreenColor)colorNumber;
}

void screenColorChanger(EnScreenColor screenColor) {
    if (screenColor == EnScreenColor::Red) {
        system("color 4F");
    }
    else if (screenColor == EnScreenColor::Blue) {
        system("color 1F");
    }
    else if (screenColor == EnScreenColor::Green) {
        system("color 2F");
    }
    else if (screenColor == EnScreenColor::Yellow) {
        system("color 6F");
    }else{
        cout << "Wrong number!" << endl;
    }
}

int main() {

    EnScreenColor screenColor;
    screenColorInput(screenColor);
    screenColorChanger(screenColor);

    return 0;
}