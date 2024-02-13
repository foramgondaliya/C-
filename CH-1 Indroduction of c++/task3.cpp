#include<iostream>
using namespace std;

int main()
{
 	int a,b,c,i=0,f;
	 
	for (a=2020;a<=3030;a++)
    {
        if (a%4==0)
        {
        	f++;
		}
    }
    
    int array[f];

    for (a=2020;a<=3030;a++)
    {
        if (a%4==0)
        {
        	array[i]=a;
        	i++;
        }
    }
    cout<<"Leap years between 2020 and 3030 are:"<<endl;
    
    for (b=0;b<f;b++)
    {
        cout<<"a["<<b<<"]:"<<array[b]<<endl;
    }
    return 0;
}
