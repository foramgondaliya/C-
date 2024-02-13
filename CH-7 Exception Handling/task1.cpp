#include<iostream>
using namespace std;

int main()
{
    float a = 5;
    float b = 0;
    float ans;
    char c;
    char ch;

    cout << "Press 1 to divided by zero:" << endl;
    cout << "Press 2 to be able to vote:" << endl;
    cout << "Press 3 for password validate:" << endl;

    cout << "Enter your choice:";
    cin >> ch;

    cout << endl;

    switch (ch)
    {

    case '1':

        try {

            if (b == 0) 
			{
                throw b;
            }
            ans = a / b;
            cout << "Division is:" << ans;
        } catch (float n) {
            cout << "Cannot be divided by zero";
        }

        break;

    case '2':

        try {

            if (a <= 18) 
			{
                throw a;
            }

            cout << "You are able to vote";
        } catch (float a) 
		{
            cout << "Cannot be able to vote";
        }
        break;

    case '3':

        try {
            cout << "Enter a character for password validation: ";
            cin >> c;
            if (c >= 'A' && c <= 'Z') 
			{
                throw c;
            }
            
             cout << "Incorrect password character" << c << endl;
            
        } catch (char c) 
		{
           cout << "Password validation successful!" << endl;
        }
        break;
    }

    return 0;
}

