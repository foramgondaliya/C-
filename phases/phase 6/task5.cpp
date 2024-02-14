#include<iostream>
using namespace std;

float customSqrt(float num) 
{
    if (num == 0 || num == 1) 
	{
        return num;
    }

    float x = num;
    float y = 1;
    float epsilon = 0.00001;

    while (x - y > epsilon || y - x > epsilon) 
	{
        x = (x + y) / 2;
        y = num / x;
    }

    return x;
}

int main() 
{
    float s1 = 6, s2 = 13, s3;
    
    s3 = customSqrt(1 * side1 + side2 * side2);

    cout << "The third side of the triangle is = " << s3 << endl;

    return 0;
}

