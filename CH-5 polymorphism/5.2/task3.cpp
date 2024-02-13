#include<iostream>
using namespace std;

class Number {
private:
    int x;

public:
    void setData(int i) 
	{
        this->x=i;
    }

    int operator<(Number n) 
	{
        return this->x<n.x;
    }
    int operator==(Number n) 
	{
        return this->x==n.x;
    }
};

int main() 
{
    Number n1,n2,n3;

    n1.setData(30);
    n2.setData(50);

    if(n1<n2) 
	{
        cout<<"n1 is less than n2"<<endl;
    } 
    else if(n1==n2)
    {
    	cout<<"n1 and n2 are same"<<endl;
	}
	else
	{
        cout<<"n1 is greater than n2"<< endl;
    }

    return 0;
}

