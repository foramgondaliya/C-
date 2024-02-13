#include<iostream>
using namespace std;

class Shape{
	public:
		int height,weight;
		Shape()
		{	
			cout<<"enter the value of height=";
			cin>>height;
			
			cout<<"enter the value of weight=";
			cin>>weight;
		}
};
class Triangle:public Shape{
	public:
		int tri;
		area()
		{	
			tri=0.5*(height*weight);
			cout<<"the are of triangle is="<<tri<<endl;
		}
		
};
class Rectangle:public Shape{
	public:
		int rec;
		area()
		{
			rec=(height*weight);
			cout<<"the are of rectangle is="<<rec<<endl;
		}
};
int main()
{
	
	Triangle t1;
	t1.area();
	
	Rectangle r1;
	r1.area();
	
	return 0;
}
