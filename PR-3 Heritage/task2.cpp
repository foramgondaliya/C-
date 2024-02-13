#include<iostream>
using namespace std;

class Distance {
private:
    int feet, inch;

public:
    Distance(int ft = 0, int in = 0) : feet(ft), inch(in) {}

    Distance operator+(Distance d2) 
	{
        int newfeet = feet + d2.feet;
        int newinch = inch + d2.inch;

        if (newinch >= 12) 
		{
            newfeet = newfeet+newinch / 12;
            newinch = newinch % 12;
        }

        return Distance(newfeet, newinch);
    }

    void disp() 
	{
		cout << "Sum of distances d1 and d2: "<< "Feet: " << feet << " Inch: " << inch << endl;;
        
    }
};

int main() {
    Distance d1(8, 16);
    Distance d2(4, 14);
    Distance d3;

    d3 = d1 + d2;

    
    d3.disp();

}
