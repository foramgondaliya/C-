#include<iostream>
using namespace std;

int main()
{

int ar[10]={1990,2000,2021,2037,1967,2022,2000,2052,1990,1987},i,arr[10],k=0;
int j;


for(i=0;i<10;i++)
{

	for(j=i+1;j<10;j++)
	{
		if(ar[i]==ar[j] )
		{
			arr[k]=ar[i];
			k++;
			break;
		}
	}
}

for(i=0;i<k;i++)
{
	cout<<"Duplicate number :"<<arr[i];
}
	return 0;
}
