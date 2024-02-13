#include<iostream>
using namespace std;

class Train{
	private:
		int number;
		string name,desti,source,time;
		
	public:

		Train()
		{
			cout<<"enter the train number=";
			cin>>this->number;
			cout<<"enter the train name=";
			cin>>this->name;
			cout<<"enter the train source=";
			cin>>this->source;
			cout<<"enter the train destination=";
			cin>>this->desti;
			cout<<"enter the train time=";
			cin>>this->time;
			
			cout<<endl;
		}
		getData()
		{
			cout<<"Train number="<<this->number<<endl;
			cout<<"Train name="<<this->name<<endl;
			cout<<"Train source="<<this->source<<endl;
			cout<<"Train destination="<<this->desti<<endl;
			cout<<"Train time="<<this->time<<endl;
			
			cout<<endl;
		}
		int getNumber() const 
		{
        	return this->number;
    	}
};
int main()
{
	int i,find,num;
	
		cout<<"enter the number of trains=";
		cin>>num;
		
	 while(num<3) 
	 {
        cout<<"Error"<< endl;
        cout<<"enter the number of trains=";
        cin>>num;
    }
	
	Train t[num];
		
	cout<<"enter the train number=";
	cin>>find;
	
	for(i=0;i<num;i++)
	{
		if(t[i].getNumber()==find)
		{
			t[i].getData();
			break;
		}
	}
	return 0;
}
