#include <iostream>
using namespace std;

int main() 
{

    int num1 = 789;
    int num2 = 12345;
    int num3 = 9876;

    int rev1 = 0;
    int temp1;
    while (num1 > 0) {
        temp1 = num1 % 10;
        rev1 = rev1 * 10 + temp1;
        num1 /= 10;
    }

    int rev2 = 0;
    int temp2;
    while (num2 > 0) {
        temp2 = num2 % 10;
        rev2 = rev2 * 10 + temp2;
        num2 /= 10;
    }

    int rev3 = 0;
    int temp3;
    while (num3 > 0) 
	{
        temp3 = num3 % 10;
        rev3 = rev3 * 10 + temp3;
        num3 /= 10;
    }

    cout << "Reverse of " << 789 << ": " << rev1 << endl;
    cout << "Reverse of " << 12345 << ": " << rev2 << endl;
    cout << "Reverse of " << 9876 << ": " << rev3 << endl;

    return 0;
}

