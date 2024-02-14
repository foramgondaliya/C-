#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float length = 15; 
    float wall = 7;
	  

    float height = sqrt(pow(length, 2) - pow(wall, 2));
    
   
    cout << "The height of the wall is: " << height << " meters" << endl;
    
    return 0;
}

