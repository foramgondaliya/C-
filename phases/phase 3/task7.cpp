#include<iostream>
using namespace std;

int main() 
{
    int n, i;
    char name[30],name2[30],name3[30],name4[20];

    cout << "Enter the length of string: ";
    cin >> n;

    cout << "Enter any string: ";
    cin >> name;

    for (i = 0; i < n; i++) 
	{
        if (name[i] >= 97 && name[i] <= 122) 
		{
            name[i] = name[i] - 32;
        }
    }

    cout << "Uppercase string: " << name << endl;

    for (i = 0; i < n; i++) 
	{
        if (name2[i] >= 65 && name2[i] <= 90) 
		{
            name2[i] = name2[i] + 32;
        }
    }

    cout << "Lowercase string: " << name2 << endl;

    for (i = 0; i < n; i++) 
	{
        if (name3[i] >= 97 && name3[i] <= 122) 
		{
            name3[i] = name3[i] - 32;
        } else 
		{
            name3[i] = name3[i] + 32;
        }
    }

    cout << "Toggle case string: " << name3 << endl;
    
     for (i = 0; i < n; i++) 
	 {
        if (i == 0 || (name4[i - 1]))
		{
            if (name4[i] >= 97 && name4[i] <= 122) 
			{
                name4[i] = name4[i] - 32;
            }
        }
    }

    cout << "Title case string: " << name4 << endl;
    
    
    return 0;
}

