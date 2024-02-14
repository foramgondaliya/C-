#include <iostream>
using namespace std;

factorial(int a, int b)
{

    int i,sum;
    
    if(a<b)
	{
	    for(i=a;i<=b;i++)
		{
	        sum=sum*i;
	    }
    	cout<< "factorial is number is ="<<sum;
	}
	else
	{
		cout<<"cannot find the factorial";
	}
}

int main() 
{
    int a, b;
    cout << "Enter the first number = ";
    cin >> a;
    cout << "Enter the last number = ";
    cin >> b;

    factorial(a, b);

    return 0;
}

