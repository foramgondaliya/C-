#include<iostream>
using namespace std;

int main() 
{
    int i;
    string input;

    cout << "Enter a string: ";
    cin >> input;

    int vowel = 0, consonant = 0, digit = 0, special = 0;

    for (i = 0; i < input.length(); i++) 
    {
        char ch = input[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            {
                vowel++;
            } 
            else 
            {
                consonant++;
            }
        }
        else if (ch >= '0' && ch <= '9') 
        {
            digit++;
        }
        else 
        {
            special++;
        }
    }

    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special Symbols: " << special << endl;

    return 0;
}

