#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;

    
    cout << "Enter the number of rows and columns of first matrix (m x n): ";
    cin >> m >> n;

    cout << "Enter the number of columns of second matrix (n x p): ";
    cin >> p;
    
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Dot Product (Matrix C = A * B):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

