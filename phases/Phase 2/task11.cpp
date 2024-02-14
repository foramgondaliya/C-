#include <iostream>
using namespace std;

class Temperature {
public:
    float Celsius;

    Temperature() {
        cout << "Enter Temperature in Celsius: ";
        cin >> this->Celsius;
        cout << endl;
    }
};

int main() {
    Temperature temp;

    int choice;
    while (true) {
        cout << "Press 1 for Temperature Celsius to Fahrenheit....." << endl;
        cout << "Press 2 for Temperature Celsius to Kelvin....." << endl;
        cout << "Press 0 for Exit the Program....." << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float fahrenheitTemp = (temp.Celsius * 9 / 5) + 32;
                cout << "Your temperature in Fahrenheit is: " << fahrenheitTemp << endl;
                break;
            }
            case 2: {
                float kelvinTemp = temp.Celsius + 273.15;
                cout << "Your temperature in Kelvin is: " << kelvinTemp << endl;
                break;
            }
            case 0:
                cout << "Exiting the Program.............." << endl;
                return 0;
            default:
                cout << "Enter Valid Choice....." << endl;
                break;
        }
    }

    return 0;
}

