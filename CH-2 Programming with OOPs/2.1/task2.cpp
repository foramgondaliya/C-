#include<iostream>
using namespace std;
	
class car{
	public:
		int id,year;
		string carcompname,color,model;
};
	
int main()
{
	int i;
	
	car c[4];
	
	for(i=0;i<4;i++)
	{
		cout<<"enter car id=";
		cin>>c[i].id;
		cout<<"enter car company name=";
		cin>>c[i].carcompname;
		cout<<"enter car color =";
		cin>>c[i].color;
		cout<<"enter car model=";
		cin>>c[i].model;
		cout<<"enter car release year=";
		cin>>c[i].year;
		
		cout<<endl;
	}
		
		for(i=0;i<4;i++)
		{
			cout<<"Car_ID="<<c[i].id<<endl;
			cout<<"Car_Company_Name="<<c[i].carcompname<<endl;
			cout<<"Car_Color="<<c[i].color<<endl;
			cout<<"Car_Model="<<c[i].model<<endl;
			cout<<"Car_Release_Year="<<c[i].year<<endl;
			
			cout<<endl;
		}
	
	return 0;
}
