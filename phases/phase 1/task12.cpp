#include<iostream>
using namespace std;

int main() {
    float p, r, n;

    cout << "Enter P: ";
    cin >> p;
    cout << "Enter R: ";
    cin >> r;
    cout << "Enter N: ";
    cin >> n;

    float interest = (p * r * n) / 100;

    cout << "Your Interest Is: " << interest << endl;

    return 0;
}

