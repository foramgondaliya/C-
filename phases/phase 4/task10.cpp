#include<iostream>
using namespace std;

int main()
{
	
	int a[5][5],i,j,arr[5][5];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
	
		cout<<"enter a numbers:";
		cin>>a[i][j];
		
	}
	
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		{
	
	arr[i][j]=a[i][j]*a[i][j];
	cout<<arr[i][j]<<"  ";
	
	
	}
	cout<<endl;
	
	}
	
	int sum=0;
	
for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
	
	if(i==j)
	{
		sum+=arr[i][j];
	}

	}
	
		}
		
		cout<<endl;
	cout<<"sum is:"<<sum;
	
	
	
	
	return 0;
}
