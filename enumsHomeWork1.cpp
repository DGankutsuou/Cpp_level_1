// enumsHomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum Name { Ayman, Hicham, Salah, Bilal, Ayoub, Yassine }; // Ayman = 0, Yassin = 5
enum City { Settat = 26000, Khribga, Tanger }; // Khribga = 26001
enum Country { Morocco, America, England };
enum Gender { female, male, other };
enum Statu { single, maried, disorved };
enum SckinColor { White, Brown, Black, another = 404 };

int main()
{

    unsigned short age;
    int monthlySalary;
    Name name;
    City city;
    Country country;
    Gender gender;
    Statu statu;
    SckinColor sckinColor;

    name = Name::Ayman;
    city = City::Settat;
    country = Country::Morocco;
    gender = Gender::male;
    statu = Statu::single;
    sckinColor = SckinColor::another;

    cout << "Please enter the folowing informations:\n\n";
    cout << "*************************************\n";
    cout << "Age: ";
    cin >> age;
    cout << "MonthlySalary: ";
    cin >> monthlySalary;
    cout << "*************************************\n";

    cout << "*************************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "MonthlySalary: " << monthlySalary << endl;
    cout << "YearlySalary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Statu: " << statu << endl;
    cout << "Sckin color: " << sckinColor << endl;
    cout << "*************************************\n";

    return 0;
}