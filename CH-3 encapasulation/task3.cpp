#include<iostream>
using namespace std;

class Customers{
	private:
		int id,age;
		string name,bname,city,number,svalidity;
		
	public:
		setData()
		{
			cout<<"enter customer id=";
			cin>>this->id;
			cout<<"enter customer's name=";
			cin>>this->name;
			cout<<"enter customer's age=";
			cin>>this->age;
			cout<<"enter customer telecome brand name=";
			cin>>this->bname;
			cout<<"enter customer's mobile number=";
			cin>>this->number;
			cout<<"enter customer's city=";
			cin>>this->city;
			cout<<"enter customer's simcard validity=";
			cin>>this->svalidity;
			
			cout<<endl;
		}
		getData()
		{
			cout<<"id="<<this->id<<endl;
			cout<<"customer's name="<<this->name<<endl;
			cout<<"customer's age="<<this->age<<endl;
			cout<<"customer telecome brand name="<<this->bname<<endl;
			cout<<"customer's mobile number="<<this->number<<endl;
			cout<<"customer's city="<<this->city<<endl;
			cout<<"customer's simcard validity="<<this->svalidity<<endl;
			
			cout<<endl;
		}
};
int main()
{
	int i;
	Customers c[5];
	
	for(i=0;i<5;i++)
	{
		c[i].setData();
	}
	for(i=0;i<5;i++)
	{
		c[i].getData();
	}
	return 0;
}
