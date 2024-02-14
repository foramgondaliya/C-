#include <iostream>
using namespace std;

void Decimal(int value)
{
    if(value > 1 )
        Decimal(value/2);
    
    cout << value%2 ;
}

int main()
{
    Decimal(27);
    
    cout <<endl;

    return 0;
}
