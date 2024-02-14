#include <iostream>
using namespace std;

int main() 
{
    double totalCost;
    double governmentAidPercentage;

    cout << "Enter the total cost of solar panel installation: ";
    cin >> totalCost;

    cout << "Enter the government aid percentage (in decimal form, e.g., 0.3 for 30%): ";
    cin >> governmentAidPercentage;

    double governmentAidAmount = totalCost * governmentAidPercentage;

    double remainingCost = totalCost - governmentAidAmount;

    cout << "Cost breakdown:\n";
    cout << "Total cost: " << totalCost << endl;
    cout << "Government aid: " << governmentAidAmount << " (" << (governmentAidPercentage * 100) << "%)\n";
    cout << "Your portion of the cost: " << remainingCost << endl;

    return 0;
}

