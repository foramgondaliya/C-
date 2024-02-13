#include<iostream>
using namespace std;

int main()
{
	int a[30],i,n;
	
	cout<<"enter the size of array=";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;	
}
