#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	float treedis=13,ropedis=26,totaldis;
	
	totaldis=sqrt(ropedis*ropedis - treedis*treedis);
	
	cout<<"the distance of tree and rope between is="<<totaldis<<endl;
	
	return 0;
}
