#include<iostream>
using namespace std;

class x{
	public:
		cubea();
		int a,b,c,sum,cube,A,B,C;
};
class y:public x{
	public:
		cubeb();
		
		setData()
		{
			cout<<"enter the value of a=";
			cin>>a;
			cout<<"enter the value of b=";
			cin>>b;
			cout<<"enter the value of c=";
			cin>>c;
		}
		getData()
		{
			
			A=a*a*a;
			B=b*b*b;
			C=c*c*c;
			
			cout<<"a="<<A<<endl;
			cout<<"b="<<B<<endl;
			cout<<"c="<<C<<endl;
			
			sum=A+B+C;
			
			cout<<"sum of cube is="<<sum<<endl;
		}
};
int main()
{
	y y1;
	
	y1.setData();
    y1.getData();

	
	return 0;
}
