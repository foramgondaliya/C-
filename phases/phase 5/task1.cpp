#include<iostream>
using namespace std;
 
int sum(int a,int b)
{
    return a+b;
}
 
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    return a/b;
}
int modul(int a,int b)
{
	return a%b;
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
		cout<<"Exit"<<endl;
		break;
        }
        else if(choice>6)
        {
            cout<<"Enter valid Number";
		}
		
		cout<<"Enter the first number= ";
		cin>>a;
		cout<<"Enter the second number= ";
		cin>>b;
		switch(choice)
		{
		case 1 :
            cout<<"Addition of a and b is = "<<sum(a,b)<<endl;
            break;
		case 2 :
			cout<<"Substriction of a and b is = "<<sub(a,b)<<endl;
			break;
		case 3 :
			cout<<"multiplication of a and b is = "<<multi(a,b)<<endl;
			break;
        case 4 :
            cout<<"division of a and b is = "<<divi(a,b)<<endl;
            break;
        case 5 :
            cout<<"module of a and b is = "<<modul(a,b)<<endl;
            break; 
        default :
            cout<<"Invalid Input....";
        }
    }
}

