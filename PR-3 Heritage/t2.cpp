#include<iostream>
using namespace std;

class Message {
private:
    string name;

public:
    Message(string msg = "method overloading") {
        this->name = msg;
    }

    void print() {
        cout << this->name << endl;
    }

    void print(string additionalMessage) {
        cout << this->name << " " << additionalMessage << endl;
    }
};

int main() {
    Message internalMessage;

    cout << "internal message method is overloading" << endl;
    internalMessage.print();

    cout << endl;

    Message additionalMessage;

    cout << "additional message method is overloading" << endl;
    additionalMessage.print("Additional Text");

    return 0;
}

