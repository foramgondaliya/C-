#include<iostream>
using namespace std;

int main() {
    int num, Num, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    Num = num;

    while (num > 0) 
	{
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (Num == reverse) 
	{
        cout << Num << " is a palindrome." << endl;
    } else 
	{
        cout << Num << " is not a palindrome." << endl;
    }

    return 0;
}

