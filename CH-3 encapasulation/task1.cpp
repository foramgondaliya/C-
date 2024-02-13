#include<iostream>
using namespace std;

class Hotels{
	private:
		int id,year,squantity,rquantity;
		string name,type,rating;
		static string city;
		
	public:
		setData()
		{
			cout<<"enter your hotel id=";
			cin>>this->id;
			cout<<"enter your hotel name=";
			cin>>this->name;
			cout<<"enter your hotel type=";
			cin>>this->type;
			cout<<"enter your hotel rating=";
			cin>>this->rating;
			cout<<"enter your hotel establish year=";
			cin>>this->year;
			cout<<"enter your hotel staff quntity=";
			cin>>this->squantity;
			cout<<"entevvr your hotel room quantity=";
			cin>>this->rquantity;
			
			cout<<endl;
		}
		getData()
		{
			cout<<"id="<<this->id<<endl;
			cout<<"name="<<this->name<<endl;
			cout<<"type="<<this->type<<endl;
			cout<<"rating="<<this->rating<<endl;
			cout<<"establish year="<<this->year<<endl;
			cout<<"staff quantity="<<this->squantity<<endl;
			cout<<"room quantity="<<this->rquantity<<endl;
			
			cout<<endl;
		}
		static getcity()
		{
			cout<<"city="<<city<<endl;
		}	
};
string Hotels::city="rajkot";

int main()
{
	int i,n;
	
	cout<<"enter the number of hotels=";
	cin>>n;
	
	Hotels h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setData();
	}
	
	for(i=0;i<n;i++)
	{
		h[i].getData();
		h[i].getcity();	
	}

	return 0;
}
