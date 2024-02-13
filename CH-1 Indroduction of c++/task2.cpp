#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,i;
	char name[30];
	
	cout<<"enter any string=";
	cin>>name;
	
	n=strlen(name);
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
		else if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	cout<<"togglecase="<<name;
	
	return 0;
}
