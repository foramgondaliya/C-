#include<iostream>
using namespace std;

class student{
	private:
		int id,age;
		string name,course,email,city,college;
		
	public:
		setData()
		{
			cout<<"enter your id=";
			cin>>this->id;
			cout<<"enter your name=";
			cin>>this->name;
			cout<<"enter your age=";
			cin>>this->age;
			cout<<"enter your course=";
			cin>>this->course;
			cout<<"enter your email=";
			cin>>this->email;
			cout<<"enter your city=";
			cin>>this->city;
			cout<<"enter your college name=";
			cin>>this->college;
			
			cout<<endl;
		}
		getData()
		{
			cout<<"id="<<this->id<<endl;
			cout<<"name="<<this->name<<endl;
			cout<<"age="<<this->age<<endl;
			cout<<"course="<<this->course<<endl;
			cout<<"email="<<this->email<<endl;
			cout<<"city="<<this->city<<endl;
			cout<<"college name="<<this->college<<endl;
			
			cout<<endl;
		}
};
int main()
{
	int i;
	student s[5];
	
	for(i=0;i<5;i++)
	{
		s[i].setData();
	}
	for(i=0;i<5;i++)
	{
		s[i].getData();
	}
		return 0;
}
