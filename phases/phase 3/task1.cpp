#include<iostream>
using namespace std;

int main() {
    char name[100];
    int j, temp;

    cout << "Enter any String : ";
    cin >> name;

    cout << "Frequency of each letter=" << endl;

    int length = 0;
    while (name[length] != '\0') 
	{
        length++;
    }

    for (char i = 'A'; i <= 'Z'; i++) 
	{
        temp = 0;
        for (j = 0; j < length; j++) 
		{
            if (i == name[j]) 
			{
                temp++;
            }
        }
        if (temp > 0) 
		{
            cout << "'" << i << "' --> " << temp << endl;
        }
    }

    for (char i = 'a'; i <= 'z'; i++) 
	{
        temp = 0;
        for (j = 0; j < length; j++) 
		{
            if (i == name[j]) 
			{
                temp++;
            }
        }
        if (temp > 0) 
		{
            cout << "'" << i << "' --> " << temp << endl;
        }
    }

    return 0;
}

