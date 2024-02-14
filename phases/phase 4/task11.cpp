#include<iostream>
using namespace std;

int main()
{
	int ball[5];
	
	for(int i=0;i<5;i++)
	{
		
		cout<<"enter a balls numbers:";
		cin>>ball[i];
		
		
	}
	cout<<"reverse lebals in ball:"<<endl;
	
  for(int i=4;i>=0;i--)
  {
  	cout<<ball[i]<<endl;
  }
	
	return 0;
}
