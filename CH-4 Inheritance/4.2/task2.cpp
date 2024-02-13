#include<iostream>
using namespace std;

class RBI{
	public:
		int p,r,t;
	public:
		disA()
		{
			cout<<"enter the principal=";
			cin>>p;
			cout<<"enter the rate=";
			cin>>r;
			cout<<"enter the time=";
			cin>>t;
			
			cout<<endl;
		}	
		
};
class SBI:public RBI{
	public:
		cal()
		{
			int interest;
			
			interest=p*r*t/100;
			
			cout<<"interest of SBI bank="<<interest<<endl;
			cout<<endl;
		}	
		
};
class BOB:public RBI{
	public:
		cal()
		{
			int interest;
			
			interest=p*r*t/100;
			
			cout<<"interest of BOB bank="<<interest<<endl;
			cout<<endl;
		}	
		
};
class ICICI:public RBI{
	public:
		cal()
		{
			int interest;
			
			interest=p*r*t/100;
			
			cout<<"interest of ICICI bank="<<interest<<endl;
			cout<<endl;
		}	
		
};

int main()
{
	SBI s;
	BOB b;
	ICICI i;
	
	s.disA();
	s.cal();
	
	b.disA();
	b.cal();
	
	i.disA();
	i.cal();
	
	return 0;
}





