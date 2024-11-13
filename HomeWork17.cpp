// HomeWork17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool result1 = (5 > 6 && 7 == 7) || (1 || 0);
    bool result2 = !(5 > 6 && 7 == 7) || (1 || 0);
    bool result3 = !(5 > 6 && 7 == 7) && !(1 || 0);
    bool result4 = !(5 > 6 || 7 == 7) && !(1 || 0);
    bool result5 = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3) && true);
    bool result6 = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3) || true);

    cout << result1 << "\n";
    cout << result2 << "\n";
    cout << result3 << "\n";
    cout << result4 << "\n";
    cout << result5 << "\n";
    cout << result6 << endl;

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
