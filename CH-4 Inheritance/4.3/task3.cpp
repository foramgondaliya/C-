#include<iostream>
using namespace std;

class Animal{
	public:
		string age,name,age2,name2,origin,origin2;
		setvalue()
		{
			cout<<"enter the name of zebra=";
			cin>>this->name;
			
			cout<<"enter the age of zebra=";
			cin>>this->age;
			
			cout<<"enter the place of origin of zebra=";
			cin>>this->origin;
			
			cout<<"enter the name of dolphin=";
			cin>>this->name2;
			
			cout<<"enter the age of dolphin=";
			cin>>this->age2;
			
			cout<<"enter the place of origin of Dolphin=";
			cin>>this->origin2;
			
		}
};
class Zebra:public Animal{
	public:
		dispA()
		{
			cout<<"zebra name="<<name<<endl;
			cout<<"Zebra age="<<age<<endl;
			cout<<"Zebra's place of origin="<<origin<<endl;
			cout<<endl;
		}
};
class Dolphin:public Zebra{
	public:
		dispB()
		{
			cout<<"Dolphin name="<<name2<<endl;
			cout<<"Dolphin age="<<age2<<endl;
			cout<<"Dolphin's place of origin="<<origin2<<endl;
			cout<<endl;
		}
};
int main()
{
	Dolphin d1;
	
	d1.setvalue();
	d1.dispA();
	d1.dispB();
	
	return 0;
}
