#include <iostream>

using namespace std;

class AlphabetAscii {
private:
    int asciiValues[23]; 

public:
    AlphabetAscii() 
	{
        int index = 0;
        for (char c = 'A'; c <= 'Z'; ++c) {
            if (c != 'D' && c != 'W' && c != 'Z') 
			{ 
                asciiValues[index++] = static_cast<int>(c);
            }
        }
    }

    int* getAsciiValues() 
	{
        return asciiValues;
    }
};

int main() 
{
    AlphabetAscii alphabet;

    int* asciiArray = alphabet.getAsciiValues();

    int sum = 0;
    for (int i = 0; i < 23; ++i) 
	{
        sum += asciiArray[i];
    }

    if (sum % 2 == 0) 
	{
        cout << "Sum of ASCII values is even: " << sum << endl;
    } 
	else 
	{
        cout << "Sum of ASCII values is odd: " << sum << endl;
    }

    return 0;
}

