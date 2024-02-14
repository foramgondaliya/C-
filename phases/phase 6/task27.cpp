#include <iostream>
using namespace std;

class Bank {
protected:
    float rateOfInterest;

public:
    Bank(float roi) : rateOfInterest(roi) {}

    virtual float getRateOfInterest() {
        return rateOfInterest;
    }
};

class PrivateSectorBank : public Bank {
public:
    PrivateSectorBank(float roi) : Bank(roi) {}

    float getRateOfInterest() override {
        return rateOfInterest + 1.0f; 
    }
};

int main() {

    Bank* publicBank = new Bank(5.0f); 
    PrivateSectorBank* privateBank = new PrivateSectorBank(6.0f); 

    cout << "ROI for Public Sector Bank: " << publicBank->getRateOfInterest() << "%" << endl;
    cout << "ROI for Private Sector Bank: " << privateBank->getRateOfInterest() << "%" << endl;

    delete publicBank;
    delete privateBank;

    return 0;
}

