#include<iostream>
using namespace std;

class A{
	public:
		int p;
		void disA()
		{	
			cout<<"enter the value of p=";
			cin>>p;
		}	
};
class B:public A{

	public:
		int q;
		void disB()
		{		
			cout<<"enter the value of q=";
			cin>>q;
		}	
};
class C:public A{
	
	public:
		int r;
		void disC()
		{
			cout<<"enter the value of r=";
			cin>>r;
		}	
};
class D:public B,public C{
	public:
		void disD()
		{
			int s,sum;
			
			cout<<"enter the value of s=";
			cin>>s;
			
			sum=B::p+q+C::r+s;
		
			cout<<"sum of p,q,r,s is "<<sum<<endl;
		}		
};
int main()
{
	D d1;
	
	d1.B::disA();
	d1.disB();
	d1.disC();
	d1.disD();
	
	return 0;
}
