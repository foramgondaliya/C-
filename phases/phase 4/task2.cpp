#include<iostream>
using namespace std;

struct Soldier{
	
	string name;
	int killscore;
	
};

int main()
{
	
	struct Soldier s[10];
	int i;
	
	cout<<"Enter the name and killing score for each soldier:" <<endl;
	
	for(i=0;i<10;i++)
	{
		cout<<"soldier"<<i+1<<endl;
		cout<<"Name:";
		cin>>s[i].name;
		cout<<"Killing score:";
		cin>>s[i].killscore;
	}
	
	int maxscore;
	string maxname;
	
	maxscore=s[0].killscore;
	maxname=s[0].name;
	
	
	for(i=1;i<10;i++)
	{
		if(s[i].killscore>maxscore)
		{
			maxscore=s[i].killscore;
			maxname=s[i].name;
		}
	}
	
	
	cout<<"THE SOLDIER NAME OF  HIGHEST SCORE:"<<maxname;
	cout<<"HIGHEST KILLINGSCORE:"<<maxscore;
	
	
	
	
	return 0;
}
