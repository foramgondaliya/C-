#include<iostream>
using namespace std;

int main()
{
	int i,a[30],n,fact=1;
	
	cout<<"enter the number=";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"]="<<i<<endl;
	}
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial number is="<<fact;
	
	return 0;
}
