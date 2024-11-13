// Lesson#48HomeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void readInfo(StPerson& person) {
    cout << "**************************\n";
    cout << "Enter the first name: ";
    cin >> person.fullName.firstName;
    cout << "Enter the last name: ";
    cin >> person.fullName.lastName;
    cout << "Enter the age: ";
    cin >> person.age;
    cout << "Enter the phone number: ";
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

void readPersonsInfo(StPerson person[100], int &personsNumber) {
    cout << "How many persons you have?\n";
    cin >> personsNumber;
    for(int i = 0; i < personsNumber; i++){
        cout << "\nPerson number " << i + 1 << "\n";
        readInfo(person[i]);
    }
}

void printPersonsInfo(StPerson person[100], int personsNumber) {
    for(int i = 0; i < personsNumber; i++){
        cout << "\nPerson number " << i + 1 << "\n";
        printInfo(person[0]);
    }
    
}

int main()
{
    StPerson person[100];
    int personsNumber;
    readPersonsInfo(person, personsNumber);
    printPersonsInfo(person, personsNumber);

    return 0;
}