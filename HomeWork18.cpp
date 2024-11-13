// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
struct StRegion {
    string country;
    string city;
    unsigned short postalCode;
};
struct StAdress {
    StRegion region;
    string street;
    string residence;
    string floor;
    unsigned short doorNumber;
};
struct StContact {
    string email;
    string phone;
    StAdress adress;
};
struct StFullName {
    string firstName;
    string lastName;
};
struct StSalary {
    int monthlySalary;
    int yearlySalary;
};
struct Person {
    StFullName fullNume;
    unsigned short age;
    StContact countact;
    StSalary salary;
};
int main() {

    Person person1;
    cout << "Enter your informations:\n\n";
    cout << "Enter your first name: ";
    cin >> person1.fullNume.firstName;
    cout << "Enter your last name: ";
    cin >> person1.fullNume.lastName;
    cout << "Enter your age: ";
    cin >> person1.age;
    cout << "Enter your monthly salary: ";
    cin >> person1.salary.monthlySalary;
    cout << "Enter your email: ";
    cin >> person1.countact.email;
    cout << "Enter your phone: ";
    cin >> person1.countact.phone;
    cout << "Enter your country: ";
    cin >> person1.countact.adress.region.country;
    cout << "Enter your city: ";
    cin >> person1.countact.adress.region.city;
    cout << "Enter your postal code: ";
    cin >> person1.countact.adress.region.postalCode;
    cout << "Enter your street: ";
    cin >> person1.countact.adress.street;
    cout << "Enter your residence: ";
    cin >> person1.countact.adress.residence;
    cout << "Enter your floor: ";
    cin >> person1.countact.adress.floor;
    cout << "Enter your door number: ";
    cin >> person1.countact.adress.doorNumber;

    cout << "\nYour first name: " << person1.fullNume.firstName << "\n";
    cout << "Your last name: " << person1.fullNume.lastName << "\n";
    cout << "Your age: " << person1.age << "\n";
    cout << "Your monthly salary: " << person1.salary.monthlySalary << "\n";
    person1.salary.yearlySalary = person1.salary.monthlySalary * 12;
    cout << "Your yearly salary: " << person1.salary.yearlySalary << "\n";
    cout << "Your email: " << person1.countact.email << "\n";
    cout << "Your phone: " << person1.countact.phone << endl;
    cout << "Your country: " << person1.countact.adress.region.country << "\n";
    cout << "Your city: " << person1.countact.adress.region.city << "\n";
    cout << "Your postal code: " << person1.countact.adress.region.postalCode << "\n";
    cout << "Your street: " << person1.countact.adress.street << "\n";
    cout << "Your residence: " << person1.countact.adress.residence << "\n";
    cout << "Your floor: " << person1.countact.adress.floor << "\n";
    cout << "Your door number: " << person1.countact.adress.doorNumber << endl;
  
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
