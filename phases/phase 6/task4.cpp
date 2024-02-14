#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int initialCashews = 123500; 
    const double initialRevenue = 78000.0; 

    const int months = 3;
    const int productionMultiplier = 10; 

    int totalCashews = initialCashews * productionMultiplier;
    double totalRevenue = initialRevenue * productionMultiplier;

    double totalCost = (totalRevenue / initialCashews) * totalCashews; 
    double totalProfit = totalRevenue - totalCost;

    double increasePercentage = ((totalRevenue - (initialRevenue * months)) / (initialRevenue * months)) * 100;

    cout << "Total Cashews Produced in " << months << " months: " << totalCashews << endl;
    cout << "Total Revenue Generated in " << months << " months: Rs." << fixed << setprecision(2) << totalRevenue << endl;
    cout << "Total Profit: Rs." << fixed << setprecision(2) << totalProfit << endl;
    cout << "Percentage Increase in Revenue: " << fixed << setprecision(2) << increasePercentage << "%" << endl;

    return 0;
}

