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
    int operator<=(Number n) 
	{
        return this->x<=n.x;
    }
};
int main() 
{
    Number n1,n2,n3;

    n1.setData(80);
    n2.setData(80);

    if(n1<=n2) 
	{
        cout<<"n1 is less than or equal to n2"<<endl;
    }  
	else 
	{
        cout<<"n1 is greater than or equal to n2"<<endl;
    }
    return 0;
}

