#include<iostream>
using namespace std;

class A{
	public:
		int id;
		string name,roll;
		dispA()
		{
			cout<<"enter your id=";
			cin>>id;
			cout<<"enter your name=";
			cin>>name;
			cout<<"enter your roll=";
			cin>>roll;
		}
};
class B:public A{
	public:
		int salary;
		string exp;
		dispB()
		{
			cout<<"enter your salary=";
			cin>>salary;
			cout<<"enter your experience=";
			cin>>exp;
		}
		
};
class C:public B{
	public:
		string compname,address;
		dispC()
		{
			cout<<"enter your company name=";
			cin>>compname;
			cout<<"enter your address=";
			cin>>address;
		}
};
class D:public C{
	public:
		string contact,email;
		dispD()
		{
			cout<<"enter your email=";
			cin>>email;
			cout<<"enter your contact number=";
			cin>>contact;
			cout<<endl;
			
		void getData();
		{
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			cout<<"roll="<<roll<<endl;
			cout<<"salary="<<salary<<endl;
			cout<<"experience="<<exp<<endl;
			cout<<"company name="<<compname<<endl;
			cout<<"address="<<address<<endl;
			cout<<"email="<<email<<endl;
			cout<<"contact number="<<contact<<endl;
		
			cout<<endl;
		}	
		}
};
int main()
{
	D d1;
	
	d1.dispA();
	d1.dispB();
	d1.dispC();
	d1.dispD();
	
	return 0;
}
