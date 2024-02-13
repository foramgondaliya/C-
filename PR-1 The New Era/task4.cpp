#include<iostream>
using namespace std;

class house{
	public:
		int chair,door,window,bed,fan;
};
int main()
{
	int i,n;
	
	cout<<"how many rooms=";
	cin>>n;
	
	house h[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"enter the number of chairs=";
		cin>>h[i].chair;
		cout<<"enter the number of door=";
		cin>>h[i].door;
		cout<<"enter the number of window=";
		cin>>h[i].window;
		cout<<"enter the number of bed=";
		cin>>h[i].bed;
		cout<<"enter the number of fan=";
		cin>>h[i].fan;
		
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		cout<<"chair="<<h[i].chair<<endl;
		cout<<"doors="<<h[i].door<<endl;
		cout<<"window="<<h[i].window<<endl;
		cout<<"bed="<<h[i].bed<<endl;
		cout<<"fan="<<h[i].fan<<endl;
		
		cout<<endl;
	}
	return 0;
}
