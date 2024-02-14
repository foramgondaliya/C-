#include <iostream>
using namespace std;

void Calculator(float money, float rateOfInterest)
{
    cout << "Total Bill Including GST Is : Rs." << money + ((money * rateOfInterest) / 100 )<< endl;
    cout << "Total GST Text Is: Rs." << (money * rateOfInterest) / 100 << endl;
}

int main()
{
    float amount,rateOfInterest;
    cout << "Enter Your Bill Amount : " ;
    cin >> amount ;
    cout << "Enter Rate Of Interest : " ;
    cin >> rateOfInterest ;

    Calculator(amount,rateOfInterest);

    return 0;
    
}
