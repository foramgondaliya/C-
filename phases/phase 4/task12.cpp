#include <iostream>
using namespace std;

int main()
{
     int n = 5;
    int ar[n][n], i, j;

    
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << "Enter a array element for upper half triangle matrix: ";
            cin >> ar[i][j];
        }
    }

    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            ar[i][j] = ar[j][i];
        }
    }

    cout << endl<< endl;

    // Displaying the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

