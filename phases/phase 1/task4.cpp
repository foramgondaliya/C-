#include<iostream>
using namespace std;

void Exchange(string a,string b)
{
    string temp;
    temp = a ;
    a = b ;
    b = temp ;

    cout << "First Bech Sit's : " << a;
    cout << endl ;
    cout  << "Second Bech Sit's : " << b;
    cout << endl;
}

int main()
{
    string a,b;

    cout << "Student Name 1: " ;
    cin >> a ;
    cout << "Student Name 2: " ;
    cin >> b ;
    cout << endl ;

    Exchange (a,b);


    return 0;
}
