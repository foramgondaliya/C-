#include<iostream>
using namespace std;

int main()
{
int ar[3][3],i,j;


for(i=0;i<3;i++)
	{
for(j=0;j<3;j++)
{
	cout<<"enter a elements:";
	cin>>ar[i][j];
	
}
}

int max,min;

max=ar[0][0];

for(i=1;i<3;i++)
	{
for(j=1;j<3;j++)
{
if(ar[i][j]>max)
   max=ar[i][j];
}

}

cout<<"highest weight is:"<<max;

cout<<endl<<endl;
min=ar[0][0];

for(i=0;i<3;i++)
	{
for(j=0;j<3;j++)
{
if(ar[i][j]<min)
   min=ar[i][j];
}

}

cout<<"lowest weight is:"<<min;


	
	return 0;
}
