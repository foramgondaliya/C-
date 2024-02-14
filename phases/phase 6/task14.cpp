#include <iostream>
using namespace std;

int main() 
{
    double unitRate; 
    double totalunits;
    double bill; 

    cout << "Enter the rate per unit: ";
    cin >> unitRate;

    cout << "Enter the total units consumed: ";
    cin >> totalunits;

    bill = unitRate * totalunits;

   
    cout << "total Electricity Bill=" << bill << endl;

    return 0;
}

