#include <iostream>
using namespace std;

class Area{
	public:
   		 virtual void calculate()=0;
};

class Circle:public Area 
{
	protected:
	    double radius,sum;
	
	public:
	    void setdata() 
		{
	        cout<<"Enter the radius=";
	        cin>>radius;
	    }
	
	    void calculate()  
		{
	        sum=3.14*radius*radius;
	        cout<<"Area of circle is="<<sum<<endl<<endl;
	    }
};
class Triangle:public Area
{
	protected:
	    double b,h,sum;
	
	public:
	    void setdata() 
		{
	        cout<<"Enter the base=";
	        cin>>b;
	        cout<<"Enter height=";
	        cin>>h;
	    }
	
	    void calculate()  
		{
	        sum = 0.5*b*h;
	        cout<<"Area of triangle="<<sum<<endl<<endl;
	    }
};

class Rectangle:public Area 
	{
	protected:
	    double length,width,sum;
	
	public:
	    void setdata() 
		{
	        cout<<"Enter length=";
	        cin>>length;
	        cout<<"Enter width=";
	        cin>>width;   
	    }
	
	    void calculate()  
		{
	        sum=length*width;
	        cout<<"Area of rectangle is="<<sum<<endl<<endl;
	    }
};

int main() 
{
    Circle c1;
    c1.setdata();
    c1.calculate();

    Triangle t1;
    t1.setdata();
    t1.calculate();

    Rectangle r1;
    r1.setdata();
    r1.calculate();

    return 0;
}

