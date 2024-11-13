// switch_enums_HomeWork2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum EnCountry { Morocco = 1, America, England, Japan, Australia, China, Jordan };

void countryInput(EnCountry& country) {
    unsigned short countryNumber;
    cout << "**************************\n";
    cout << "1- Morocco\n2- America\n3- England\n4- Japan\n5- Australia\n6- China\n7- Jordan\n";
    cout << "Choose your country: ";
    cin >> countryNumber;
    country = (EnCountry)countryNumber;
}

void countryPrinter(EnCountry country) {
    switch (country) {
    case EnCountry::Morocco:
        cout << "Your country is Morocco" << endl;
        break;

    case EnCountry::America:
        cout << "Your country is America" << endl;
        break;

    case EnCountry::England:
        cout << "Your country is England" << endl;
        break;

    case EnCountry::Japan:
        cout << "Your country is Japan" << endl;
        break;

    case EnCountry::Australia:
        cout << "Your country is Australia" << endl;
        break;

    case EnCountry::China:
        cout << "Your country is China" << endl;
        break;

    case EnCountry::Jordan:
        cout << "Your country is Jordan" << endl;
        break;

    default:
        cout << "Wrong number!" << endl;
    }
}

int main() {

    EnCountry country;
    countryInput(country);
    countryPrinter(country);

    return 0;
}