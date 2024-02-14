#include <iostream>
#include <cmath>

using namespace std;

class Calculator
{
    private:
        float car_Price, down_Payment, rate_Interest, loan_Term;

    public:
        Calculator(float car_Price, float down_Payment, float rate_Interest, float loan_Term) : car_Price(car_Price), down_Payment(down_Payment), rate_Interest(rate_Interest), loan_Term(loan_Term) {}

        float Calculate()
        {
            float monthly_Interest_Rate = rate_Interest / 12.0 / 100.0;

            float power = 1;
            for (int i = 0; i < loan_Term; ++i)
            {
                power *= (1 + monthly_Interest_Rate);
            }

            float numerator = car_Price * monthly_Interest_Rate * power;
            float denominator = power - 1;
            float EMI = numerator / denominator;
            return EMI;
        }
};

int main()
{
    float car_Price, down_Payment, rate_Interest, loan_Term;

    cout << "Enter car price (in Rs.): ";
    cin >> car_Price;
    cout << "Enter down payment (in Rs.): ";
    cin >> down_Payment;
    cout << "Enter annual interest rate (%): ";
    cin >> rate_Interest;
    cout << "Enter loan term (in months): ";
    cin >> loan_Term;

    Calculator calculator(car_Price, down_Payment, rate_Interest, loan_Term);
    float emi = calculator.Calculate();
    cout << "EMI per month: Rs. " << emi << endl;

    return 0;
}

