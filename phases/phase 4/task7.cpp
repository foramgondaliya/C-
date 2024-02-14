#include<iostream>
using namespace std;

int main()
{
	
	int a[3][3],ar[3][3],arr[3][3],i,j;
	
	for(i=0;i<3;i++)
	{
for(j=0;j<3;j++)
{
	cout<<"enter a elements:";
	cin>>a[i][j];
	
}
}
cout<<endl<<endl;

for(i=0;i<3;i++)
	{
for(j=0;j<3;j++)
{
	cout<<"enter a elements:";
	cin>>ar[i][j];
	
}
}

	for(i=0;i<3;i++)
	{
for(j=0;j<3;j++)
{
	arr[i][j]=a[i][j]+ar[i][j];
	cout<<arr[i][j]<<endl;

}
	cout<<endl;
}


	
	
	
	return 0;
}
