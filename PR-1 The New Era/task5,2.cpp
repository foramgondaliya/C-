#include<iostream>
using namespace std;

class student{
	private:
		int id,age;
		string name,std,course;
	};
	
int main()
{
	int i,n;
	
	cout<<"enter the number of students=";
	cin>>n;
	
	student s[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"enter your id=";
		cin>>s[i].id;
		cout<<"enter your age=";
		cin>>s[i].age;
		cout<<"enter your name=";
		cin>>s[i].name;
		cout<<"enter your standard=";
		cin>>s[i].std;
		cout<<"enter your course=";
		cin>>s[i].course;
		
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		cout<<"id="<<s[i].id<<endl;
		cout<<"name="<<s[i].name<<endl;
		cout<<"age="<<s[i].age<<endl;
		cout<<"std="<<s[i].std<<endl;
		cout<<"course="<<s[i].course<<endl;
		
		cout<<endl;
	}
	return 0;
}
	
	

