#include <iostream>
using namespace std;

window(int l, int w) 
{
    int length = 10,width = 4,totall,totalw;
    
    totall = length + 4;
    totalw = width + 4;
    
    if(l>=totall && w>=totalw)
	{
        cout<<"curtains satisfies mentioned criteria ";
    }
	else
	{
        cout << "curtains not satisfies mentioned criteria ";
    }
    return 0;
}

int main() {
    int l, w;
    cout << "Enter length of curtains: ";
    cin >> l;
    cout << "Enter width of curtains: ";
    cin >> w;
    
    window(l, w);
    return 0;
}

