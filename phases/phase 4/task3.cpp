#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[100];

    cout << "Enter a word: ";
    cin >> word;

    char shiftKeys[] = "`~!@#$%^&*()_+{}|:\"<>?";
     int numShiftKeys = strlen(shiftKeys);

    bool found = false;
    
    
    for (int i = 0; word[i] != '\0'; i++) {
        for (int j = 0; j < numShiftKeys; j++) {
            if (word[i] == shiftKeys[j]) {
                found = true;
                break;
            }
        }
        if (found) 
		{
            break;
        }
    }

    if (found) {
        cout << "The word contains a character between SHIFT keys.\n";
    } else {
       cout << "The word does not contain any character between SHIFT keys.\n";
    }

    return 0;
}

