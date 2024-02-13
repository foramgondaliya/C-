#include<iostream>
using namespace std;

int main()
{
	float a=5;
	float b=3;
	float sum;
	
	try{
		if(b==0)
		{
			throw 5;
		}
		sum=a*b;
	cout<<"multiplication of a & b="<<sum;
	}catch(int n)
	{
		cout<<"can not multiply by="<<n;
	}
	catch(float n)
	{
		cout<<"can't multiply by="<<n;
	}
	catch(double n)
	{
		cout<<"can't be multipled by="<<n;
	}
	catch(...)
	{
		cout<<"error";
	}
	return 0;
}
