#include <iostream>
using namespace std;

enum en_Odd_Even {Odd = 1, Even, Both};

unsigned int readNumber(){
    unsigned int number;
    cout << "*********************\n";
    cout << "Enter N: ";
    cin >> number;

    return number;
}

en_Odd_Even odd_even_both(){
    unsigned int type;
    cout << "1: Odd numbers\n2: Even numbers\n3: Both\nWhat dost thou desire to add? ";
    cin >> type;
    en_Odd_Even numberType = (en_Odd_Even)type;
    return numberType;
}

en_Odd_Even check_number_odd_or_even(unsigned int number){
    if(number % 2 != 0)
        return en_Odd_Even::Odd;
    else
        return en_Odd_Even::Even;
}

unsigned int sumNumbersFrom1toN(unsigned int n){
    unsigned int numbers = 0;
    en_Odd_Even numberType;

    while((numberType != Odd) && (numberType != Even) && (numberType != Both)){
        numberType = odd_even_both();
        if(numberType == Odd){
            for(unsigned int counter = 1; counter <= n; counter++){
                if(check_number_odd_or_even(counter) == en_Odd_Even::Odd){
                    numbers += counter;
                }
            }
        }else if(numberType == Even){
            for(unsigned int counter = 1; counter <= n; counter++){
                if(check_number_odd_or_even(counter) == en_Odd_Even::Even){
                    numbers += counter;
                }
            }
        }else if(numberType == Both){
            for(unsigned int counter = 1; counter <= n; counter++){
                numbers += counter;
            }
        }else {
            cout << "Erorr: You Chose a wrong number" << endl;
        }
    }

    return numbers;
}

int main()
{
    unsigned int number = readNumber();
    cout << sumNumbersFrom1toN(number) << endl;
    
    return 0;
}