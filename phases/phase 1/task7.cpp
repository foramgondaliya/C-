#include<iostream>
using namespace std;

class Average{
    private:
        float a,b,c;

    public:
        Average()
        {
            cout << "enter the value of a=";
            cin >> this->a ;
            cout << "enter the value of b=";
            cin >> this->b ;
            cout << "enter the value of c=";
            cin >> this->c ;
        }
        void getAverage()
        {
            cout << "average number= " << (this->a + this->b + this->c ) / 3 << endl ;
        }
};

int main()
{

    Average number;

    number.getAverage();


    return 0;
}
