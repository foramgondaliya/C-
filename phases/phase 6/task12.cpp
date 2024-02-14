#include <iostream>
#include <iomanip>
using namespace std;

void convertTime(int hour, int minute) 
{
    string period;
    
    if (hour < 12) 
	{
        period = "AM";
        if (hour == 0) 
		{
            hour = 12; 
        }
    } 
	else {
        period = "PM";
        if (hour != 12) 
		{
            hour -= 12; 
        }
    }
    cout << "Converted time: " << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}

int main() {
    int hour, minute;
    
    cout << "Enter the hour (0-23): ";
    cin >> hour;
    
    cout << "Enter the minute (0-59): ";
    cin >> minute;

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) 
	{
        cout << "Invalid input. Please enter valid hour (0-23) and minute (0-59)." << endl;
        return 1;
    }

    convertTime(hour, minute);
    
    return 0;
}

