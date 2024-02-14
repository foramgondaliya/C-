#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
    double volume;

public:
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        volume = length * width * height;
    }

    
    bool isEven(int num) {
        return num % 2 == 0;
    }

   
    void displayVolume() {
        cout << "Volume of the box: " << volume << endl;
        if (isEven(static_cast<int>(volume))) {
            cout << "Volume is even." << endl;
        } else {
            cout << "Volume is odd." << endl;
        }
    }
};

int main() {
  
    Box box(3.0, 4.0, 5.0);
  
    box.displayVolume();

    return 0;
}

