#include<iostream>
using namespace std;

int main() {
    cout << "Enter Character Here: ";
    char a;
    cin >> a;

    if (a >= 'a' && a <= 'z')
        cout << "Your character Is Lowercase" << endl;
    else if (a >= 'A' && a <= 'Z')
        cout << "Your character Is Uppercase" << endl;
    else if (a >= '0' && a <= '9')
        cout << "Your character Is Number." << endl;
    else
        cout << "Your character Is Special Character" << endl;

    return 0;
}

