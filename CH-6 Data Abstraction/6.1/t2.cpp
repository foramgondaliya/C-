#include<iostream>
using namespace std;

class Admin{
	
	private:
		int total_annual_revenue;
	
	protected:
	int manager_salary,employee_salary,total_staff;
	string company_name,can_terminate;
	
	
	public:
		setData()
		{
			cout<<"enter your company name=";
			cin>>company_name;
			cout<<"enter your manager salary=";
			cin>>manager_salary;
			cout<<"enter your employee salary=";
			cin>>employee_salary;
			cout<<"enter your total staff=";
			cin>>total_staff;
			cout<<"enter your terminate=";
			cin>>can_terminate;
			cout<<"enter your total annual revenue=";
			cin>>total_annual_revenue;
			
			cout<<endl;
		}
		
		getData()
		{
			cout<<"company name="<<company_name<<endl;
			cout<<"manager salary="<<manager_salary<<endl;
			cout<<"employee salary="<<employee_salary<<endl;
			cout<<"total staff="<<total_staff<<endl;
			cout<<"terminate="<<can_terminate<<endl;
			cout<<"total annual revenue="<<total_annual_revenue<<endl;
			
			cout<<endl;
		}
};

class Manager : public Admin{
	
	
		public:
		
		void myaccess()
		{
			cout<<"company name="<<company_name<<endl;
			cout<<"manager salary="<<manager_salary<<endl;
			cout<<"employee salary="<<employee_salary<<endl;
			cout<<"total staff="<<total_staff<<endl;
			cout<<"terminate="<<can_terminate<<endl;
			
			cout<<endl;
		}
};

class Employee : public Manager{
	
	
		public:
		
		void myaccess()
		{
			cout<<"company name="<<company_name<<endl;
			cout<<"employee salary="<<employee_salary<<endl;
			cout<<"total staff="<<total_staff<<endl;
		}
};

int main()
{
	Manager m1;
	Employee e1;
	
	e1.setData();
	e1.getData();
	
	e1.Manager::myaccess();
	e1.myaccess();
	
}
