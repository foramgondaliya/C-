#include<iostream>
using namespace std;

class Distance{
	public:
		int inch1,feet1,inch2,feet2;
};
int main()
{
	Distance d[1];
	int result,resulti;
	
		cout<<"enter the first feet=";
		cin>>d[1].feet1;
	
		cout<<"enter the first inch=";
		cin>>d[1].inch1;
	
		cout<<"enter the second feet=";
		cin>>d[1].feet2;
	
		cout<<"enter the second inch=";
		cin>>d[1].inch2;
		
		result=d[1].feet1+d[1].feet2;
		resulti=d[1].inch1+d[1].inch2;
		
		if(resulti>=12)
		{
			result=result+resulti/12;
			resulti=resulti%12;
		}
		
		cout<<endl;
		
		cout<<d[1].feet1<<" feet ";
		cout<<d[1].inch1<<" inch + ";
		cout<<d[1].feet2<<" feet ";
		cout<<d[1].inch2<<" inch = ";
		cout<<result<<" feet ";
		cout<<resulti<<" inch ";
		cout<<endl;
		
		return 0;
	
}
