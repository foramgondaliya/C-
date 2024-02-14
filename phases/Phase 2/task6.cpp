#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b;

public:
    double Addition(int a, int b)
    {
        return a + b;
    }
    double Subtract(int a, int b)
    {
        return a - b;
    }
    double Multiply(int a, int b)
    {
        return a * b;
    }
    double Divide(int a, int b)
    {
        return a / b;
    }
    double Modulo(int a, int b)
    {
        return a % b;
    }
};

int main()
{

    Calculator first;
    int a, b, choice;

    while (1)
    {

        cout << "Press 1 For Addition.........." << endl;
        cout << "Press 2 For Subtract.........." << endl;
        cout << "Press 3 For Multiply.........." << endl;
        cout << "Press 4 For Divide.........." << endl;
        cout << "Press 5 For Modulo.........." << endl;
        cout << "Press 0 For Exit The Progrtam.........." << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;
        if (choice >= 1)
        {

            cout << "Enter The Value Of A: ";
            cin >> a;
            cout << "Enter The Value Of B: ";
            cin >> b;
            cout << endl;

            switch (choice)
            {
            case 1:
                cout << "Your Addition Of 2 Values Is: " << first.Addition(a, b) << endl << endl;
                break;
            case 2:
                cout << "Your Substrictin Of 2 Values Is: " << first.Subtract(a, b) << endl << endl;
                break;
            case 3:
                cout << "Your Multiplication Of 2 Values Is: " << first.Multiply(a, b) << endl << endl;
                break;
            case 4:
                cout << "Your Division Of 2 Values Is: " << first.Divide(a, b) << endl << endl; 
                break;
            case 5:
                cout << "Your Modulo Of 2 Values Is: " << first.Modulo(a, b) << endl << endl;
                break;
            default:
                cout << "Enter Valid CHoice...............\nTry Again Later............" << endl;
            }
        }
        else
        {
            cout << "Exiting The Program................." << endl;
            break;
        }
    }

    return 0;
}
