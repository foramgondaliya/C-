#include <iostream>
using namespace std;

int Multiplication(float a, float b, float c)
{
    return a * b * c;
}

int main()
{
    float a, b, c;

    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    cout << "Enter Third Number : ";
    cin >> c;
    cout << endl;
	cout<< "Multiplication Is: ";
    cout<< Multiplication(a, b, c);
    cout << endl;
}
