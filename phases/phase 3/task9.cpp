#include<iostream>
using namespace std;

int main() 
{
    string username;

    cout << "Enter a username: ";
    cin >> username;

    cout << "Digits= ";
    for (int i = 0; i < username.length(); ++i) 
    {
        char ch = username[i];
        if (ch >= '0' && ch <= '9') 
        {
            cout << ch << " ";
        }
    }
    cout << endl;

    cout << "Special Symbols= ";
    for (int i = 0; i < username.length(); ++i) 
    {
        char ch = username[i];
        if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z') && !(ch >= '0' && ch <= '9')) 
        {
            cout << ch << " ";
        }
    }
    cout << endl;

    return 0;
}

