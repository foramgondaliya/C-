#include<iostream>
using namespace std;

const string admin_id="foram";
const string admin_password="foram123";

class Supermarket {
private:
    int number,quantity,price,dis,total,rev;
    string name;

public:
    Supermarket() 
	{
        cout<<"enter the item number=";
        cin >>this->number;
        cout<<"enter the item name=";
        cin>>this->name;
        cout<<"enter the item's quantity=";
        cin >>this->quantity;
        cout<<"enter the item's price=";
        cin>>this->price;
        cout<<"enter the item's discount=";
        cin>>this->dis;

        cout<<endl;
    }

    void getData() {
        cout<<"item number="<< this->number<<endl;
        cout<<"item name="<< this->name<<endl;
        cout<<"item quantity="<< this->quantity<<endl;
        cout<<"item price="<< this->price<<endl;
        cout<<"item discount="<< this->dis<<endl;

        cout<<endl;
    }

    void bill() 
	{
        rev=price*quantity;
        total=rev-(rev*dis/100);

        cout<<"number="<<number<<endl;
        cout<<"name=" <<name<<endl;
        cout<<"quantity="<<quantity<<endl;
        cout<<"discount="<<dis<<endl;
        cout<<"price="<<price<<endl;
        cout<<"total="<<total<<endl;
        
    }

    double final() {
        return total;
    }
};

int main() {
    int num,i,n;
    string id,password;

    cout<<"enter your id=";
    cin>>id;

    cout<<"enter your password=";
    cin>>password;

    if(id==admin_id && password==admin_password) 
	{
        cout<<"how many items=";
        cin>>n;
    Supermarket s[n];

    s[0].bill();

    double ftotal;

    for (i=0;i<n;i++) 
	{
        ftotal=ftotal+s[i].final();
    }

    cout<<endl;

    cout<<"final total="<<ftotal<<endl;
	}
    return 0;
}

