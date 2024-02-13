
#include<iostream>
using namespace std;

class Cricket 
{
public:
    void matchover() {
        int totalover=70;
        cout<<"Total overs in match="<<totalover<<endl;
    }
};

class T20Match:public Cricket 
{
public:
    void matcht20() 
	{
    	matchover();
        cout<<"Total overs in T20 match="<<20<<endl;
    }
};

class TestMatch:public Cricket 
{
public:
    void matchtest() 
	{
        cout<<"Total overs in Test match="<<50<<endl;
    }
};

int main() {
    T20Match over;
    over.matcht20();

    TestMatch over1;
    over1.matchtest();
}

