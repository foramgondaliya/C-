#include<iostream>
using namespace std;

class P{
	public:
		float temp;
		
		degree()
		{
			cout<<"enter the degree=";
			cin>>temp;
			
			cout<<"celsius="<<temp;
			cout<<endl;
		}	
};
class Q:public P{
	public:
		
		float f;
		
		toFehrenheit()
		{
			f=(temp*9/5)+32;
			cout<<"fehrenheit="<<f<<endl;
		}
};
class R:public Q{
	public:
		
		float k;
		
		toKelvin()
		{
			k=(f-32)*5/9+273.15;
			cout<<"kelvin="<<k<<endl;
		}
};
int main()
{
	R r;
	
	r.degree();
	r.toFehrenheit();
	r.toKelvin();
}
