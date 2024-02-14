#include<iostream>
using namespace std;

int main()
{
	int a[2],ar[4],arr[6],k,i;
	for(i=0;i<2;i++)
	{
	cout<<"enter a elemnts:";
	cin>>a[i];
	arr[i]=a[i];
	}

k=i;
cout<<endl;
for(i=0;i<4;i++)
	{

	cout<<"enter a elemnts:";
	cin>>ar[i];
		arr[k]=ar[i];
		k++;
	}

for(i=0;i<k;i++)
{	
	cout<<"new container:"<<arr[i];
}
	
	return 0;
	
	
}
