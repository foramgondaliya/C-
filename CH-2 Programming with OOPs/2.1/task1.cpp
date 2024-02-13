#include<iostream>
using namespace std;
	
class employee{
	public:
		int id,age,salary;
		string name,role,exp,city,compname;
};
	
int main()
{
	int i;
	
	employee e[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"enter your id=";
		cin>>e[i].id;
		cout<<"enter your name=";
		cin>>e[i].name;
		cout<<"enter your role=";
		cin>>e[i].role;
		cout<<"enter your age=";
		cin>>e[i].age;
		cout<<"enter your salary=";
		cin>>e[i].salary;
		cout<<"enter your experience=";
		cin>>e[i].exp;
		cout<<"enter your city=";
		cin>>e[i].city;
		cout<<"enter your company name=";
		cin>>e[i].compname;
		
		cout<<endl;
	}
		
		for(i=0;i<5;i++)
		{
			cout<<"ID="<<e[i].id<<endl;
			cout<<"Name="<<e[i].name<<endl;
			cout<<"role="<<e[i].role<<endl;
			cout<<"Age="<<e[i].age<<endl;
			cout<<"salary="<<e[i].salary<<endl;
			cout<<"Experience="<<e[i].exp<<endl;
			cout<<"City="<<e[i].city<<endl;
			cout<<"Companyname="<<e[i].compname<<endl;
			
			cout<<endl;
		}
	
	return 0;
}
