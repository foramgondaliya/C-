#include <iostream>
#include <unordered_map>
#include <iomanip>

using namespace std;

const double TAX_RATE = 5.0;

unordered_map<string, double> itemPrices = {
    {"Bread", 2.50},
    {"Wheat", 3.00},
    {"Milk", 1.80},
    {"Soup", 2.20},
    {"Frozen Foods", 4.50},
    {"Cheese", 3.75}
};

class ShoppingCart {
private:
    unordered_map<string, int> cart;

public:
    void addItem(const string& itemName, int quantity) {
        cart[itemName] += quantity;
    }

    void updateItem(const string& itemName, int quantity) {
        cart[itemName] = quantity;
    }

    void removeItem(const string& itemName) {
        cart.erase(itemName);
    }

    double calculateTotal() {
        double total = 0.0;
        for (auto& item : cart) {
            total += item.second * itemPrices[item.first];
        }
        return total;
    }

    void displayCart() {
        cout << "Your Cart:\n";
        cout << setw(15) << left << "Item" << "Quantity" << endl;
        cout << "------------------------\n";
        for (auto& item : cart) {
            cout << setw(15) << left << item.first << item.second << endl;
        }
        cout << "------------------------\n";
    }
};

int main() {
    ShoppingCart cart;
    string itemName;
    int quantity;

    cart.addItem("Bread", 2);
    cart.addItem("Milk", 3);
    cart.addItem("Wheat", 1);
    cart.displayCart();

    cart.updateItem("Bread", 1);
    cart.displayCart();

    cart.removeItem("Wheat");
    cart.displayCart();

    double subtotal = cart.calculateTotal();
    double taxAmount = (subtotal * TAX_RATE) / 100;
    double totalAmount = subtotal + taxAmount;

    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Tax: $" << fixed << setprecision(2) << taxAmount << endl;
    cout << "Total: $" << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}

