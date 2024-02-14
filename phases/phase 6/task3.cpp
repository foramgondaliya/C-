#include <iostream>
#include <string>
#include <limits>

using namespace std;


struct Company {
    string name;
    double bid;
};


double getBid(const string& companyName) {
    double bid;
    cout << "Enter bid amount for " << companyName << ": ";
    cin >> bid;
    
    while (cin.fail() || bid <= 0) {
        cout << "Invalid input. Please enter a valid bid amount for " << companyName << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> bid;
    }
    return bid;
}


Company determineHighestBidder(const Company& company1, const Company& company2, const Company& company3) {
    if (company1.bid > company2.bid && company1.bid > company3.bid) {
        return company1;
    } else if (company2.bid > company1.bid && company2.bid > company3.bid) {
        return company2;
    } else {
        return company3;
    }
}

int main() {
   
    Company company1, company2, company3;
    company1.name = "Company A";
    company2.name = "Company B";
    company3.name = "Company C";

    
    company1.bid = getBid(company1.name);
    company2.bid = getBid(company2.name);
    company3.bid = getBid(company3.name);

    
    Company highestBidder = determineHighestBidder(company1, company2, company3);

   
    cout << "\nThe haunted house is sold to the highest bidder:\n";
    cout << "Company: " << highestBidder.name << "\n";
    cout << "Bid Amount: " << highestBidder.bid << "\n";

    return 0;
}

