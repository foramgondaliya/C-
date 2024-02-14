#include <iostream>
using namespace std;

coin(int ball1, int ball2) 
{
	int ball3;
	
    ball3 = ball1;
    ball1 = ball2;
    ball2 = ball3;
    
    cout<<"after 5 mint first bowl="<<ball1<<" rupi coin"<<endl;
    cout<<"after 5 mint second bowl= "<<ball2<<" rupi coin"<<endl;
    
    return 0;
}

int main() {
    int ball1=1,ball2=2; 

    cout<<"first bowl="<<ball1<<" rupi coin"<<endl;
    cout<<"second bowl="<<ball2<<" rupi coin"<<endl;
    
    coin(ball1, ball2);

    return 0;
}

