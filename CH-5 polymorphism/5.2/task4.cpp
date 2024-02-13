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

    int operator!=(Number n) 
	{
        return this->x!=n.x;
    }
};

int main() 
{
    Number n1,n2,n3;

    n1.setData(50);
    n2.setData(40);

    if (n1!=n2) 
	{
        cout<<"n1 and n2 not are equal"<<endl;
    }
    else
    {
    	cout<<"n1 and n2 are equal"<<endl;
	}

    return 0;
}

