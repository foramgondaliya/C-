#include<iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the numbers: ";
    cin >> n;

    int f = 0, s = 1, temp;

    cout << "Fibonacci Series up to " << n << " terms: ";

    if (n >= 1) 
	{
        cout << f;
    }

    if (n >= 2) 
	{
        cout << " " << s;
    }

    for (int i = 2; i < n; i++) 
	{
        temp = f + s;
        cout << " " << temp;
        f = s;
        s = temp;
    }

    cout << endl;

    return 0;
}

