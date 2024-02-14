#include <iostream>
using namespace std;

time(int seconds){
	int hours,secs,minutes;
	
    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    secs=seconds%60;

	cout<<""<<hours<<":"<<minutes<<":"<<secs<<endl;
}

time2(int hours,int minutes,int seconds)
{
    int total;
    
    total = (hours*3600)+ (minutes*60)+seconds;
    
    cout<<"total time in seconds is = "<<total<<endl;
}

int main() 
{
    int choice;
    while(choice != 3) 
	{
        
        cout<<"1 for convert seconds to HH:MM:SS"<<endl;
        cout<<"2 for convert time in total seconds"<<endl;
        cout<<"3. Exit"<<endl;
        
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
		{
            case 1:{
                int seconds;
                cout<<"Enter the number of seconds: ";
                cin>>seconds;
                
                time(seconds);
                
                break;
            }
            case 2:{
                int hours,mint,sec;
                cout<<"Enter the time in hours = ";
                cin>>hours;
                cout<<"Enter the time in mintes = ";
                cin>>mint;
                cout<<"Enter the time in seconds = ";
                cin>>sec;
                
                time2(hours,mint,sec);
                
                break;
            }
            case 3:{
                cout<<"Exiting";
				break;
			}
                
            default:{
                cout<<"Invalid choice. Please try again.\n";
			}
        }
    } 

    return 0;
}

