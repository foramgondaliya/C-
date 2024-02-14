#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"enter the value of a=";
	cin>>a;
	
	cout<<"enter the value of b=";
	cin>>b;
	
	cout<<"enter the value of c=";
	cin>>c;
	
	if(a==b && a==c)
	{
		cout<<"all values are same";
	}
	else if(a==b)
	{
		cout<<"a and b are same";
	}
	else if(a==c)
	{
		cout<<"a and c are same";
	}
	if(a>b)
	{
		if(a>c)
		{
			cout<<"a is largest";
		}
		else
		{
			cout<<"c is largest";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"b is largest";
		}
		else
		{
			cout<<"c is largest";
		}
	}
}
