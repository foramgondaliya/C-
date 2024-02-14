#include <iostream>
using namespace std;

int main() 
{
    float base,exponent,result=1;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    for (int i = 0; i < exponent; i++) 
	{
        result=result*base;
    }

    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}

