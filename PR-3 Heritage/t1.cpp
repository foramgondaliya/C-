#include<iostream>
using namespace std;

class Distance{
	private:
		
		int a,b;
		
	public:
			
		setData(int x,int y)
		{
			this->a=x;
			this->b=y;
		}
			
		Distance operator+(Distance n)
		{
			Distance d;
	
			d.a=(this->a+n.a)+(this->b+n.b)/12;
			d.b=(this->b+n.b)%12;
     	 	return d;
		}

		getData()
		{
			cout<<this->a<<"feet "<<this->b<<"inch ";
		}

};

int main()
{
	
	Distance d1,d2,d3;
	
	d1.setData(8,14);
	d2.setData(9,18);
	
	d3=d1+d2;
	
	d3.getData();	
}
