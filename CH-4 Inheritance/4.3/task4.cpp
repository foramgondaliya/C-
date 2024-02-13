#include<iostream>
using namespace std;

class Employee{
	public:
		int id;
		string name,email,address,contact;
		read()
		{
			cout<<"enter your id=";
			cin>>id;
			cout<<"enter your name=";
			cin>>name;
			cout<<"enter your email id=";
			cin>>email;
			cout<<"enter your address=";
			cin>>address;
			cout<<"enter your contact number=";
			cin>>contact;
		}
};
class Company{
	public:
		int salary,cid;
		string compname,roll;
		write()
		{
			cout<<"enter your company name=";
			cin>>compname;
			cout<<"enter your company id=";
			cin>>cid;
			cout<<"enter your roll=";
			cin>>roll;
			cout<<"enter your salary=";
			cin>>salary;
			
			cout<<endl;
		}
		
};
class Write:public Employee,public Company{
	public:
	getData()
		{
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			cout<<"email="<<email<<endl;
			cout<<"address="<<address<<endl;
			cout<<"contact="<<contact<<endl;
			cout<<"company name="<<compname<<endl;
			cout<<"company id="<<cid<<endl;
			cout<<"roll="<<roll<<endl;
			cout<<"salary="<<salary<<endl;
			
			cout<<endl;
		}	
};
int main()
{
	Write w;
	
	w.read();
	w.write();
	w.getData();
	
	return 0;
}
