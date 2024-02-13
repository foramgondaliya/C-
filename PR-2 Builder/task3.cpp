#include<iostream>
using namespace std;

class Bank{
	private:
		string id,password,name,contact;
		int number,bal,transaction[100];
		
	public:
		void setData(string id,string password,string name,int number,string contact,int bal)
		{
			this->id=id;
			this->password=password;
			this->name=name;
			this->number=number;
			this->contact=contact;
			this->bal=bal;
		}
		void getData()
		{
			cout<<"\t\t\t\t\t = name\t\t\t\t"<<this->name<<endl;
			cout<<"\t\t\t\t\t = account number\t\t\t\t"<<this->number;
			cout<<"\t\t\t\t\t = contact\t\t\t\t"<<this->contact;
			cout<<"\t\t\t\t\t = account balance\t\t\t\t"<<this->bal;
		}
		string getId()
		{
			return this->id;
		}
		string getPassword()
		{
			return this->password;
		}
		string getName()
		{
			return this->name;
		}
		int getBalance() const 
		{
        return this->bal;
    	}
};
int main()
{
	int choice,bug=0,choice2,check,n=1,i,amount;
	string uid,upass;
	Bank b[n],staff;
	
	b[0].setData("foramgondaliya","123456","foram",12347,"9876543210",20000);
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!========"<<endl;
	cout<<"\t\t\t\t\t\t\tWELCOME TO HDFC BANK"<<endl;
	cout<<"\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!========"<<endl;
	
	system("pause");
	system("CLS");
	
	cout<<"\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
	cout<<"\t\t\t\t\t\t Staff login"<<endl<<endl;
	cout<<"\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
	
	cout<<"press 1 for staff login=";
	cin>>choice;
	
	cout<<endl;
	
	switch(choice)
	{
		case 1:
			cout<<"\t\t\t\t-------------------------------------------------------------"<<endl<<endl;
			cout<<"\t\t enter your id=";
			cin>>uid;
			cout<<"\t\t enter your password=";
			cin>>upass;
			cout<<"\t\t\t\t-------------------------------------------------------------"<<endl<<endl;
			
			for(i=0;i<n;i++)
			{
				if(b[i].getId()==uid && b[i].getPassword()==upass)
				{
					cout<<"\t\t\t\t\t Login Successful"<<endl;
					staff=b[i];
				}
				else
				{
					bug++;
				}
			}
			if(bug==n)
			{
				cout<<"\t\t\t\t\t login failed"<<endl;
				break;
			}
			system("pause");
			system("CLS");
			
			staff.getData();
			
			cout<<"\t\t\t\t----------------------------------------------"<<endl<<endl;
			cout<<"\t\t\t\t\t press 1 for check balance" <<endl;
			cout<<"\t\t\t\t\t press 2 for withdrow money" <<endl;
			cout<<"\t\t\t\t\t press 3 for diposit money" <<endl;
			cout<<"\t\t\t\t\t press 4 for check all account" <<endl;
			cout<<"\t\t\t\t\t press 5 for exit" <<endl;
			
			cout<<"enter your choice=";
			cin>>choice2;
			
			system("pause");
			system("CLS");
			
			switch(choice2)
			{
				case 1:
					cout<<"\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
					cout<<"\t\t\t\t\t enter the bank account number=";
					cin>>check;
					
					for(i=0;i<n;i++)
					{
						if(b[i].getId()==uid && b[i].getPassword()==upass)
						{
							b[i].getData();
						}
					}
				case 5:
					system("CLS");
					break;
					
				default:
					cout<<"wrong input"<<endl;
			}
					
					
	}
	
	return 0;
}
