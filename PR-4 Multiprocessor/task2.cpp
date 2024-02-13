#include<iostream>
using namespace std;

class Distance 
{
private:
    int feet, inch;

public:
    setData(int f,int g)
    {
    	this->feet=f;
    	this->inch=g;
	}

    Distance operator+(Distance d) 
	{
        Distance feetinch;
        
        feetinch.feet= (this->feet + d.feet) + (this->inch + d.inch) / 12;
        feetinch.inch= (this->inch + d.inch) % 12;
        
        return feetinch;
    }

    void getData() 
	{
		cout << "Sum of distances d1 and d2: "<<  endl << "Feet: " << feet << endl << "Inch: " << inch << endl;;
    }
};

int main() {
    Distance d1,d2,d3;
    
    d1.setData(8,16);
    d2.setData(4,14);
    
    d3 = d1 + d2;

    d3.getData();

    return 0;
}
