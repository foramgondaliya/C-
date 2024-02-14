#include <iostream>
using namespace std;

int main() {
    int Days;
    cout << "Enter the days: ";
    cin >> Days;

    int years = Days / 365;
    int days2 = Days % 365;
    int weeks = Days / 7;
    int remainingDays = days2 % 7;

    cout << Days << " days are equal to " << years << " years, "
         << weeks << " weeks, and " << remainingDays << " days." << endl;

    return 0;
}

