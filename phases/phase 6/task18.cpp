#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    num =num+8;

    num =num*3;

    num =num-12;

    num =num+5;

    int birthYear;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    num += birthYear;

    int currentYear = 2024; 
    num -= currentYear;

    cout << "The final number after all operations: " << num << endl;

    if (num % 7 == 0) 
	{
        cout << "The number is divisible by 7." << endl;
    } else 
	{
        cout << "The number is not divisible by 7." << endl;
    }

    return 0;
}

