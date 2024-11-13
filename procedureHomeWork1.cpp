// procedureHomeWork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Procedure is a void function which return nothing.
void print_informations_card() {
    cout << "**************************\n";
    cout << "Name: " << "Ayman Abourizq\n";
    cout << "Age: " << "18\n";
    cout << "city: " << "Settat\n";
    cout << "Country: " << "Morocco\n";
    cout << "**************************\n" << endl;
}
void print_stars() {
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n" << endl;
}
void print_promise() {
    cout << "I love programing!\n\n";
    cout << "I promise to be the best developer ever!\n\n";
    cout << "I know it will take some time to practice, but I will achieve my goal.\n\n";
    cout << "Best Regards.\n";
    cout << "Ayman Abourizq.\n" << endl;
}
void print_H() {
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*****\n";
    cout << "*   *\n";
    cout << "*   *\n" << endl;
}

int main() {

    print_informations_card();
    print_stars();
    print_promise();
    print_H();

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
