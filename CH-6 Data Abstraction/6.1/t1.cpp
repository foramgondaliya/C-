#include<iostream>
using namespace std;

class Admin {
private:
    int rev;

protected:
    double mansal, emplsal;
    int totalstaff;
    bool term;
    string cmpnm;

public:
    void setdata() {
        cout << "enter company name:";
        cin >> this->cmpnm;
        cout << "enter manager salary:";
        cin >> this->mansal;
        cout << "enter employee salary:";
        cin >> this->emplsal;
        cout << "enter total staff number:";
        cin >> this->totalstaff;
        cout << "enter terminate (1 for true, 0 for false):";
        cin >> this->term;
        cout << "enter total annual revenue:";
        cin >> this->rev;
        cout << endl;
    }

    void getdata() {
        cout << "Total annual revenue:" << rev << endl;
    }

    void myaccess() {
        cout << "Admin's Access:" << endl;
        cout << "Company name: " << cmpnm << endl;
        cout << "Manager salary: " << mansal << endl;
        cout << "Employee salary: " << emplsal << endl;
        cout << "Total staff: " << totalstaff << endl;
        cout << "Can terminate: " << (term ? "Yes" : "No") << endl;
        getdata();
    }
};

class Manager : public Admin {
public:
    void myaccess() {
        cout << "\nManager's Access:" << endl;
        cout << "Company name: " << cmpnm << endl;
        cout << "Manager salary: " << mansal << endl;
        cout << "Total staff: " << totalstaff << endl;
    }
};

class Employee : public Admin {
public:
    void myaccess() {
        cout << "\nEmployee's Access:" << endl;
        cout << "Company name: " << cmpnm << endl;
        cout << "Total staff: " << totalstaff << endl;
    }
};

int main() {
    Admin admin;

    cout << "Enter details once for Admin, Manager, and Employee:" << endl;
    admin.setdata();

    Manager manager;
    Employee employee;

    cout << "\nManager's Access:" << endl;
    manager.myaccess();

    cout << "\nEmployee's Access:" << endl;
    employee.myaccess();

    return 0;
}

