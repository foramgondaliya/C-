#include<iostream>
using namespace std;

int main()
{
	int r,c;
	
	cout<<"enter a row size:";
	cin>>r;
	cout<<"column size:";
	cin>>c;
	int a[r][c],i,j;
	
	for(i=0;i<r;i++)
	{
for(j=0;j<c;j++)
{
	cout<<"enter a elements:";
	cin>>a[i][j];
	
}
}
cout<<endl;

	for(i=0;i<r;i++)
	{
for(j=0;j<c;j++)
{

	cout<<a[j][i]<<" ";

}
	cout<<endl;
}


	
	
	
	return 0;
}
