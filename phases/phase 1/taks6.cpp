#include <iostream>
using namespace std;

int main() 
{
    srand((unsigned int)time(0));

    int randomNumber = rand() % 900000 + 100000; 

    cout << "Generated 6-digit number: " << randomNumber << endl;

    return 0;
}

