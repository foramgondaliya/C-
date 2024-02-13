#include<iostream>
using namespace std;

class Arith 
{
public:
    int a,b,c,d,e;
    int div,sub,add,mul;
};

class Arith2:public Arith 
{
public:
    void calculate(int a,int b) 
	{
        this->a=a;
        this->b=b;
        div=this->a/this->b;
        cout<<"Division= "<<div<<endl;
    }

    void calculate(int a,int b,int c) 
	{
        this->a=a;
        this->b=b;
        this->c=c;
        sub=this->a-this->b-this->c;
        cout<<"Subtraction="<<sub<<endl;
    }

    void calculate(int a,int b,int c,int d) {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        mul=this->a*this->b*this->c*this->d;
        cout<<"Multiplication="<<mul<<endl;
    }

    void calculate(int a,int b,int c,int d,int e) 
	{
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        this->e=e;
        add = this->a+this->b+this->c+this->d+this->e;
        cout<<"Addition="<<add<<endl;
    }
};

int main() {
    Arith2 a1;

    int numArguments;
    cout<<"Enter the number of arguments(2,3,4,or5)= ";
    cin>>numArguments;

    switch(numArguments) 
	{
        case 2:
            a1.calculate(1,2);
            break;
        case 3:
            a1.calculate(1,5,3);
            break;
        case 4:
            a1.calculate(1,2,3,4);
            break;
        case 5:
            a1.calculate(1,2,3,4,5);
            break;
        default:
            cout<<"Invalid option"<<endl;
    }

    return 0;
}

