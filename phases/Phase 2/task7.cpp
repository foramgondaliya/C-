#include <iostream>
using namespace std;

class Calculator
{
protected:
    
};

class Circle : public Calculator
{
public:
    float getArea(float radius)
    {
        return (2 * 3.14) * (radius * radius);
    }
};

class Perimeter_Circle : public Calculator {
public:
    float getPerimeter(float radius)
    {
        return (2 * 3.14) * radius;
    }
};

class Diameter_Circle : public Calculator {
public:
    float getDiameter(float radius)
    {
        return 2 * radius;
    }
};

int main()
{
    int choice;
    float radius;
    Circle circle;
    Perimeter_Circle perimeter_circle;
    Diameter_Circle diameter_circle;

    do
    {
        cout << "Press 1 for Finding Area Of Circle." << endl;
        cout << "Press 2 for Perimeter of Circle." << endl;
        cout << "Press 3 for radius into Diameter Of Circle." << endl;
        cout << "Press 0 for Exit The Program." << endl << endl;
        cout << "Enter your Choice : ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            cout << "Enter the radius of the circle: ";
            cin >> radius;
        }

        switch (choice)
        {
        case 0:
            cout << "Exiting the program..." << endl;
            break;
        case 1:
            cout << "Your Area of Circle Is: " << circle.getArea(radius) << endl;
            break;
        case 2:
            cout << "Your Perimeter of Circle Is: " << perimeter_circle.getPerimeter(radius) << endl;
            break;
        case 3:
            cout << "Your Diameter of Circle Is: " << diameter_circle.getDiameter(radius) << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
