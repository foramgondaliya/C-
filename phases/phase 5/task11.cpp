#include <iostream>
using namespace std;

int army(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
			cout<<"indian army have largest Army strength";	
		}	
		else
		{
			cout<<"chines army have largest Army strength";	
		}
	}    
	else if(b>c){
		cout<<"us army have largest Army strength";	
	}
	else{
		cout<<"chines army have largest Army strength";	
	}
    return 0;
}

int main() {
    int india, us, chin;

    cout << "Enter the number of indian soldier = ";
    cin >> india;
	cout << "Enter the number of us soldier = ";
    cin >> us;
    cout << "Enter the number of chin soldier = ";
    cin >> chin;
    
    army(india, us, chin);
    return 0;
}

