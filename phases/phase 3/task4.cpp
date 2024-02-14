#include <iostream>
using namespace std;
int main() 
{
	int size = 100; 
	
    int pID[size];
    char fName[size][50];  
    char lName[size][50]; 

    int num;

    cout << "Enter the number of entries: ";
    cin >> num;

    cout << "Enter data for each refugee:" << endl;
    for (int i = 0; i < num; i++) 
	{
        cout << "Passport ID for entry " << i+1  << ": ";
        cin >> pID[i];

        cout << "First name for entry " << i+1 << ": ";
        cin >> fName[i];

        cout << "Last name for entry " << i+1 << ": ";
        cin >> lName[i];
    }

    cout << "\nPassport ID\t Full Name" << endl;
    for (int i = 0; i < num; i++) 
	{
        cout << pID[i] << "\t\t" << fName[i] << " " << lName[i] << endl;
    }

    return 0;
}

