#include<iostream>
using namespace std;

void Second(int seconds)
{
    int hour=0;
    int minute=0;

    while (seconds >= 60 ) 
    {
        seconds -= 60;
        minute++;
    }
    
    while (minute >= 60 )
    {
        minute -= 60;
        hour++;
    }

    cout << hour << " : " << minute << " : " << seconds << endl ;
}

int main ()
{
    Second(3661);

    return 0;
}
