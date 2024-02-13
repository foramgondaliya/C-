#include<iostream>
using namespace std;

class Admin {
private:
    int revenue;

protected:
    string msalary,esalary,totalstaff,terminate;
    string cname;

public:
    void setdata() 
	{
        cout<<"enter company name=";
        cin>>this->cname;
        cout<<"enter manager salary=";
        cin>>this->msalary;
        cout<<"enter employee salary=";
        cin>>this->esalary;
        cout<<"enter total staff number=";
        cin>>this->totalstaff;
        cout<<"enter total annual revenue=";
        cin>>this->revenue;
        cout<<"enter terminate=";
        cin>>this->terminate;
        cout<<endl;
    }

    void getdata() 
	{
        cout<<"Total annual revenue="<<revenue<<endl;
        cout<<"Company name="<<cname<<endl;
        cout<<"Manager salary="<<msalary<<endl;
        cout<<"Employee salary="<<esalary<<endl;
        cout<<"Total staff="<<totalstaff<<endl;
        cout<<"Can terminate="<<terminate<<endl;
        
        cout<<endl;
    }

};

class Manager:public Admin{
public:
    void myaccess()
	{
        cout<<"Company name="<<cname<<endl;
        cout<<"Manager salary="<<msalary<<endl;
        cout<<"employee salary="<<esalary<<endl;
        cout<<"Total staff="<<totalstaff<<endl;
        cout<<endl;
    }
};

class Employee:public Manager{
public:
    void myaccess()
	{
        cout<<"Company name="<<cname<<endl;
        cout<<"employee salary="<<esalary<<endl;
        cout<<"Total staff="<<totalstaff<<endl;
        cout<<endl;
    }
};

int main() 
{
    Manager m;
    Employee e;
    
    e.setdata();
    e.getdata();
    
    e.Manager::myaccess();
    e.myaccess();
/
    return 0;
}

