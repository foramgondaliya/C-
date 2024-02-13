#include <iostream>

using namespace std;

class Message{
private:
    string internalMsg;

public:
    Message(string Message="Message"){}
	

    void print() 
	{
        cout<<"internalMsg"<<endl;
    }
    void print(string additionalMsg) 
	{
        cout<<"additionalMsg"<<endl;
    }
};
int main() 
{
    Message m1;
    Message m2("Message2");

    cout << "Message1=";
	m1.print();

    cout << "Message2=";
    m2.print("text");

    return 0;
}

