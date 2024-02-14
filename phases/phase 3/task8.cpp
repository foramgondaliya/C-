#include <iostream>

using namespace std;

int main() 
{
	int i;
	string word;
	    
    cout << "Enter a word: ";
    cin >> word;

    int vowelCount = 0;
    int asciiSum = 0;

    for (i = 0; i < word.length(); ++i) {
        char ch = word[i];

        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            vowelCount++;
            asciiSum=asciiSum+int(ch);
        }
    }

    double average = (vowelCount > 0) ? double(asciiSum) / vowelCount : 0;

    cout << "Total vowels: " << vowelCount << endl;
    cout << "Vowels: ";
    for ( i = 0; i < word.length(); ++i) {
        char ch = word[i];
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            cout << ch << " ";
        }
    }
    cout << endl;
    cout << "Average ASCII value of vowels: " << average << endl;

    if (average >= 10 && average <= 1) {
        cout << "Word is \"SMOOTHER\"" << endl;
    } else if (average > 1 && average <= 30) {
        cout << "Word is \"SOBER\"" << endl;
    } else if (average >= 30) {
        cout << "Word is \"HARDER\"" << endl;
    } else {
        cout << "Word is \"GORGEOUS\"" << endl;
    }

    return 0;
}

