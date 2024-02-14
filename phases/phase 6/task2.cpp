#include <iostream>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    double balance;

public:

    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of Rs." << amount << " successful.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of Rs." << amount << " successful.\n";
        } else {
            cout << "Insufficient funds or invalid withdrawal amount.\n";
        }

    void displayBalance() {
        cout << "Current Balance: Rs." << fixed << setprecision(2) << balance << endl;
    }
};

int main() {

    const double INITIAL_BALANCE = 18000.0;
    BankAccount account(INITIAL_BALANCE);

    const double EXTERNAL_INCOME = 120000.0;
    account.deposit(EXTERNAL_INCOME);

    account.displayBalance();

    char choice;
    double amount;
    do {
        cout << "Do you want to deposit (D) or withdraw (W) money? (Enter D/W): ";
        cin >> choice;

        switch (choice) {
            case 'D':
            case 'd':
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 'W':
            case 'w':
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            default:
                cout << "Invalid choice.\n";
        }

        account.displayBalance();

        cout << "Do you want to perform another transaction? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for banking with us!\n";

    return 0;
}

