#include<iostream>
using namespace std;

int main() {
    cout << "Enter a Number: ";
    int num;
    cin >> num;

    if (num >= 10) 
	{
        cout << "Please enter a number less than 10." << endl;
        return 1;
    }
    cout << "Multiplication Table of " << num << ":" << endl;
    
    for (int i = 1; i <= 10; i++) 
	{
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

