#include<iostream>
using namespace std;

class Mother{
	public:
		void display()
		{
			cout<<"hello...this is mother class"<<endl;
		}
	
};
class Daughter:public Mother{
	public:
		void display()
		{
			cout<<"hello...this is daughter class"<<endl;
		}
};
int main()
{
	Daughter d1;
	
	d1.Mother::display();
	d1.display();
	
	return 0;
}
