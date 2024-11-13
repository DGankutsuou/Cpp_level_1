// Lesson#52HomeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int indexFinder(int arr[10], int number){
    int index = 0;
    int iteration = 1;
    for(index = 0; index < 10; index++){
        cout << "We are at iteration " << iteration << endl;
        if(arr[index] == number){
            break;
        }
        iteration++;
    }
    return index;
}

void indexPrinter(int arr[10], int number){
    cout << "The index of " << number << " is: " << indexFinder(arr, number) << endl;
}

int main()
{
    int numbers[10] = {12,20,34,23,5,4,56,98,67,21};
    indexPrinter(numbers, 20);

    return 0;
}