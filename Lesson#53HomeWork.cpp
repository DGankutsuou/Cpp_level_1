// Lesson#53HomeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void numbersReader(int numbers[5]){
    cout << "**********************\n";
    for(int i = 0; i < 5; i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
}

int numbersUnder50sumer(int numbers[5]){
    int sum = 0;
    for (int i = 0; i < 5; i++){
        if(numbers[i] > 50){
            continue;
        }
        sum += numbers[i];
    }
    return sum;
}

int main()
{
    int numbers[5];
    numbersReader(numbers);
    cout << "sum = " << numbersUnder50sumer(numbers);

    return 0;
}