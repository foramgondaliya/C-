#include<iostream>
using namespace std;

int main()
{
	int i;
	string a[20],b[20],c[20];
	
	cout<<"enter the game a=";
	cin>>a[i];
	
	cout<<"enter the game b=";
	cin>>b[i];
	
	cout<<"before swapping:"<<endl;
	cout << "a: " << a[i] << endl;
    cout << "b: " << b[i] << endl;
	
	c[i]=a[i];
	a[i]=b[i];
	b[i]=c[i];
	
	cout<<"after swapping:"<<endl;
	cout << "a: " << a[i] << endl;
    cout << "b: " << b[i] << endl;
}
