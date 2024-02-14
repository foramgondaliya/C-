#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number: ";
    cin >> num;

    int fact = 1;

    for (int i = num; i >= 1; i--) 
	{
        fact=fact*i;
    }

    cout << "Your Factorial Number Is: " << fact << endl;

    return 0;
}

