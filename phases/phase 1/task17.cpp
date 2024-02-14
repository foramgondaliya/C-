#include <iostream>
using namespace std;
int main()
{
    int n, temp = 0;

    cout << "Enter the Number to check Prime: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not Prime." << endl;
            temp = 1;
            break;
        }
    }

    if (temp == 0)
        cout << "Number is Prime." << endl;

    return 0;
}