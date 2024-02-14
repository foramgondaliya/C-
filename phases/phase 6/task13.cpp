#include <iostream>
#include <conio.h> 
using namespace std;

class Counter {
private:
    int count;

public:

    Counter() : count(0) {}

    void increment()
	{
        count++;
    }
    void decrement() 
	{
        if (count > 0) 
		{
            count--;
        }
    }

    void display() 
	{
        cout << "Counter: " << count << endl;
    }
};

int main() 
{
    Counter counter;

    char key;
    while (true) 
	{
        
        counter.display();

       
        key = _getch();
        if (key == 0xE0) 
		{   
            key = _getch();
            if (key == 72) 
			{ 
                counter.increment();
            } else if (key == 80) 
			{ 
                counter.decrement();
            }
        }
        
        system("cls");
    }

    return 0;
}

