#include<iostream>
using namespace std;

class Message{
private:
    string str;

public:
    
    Message(string f) 
	{
        this->str = f;
    }

    void print() 
	{
        cout <<str<< endl;
    }

    void print(string g) 
	{
        cout<< str<<" " << g << endl;
    }
};

int main() {
    
    Message m1("Foram");
   
    m1.print();
    m1.print("Gondaliya");  

    return 0;
}
