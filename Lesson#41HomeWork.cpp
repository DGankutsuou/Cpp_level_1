// Lesson#41HomeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
// array and structres and functions.

#include <iostream>
using namespace std;

struct StFullName {
    string firstName;
    string lastName;
};

struct StPerson {
    StFullName fullName;
    unsigned short age;
    string phoneNumber;
};

void readInfo(StPerson &person) {
    cout << "**************************\n";
    cout << "Enter your first name: ";
    cin >> person.fullName.firstName;
    cout << "Enter your last name: ";
    cin >> person.fullName.lastName;
    cout << "Enter your age: ";
    cin >> person.age;
    cout << "Enter your phone number: ";
    cin >> person.phoneNumber;
    cout << "**************************" << endl;
}

void printInfo(StPerson person) {
    cout << "**************************\n";
    cout << "First name: " << person.fullName.firstName << "\n";
    cout << "Last name: " << person.fullName.lastName << "\n";
    cout << "Age: " << person.age << " years.\n";
    cout << "Phone number: " << person.phoneNumber << "\n";
    cout << "**************************" << endl;
}

void readPersonsInfo(StPerson person[2]) {
    readInfo(person[0]);
    readInfo(person[1]);
}

void printPersonsInfo(StPerson person[2]) {
    printInfo(person[0]);
    printInfo(person[1]);
}

int main()
{
    StPerson person[2];
    readPersonsInfo(person);
    printPersonsInfo(person);

    return 0;
}