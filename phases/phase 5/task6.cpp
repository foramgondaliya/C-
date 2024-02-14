#include <iostream>
using namespace std;

int rev(int num) 
{
	int a,b,c=0;
	
    a = num;
    
    while(a>0)
	{
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    cout << "Reverse is = " <<c;
}

int main() 
{
    int num;
    cout << "Enter a number = ";
    cin >> num;
    
    rev(num);
    return 0;
}

