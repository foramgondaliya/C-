#include<iostream>
using namespace std;
int sum(int p,int q)
{
	return p + q ;
}

int sub(int p,int q)
{
	return p - q ;
}

int multi(int p,int q)
{
	return p * q ;
}

int divi(int p,int q)
{
	return p / q ;
}

int modul(int p ,int q)
{
	return p % q ;
}

int main()
{
	int a,b,choice,i;
	
	for(i=0;i<=choice;i++)
	{	
		
	cout<<"Press 1 for +"<<endl;
	cout<<"Press 2 for -"<<endl;
	cout<<"Press 3 for *"<<endl;
	cout<<"Press 4 for /"<<endl;
	cout<<"Press 5 for %"<<endl;
	cout<<"Press 0 for the exit"<<endl;
	
		cout<<"enter your choice=";
		cin>>choice;
	
		if(choice==0)
		{
			break;
		}
		else if(choice>6)
		{
			cout<<"Enter valid Number....";
		}
		
		cout<<"Enter the first number= ";
		cin>>a;
		cout<<"Enter the second number= "; 
		cin>>b;
	
		switch(choice)
		{
			case 1 :
				cout<<"Addition is = "<<sum(a,b)<<endl;
				break;
			
			case 2 :
				cout<<"Substriction is = "<<sub(a,b)<<endl;
				break;
			
			case 3 :
				cout<<"multiplication is = "<<multi(a,b)<<endl;
				break;
			
			case 4 :
				cout<<"division is = "<<divi(a,b)<<endl;
				break;
			
			case 5 :
				cout<<"module is = "<<modul(a,b)<<endl;
				break;
			
			default :
				cout<<"Invalid number";
		}
		
	}
}


