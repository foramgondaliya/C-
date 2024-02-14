#include<iostream>

using namespace std;

int main() 
{
    float side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cout << "Side 1: ";
    cin >> side1;

    cout << "Side 2: ";
    cin >> side2;

    cout << "Side 3: ";
    cin >> side3;

    float a, b, c;
    if (side1 <= side2 && side1 <= side3) 
	{
        a = side1;
        b = side2;
        c = side3;
    } 
	else if (side2 <= side1 && side2 <= side3) 
	{
        a = side2;
        b = side1;
        c = side3;
    } else 
	{
        a = side3;
        b = side1;
        c = side2;
    }

    if (a * a + b * b > c * c) 
	{
        cout << "The triangle is acute." << endl;
    } 
	else if (a * a + b * b == c * c) 
	{
        cout << "The triangle is a right triangle." << endl;
    } 
	else 
	{
        cout << "The triangle is obtuse." << endl;
    }

    return 0;
}

