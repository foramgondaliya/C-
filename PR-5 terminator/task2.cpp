#include<iostream>
using namespace std;

class A{
	public:
		void disA()
		{	
			cout<<"this is class A"<<endl;
		}	
};
class B:public A{

	public:
		void disB()
		{		
			cout<<"this is class B"<<endl;
		}	
};
class C:public A{
	
	public:
		void disC()
		{
			cout<<"this is class C"<<endl;
		}	
};
class D:public B,public C{
	public:
		void disD()
		{
			cout<<"this is class D"<<endl;
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
