#include<iostream>  
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int temp = 0;
    int digit;
    int Num = num;

    while (num != 0) {
        digit = num % 10;
        temp=temp+digit;
        num /= 10;
    }

    cout << "Sum of all numbers in " << Num << " is: " << temp << endl;

    return 0;
}

