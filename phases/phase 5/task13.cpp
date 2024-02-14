#include <iostream>
using namespace std;

area(int choice)
{
    double area, perimeter, side, length, width, height, radius;

    switch (choice)
	{
        case 1:
            cout<<"Enter radius of circle = ";
            cin>>radius;
            
            area=3.14 * radius * radius;
            
            cout<<"Area of circle = "<<area;
            break;
            
        case 2:
            cout<<"Enter perimeter of circle = ";
            cin>>radius;
            
            perimeter = 2*3.14*radius;
            cout<<"Perimeter of circle = "<<perimeter;
            break;
            
        case 3:
            cout<<"Enter side of square = ";
            cin>>side;
            area=side*side;
            
            cout<<"Area of square = "<<area;
            break;
            
        case 4:
        	
            cout<<"Enter a length = ";
            cin>>length;
            cout<<"Enter a width = ";
            cin>>width;
            
            area=length * width;
            cout<<"Area of rectangle = "<<area;
            
            break;
            
        case 5:
        	
            cout<<"Enter a length = ";
            cin>>length;
            cout<<"Enter a width = ";
            cin>>width;
            
			area = 0.5 * width * height;
            cout << "Area of triangle = " << area;
            
            break;
            
        case 6:
        	
            cout << "Enter radius of sphere = ";
            cin >> radius;
            
            area=4*3.14*radius*radius;
            
            cout<<"Surface area of sphere ="<<area;
            
			break;
        default:
            cout << "Invalid choice";
    }
}

int main() 
{
    int choice;

    cout<<"1 for Area of Circle"<<endl;
    cout<<"2 for Perimeter of Circle"<<endl;
    cout<<"3 for Area of Square"<<endl;
    cout<<"4 for Area of Rectangle"<<endl;
    cout<<"5 for Area of Triangle"<<endl;
    cout<<"6 for Area of Sphere"<<endl;
    
    cout<<"Enter your choice = ";
    cin>>choice;

    area(choice);

    return 0;
}

