#include<iostream>
using namespace std;

class Number{
private:
    int x;

public:
    void setData(int i) 
	{
        this->x=i;
    }

    Number operator++() 
	{
        Number result;
        result.x=this->x+1;
        return result;
    }
    int getData() 
	{
        return this->x;
    }
};

int main() 
{
    Number n1,n2,n3;

    n1.setData(21);
    n3=++n1;

    cout<<"Value of n1(before increment)="<<n1.getData()<<endl;
    cout<<"Value of n1(after increment)="<<n3.getData()<<endl;

    return 0;
}



