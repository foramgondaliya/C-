#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter Number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "this Is Even number" << endl;
    else
        cout << "this Is Odd number" << endl;

    return 0;
}

