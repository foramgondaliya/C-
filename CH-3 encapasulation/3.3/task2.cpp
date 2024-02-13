#include<iostream>
using namespace std;

class Cafe{
	private:
		int id,year,squantity;
		string name,type,rating;
		static string city;
		
	public:
		Cafe()
		{
			cout<<"enter cafe's id=";
			cin>>this->id;
			cout<<"enter cafe's name=";
			cin>>this->name;
			cout<<"enter cafe's type=";
			cin>>this->type;
			cout<<"enter cafe's rating=";
			cin>>this->rating;
			cout<<"enter cafe's esablish year=";
			cin>>this->year;
			cout<<"enter cafe's staff quantity=";
			cin>>this->squantity;
			
			cout<<endl;
		}
		getData()
		{
			cout<<"cafe's id="<<this->id<<endl;
			cout<<"cafe's name="<<this->name<<endl;
			cout<<"cafe's type="<<this->type<<endl;
			cout<<"cafe's rating="<<this->rating<<endl;
			cout<<"cafe's year="<<this->year<<endl;
			cout<<"cafe's staff quantity="<<this->squantity<<endl;
		}
		static getcity()
		{
			cout<<"city="<<city<<endl;
			cout<<endl;
		}
		
};
string Cafe::city="rajkot";
int main()
{
	int i,n;
	
	cout<<"enter the number of cafe=";
	cin>>n;
	
	Cafe c[n];
	
	for(i=0;i<n;i++)
	{
		c[i].getData();
		c[i].getcity();	
	}
}
