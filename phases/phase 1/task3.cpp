#include<iostream>
using namespace std;

int Quo(float x, float y)
{
    return x / y ;
}

int Remainder(float x, float y)
{
    return (int)x % (int)y ;
}

int main()
{
    float a , b ;

    cout << "Enter the value of a=" ;
    cin >> a ;
    cout << "Enter the value of b= ";
    cin >> b ;

    cout << endl 
         << "Your Quotient Is : " 
         << Quo(a,b) 
         << endl 
         << "Your remainder Is : " << Remainder(a,b) 
         << endl ;

    return 0;
}
