#include<iostream>
using namespace std;

class A{
	public:
		int a;
		square()
		{
			cout<<"enter the value of a=";
			cin>>a;
		}
};
class B:public A{
	public:
		int squ;
		dispA()
		{
			squ=a*a;
			cout<<"square="<<squ<<endl;
		}	
};
class C:public A{
	public:
		int cube;
		dispB()
		{
			cube=a*a*a;
			cout<<"cube="<<cube<<endl;
		}	
};
int main()
{
	B b1;
	
	b1.square();
	b1.dispA();
	
	C c1;
	
	c1.square();
	c1.dispB();
	
	return 0;
}
