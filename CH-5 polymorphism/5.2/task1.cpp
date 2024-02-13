#include<iostream>
using namespace std;

class Number{
	private:
		int x;
		
	public:
		void setData (int i)
		{
			this->x=i;
		}
	Number operator-(Number n)
	{
		Number sum;
		
		sum.x=this->x-n.x;
		
		return sum;
	}
	getData()
	{
		cout<<"Substraction of both values="<< this->x;
	}	
};

int main()
{
	Number n1,n2,n3;
	
	n1.setData(80);
	n2.setData(40);
	
	n3=n1-n2;
	
	n3.getData();
	
	return 0;
	
}
