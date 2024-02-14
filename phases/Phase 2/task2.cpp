#include <iostream>
using namespace std;

int main()
{
    int n, sum, temp = 0;

    cout << "Enter The Number : ";
    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout << "num[" << i << "] = ";
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            sum =sum+num[i];
            ++temp;
        }
    }

    cout << "Sum Of All Even Numbers : " << sum << endl;
    cout << "Average Of All Even Numbers : " << sum / temp << endl;
}
