#include<iostream>
using namespace std;

int main() 
{
    string correctEmail;
    
    cout << "Register your email: ";
    cin >> correctEmail;

    int upper = 0, special = 0, digit = 0, special2 = 0, special3 = 0, len;
    string correctPassword;

    cout << "Register your password: ";
    cin.ignore(); 
    getline(cin, correctPassword);

    len = correctPassword.length();

    for (int i = 0; i < len; i++) 
	{
        if (correctPassword[i] >= 'A' && correctPassword[i] <= 'Z') 
		{
            upper = 1;
        } 
		else if (correctPassword[i] >= '0' && correctPassword[i] <= '9') 
		{
            digit = 1;
        } 
		else if (correctPassword[i] >= 33 && correctPassword[i] <= 47) 
		{
            special = 1;
        } 
		else if (correctPassword[i] >= 123 && correctPassword[i] <= 126) 
		{
            special2 = 1;
        } 
		else if (correctPassword[i] >= 91 && correctPassword[i] <= 96) 
		{
            special3 = 1;
        }
    }

    if (upper == 1 && digit == 1 && (special == 1 || special2 == 1 || special3 == 1) && len >= 6) {
        cout << "Registration successful" << endl;
    } else {
        cout << "Invalid registration" << endl;
    }

    string enteredEmail;
    string enteredPassword;

    cout << "Enter your email: ";
    cin >> enteredEmail;

    cout << "Enter your password: ";
    cin >> enteredPassword;

    if (enteredEmail == correctEmail && enteredPassword == correctPassword)
		{
        	cout << "Login successful" << endl;
    	} 
		else 
		{
        	cout << "Login failed. Invalid Credentials" << endl;
    	}
    	char choice;
        cout << "Do you want to delete your account? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') 
		{
            cout << "Account deleted successfully" << endl;
        }
     	else 
		{
        cout << "Account failed to delete" << endl;
    	}
	
    return 0;
}

