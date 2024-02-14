#include <iostream>
using namespace std;

bool arm(int number) {
    int a,num=0,sum=0,digit,digit2,i;
    
	a = number;
	
    while(a!=0)
	{
        a=a/10;
        num++;
    }

    a = number;

   
    while(a!=0)
	{
        digit=a%10;

       	digit2 = 1;
       	
        for(i=0;i<num;i++)
		{
            digit2 =digit2* digit;
        }

        sum =sum+ digit2;
        a=a/10;
    }

    if (sum == number) 
	{
        cout <<"Armstrong number." << endl;
    } else 
	{
        cout <<"not Armstrong number." << endl;
    }
    return 0;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    arm(number);

    return 0;
}

