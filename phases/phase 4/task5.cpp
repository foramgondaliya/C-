#include<iostream>
using namespace std;

int main()
{

int n;

cout<<"enter a number for print odd and even no:";
cin>>n;
cout<<endl;
int a[n],i,ao[n],ae[n],even=0,odd=0;

for(i=0;i<n;i++)
{
cout<<"enter a number:";
cin>>a[i];


}
cout<<endl;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
	ae[even]=a[i];
	even++;
}
else{
	ao[odd]=a[i];
	odd++;
}
}

cout<<"Even numbers:";
    for (i=0;i<even;i++)
    {
        cout<<ae[i]<<" ";
    }
    cout<<endl;

    cout<<"Odd numbers:";
    for (i=0;i<odd;i++)
    {
        cout<<ao[i]<< " ";
    }
    cout<<endl;

	
	return 0;
}
