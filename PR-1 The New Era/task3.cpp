#include<iostream>
using namespace std;

class time{
	public:
		int seconds;
};
int main()
{
	time s[1];
	int i,hour,min,sec;
	
	cout<<"enter the seconds=";
	cin>>s[1].seconds;
	
	hour=s[1].seconds/3600;
	min=s[1].seconds%3600/60;
	sec=s[1].seconds % 60;
	//s[1].seconds=s[1].seconds/3600;
	
	cout << "Time: " << hour << ":" << min << ":" << sec << endl;
	
	return 0;
}
