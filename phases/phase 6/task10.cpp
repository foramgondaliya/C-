#include <iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

public:
    
    Complex(float r = 0, float i = 0) : real(r), imag(i) {
	}
    Complex operator+(const Complex &c) const 
	{
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex &c) const
	{
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator*(const Complex &c) const 
	{
        float real_part = real * c.real - imag * c.imag;
        float imag_part = real * c.imag + imag * c.real;
        return Complex(real_part, imag_part);
    }

    
    Complex operator/(const Complex &c) const 
	{
        float denominator = c.real * c.real + c.imag * c.imag;
        float real_part = (real * c.real + imag * c.imag) / denominator;
        float imag_part = (imag * c.real - real * c.imag) / denominator;
        return Complex(real_part, imag_part);
    }
    void display() 
	{
        if (imag < 0)
            cout << real << " - " << -imag;
        else
            cout << real << " + " << imag;
    }
};

int main() {
    Complex num1, num2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;

    Complex result;

    
    result = num1 + num2;
    cout << "Addition result: ";
    result.display();
    cout << endl;

    
    result = num1 - num2;
    cout << "Subtraction result: ";
    result.display();
    cout << endl;

    
    result = num1 * num2;
    cout << "Multiplication result: ";
    result.display();
    cout << endl;

    
    result = num1 / num2;
    cout << "Division result: ";
    result.display();
    cout << endl;

    return 0;
}

