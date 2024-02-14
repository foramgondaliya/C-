#include <iostream>

using namespace std;

int main() 
{
    int height;

    cout << "Enter your height=";
    cin >> height;

    int feet = height / 12;
    int Inches = height % 12;

    cout << "Height: " << feet << " feet " << Inches << " inches" << endl;

    return 0;
}

