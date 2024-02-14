#include <iostream>
using namespace std;

int main() 
{
    int Size = 100;
    char str[Size];

    cout << "Enter a string: ";
    cin.getline(str,Size);

    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    if (length > 3 && length < 9) 
	{
        int start = 0;
        int end = length - 1;

        while (start < end) 
		{
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        cout << "Reversed string: " << str << endl;
    } 
	else 
	{

        int sum = 0;
        for (int i = 0; i < length; i++) 
		{
            sum=sum+(str[i]);
        }

        cout << "Sum of ASCII values: " << sum << endl;
    }

    return 0;
}

