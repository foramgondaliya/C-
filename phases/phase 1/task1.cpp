#include <iostream>
using namespace std;

class Cube
{
private:
    float num;

public:
    Cube()
    {
        cout << "Enter the number=";
        cin >> this->num;
    }
    void getCube()
    {
        cout << "the cube is= "<< this->num * this->num * this->num << endl;
    }
};

int main()
{
    Cube num1;

    num1.getCube();

    return 0;
}
