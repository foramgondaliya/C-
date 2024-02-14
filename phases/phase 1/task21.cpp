#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int temp = 0;
    int Num = num;

    while (num > 0) {
        num =num/ 10;
        temp++;
    }

    cout << "Number of digits in " << Num << " is: " << temp << endl;

    return 0;
}

