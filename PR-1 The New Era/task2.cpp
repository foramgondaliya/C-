#include<iostream>
using namespace std;

class Time{
	public:
		int hour1,min1,sec1,hour2,min2,sec2;
};
int main()
{
	Time t[1];
	
	int result1,result2,result3;
	
	cout<<"enter the first hour=";
	cin>>t[0].hour1;
	
	cout<<"enter the first  minute=";
	cin>>t[0].min1;
	
	cout<<"enter the first second=";
	cin>>t[0].sec1;
	
	cout<<"enter the next hour=";
	cin>>t[0].hour2;
	
	cout<<"enter the next minute=";
	cin>>t[0].min2;
	
	cout<<"enter the next second=";
	cin>>t[0].sec2;
	
	result1=t[0].hour1+t[0].hour2;
	result2=t[0].min1+t[0].min2;
	result3=t[0].sec1+t[0].sec2;
	
	if(result2>=60)
	{
		result1=result1+result2/60;
		result2=result2%60;
	}
	if(result3>=60)
	{
		result2=result2+result3/60;
		result3=result3%60;
	}
	
	cout<<endl;
	
		cout<<t[0].hour1<<" hours ";
		cout<<t[0].min1<<" minutes ";
		cout<<t[0].sec1<<" seconds + ";
		
		cout<<t[0].hour2<<" hours ";
		cout<<t[0].min2<<" minutes ";
		cout<<t[0].sec2<<" seconds = ";
		
		cout<<result1<<" hour ";
		cout<<result2<<" minute ";
		cout<<result3<<" second ";
		
		cout<<endl;
		
		return 0;
}
