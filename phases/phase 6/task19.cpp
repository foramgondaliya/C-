#include <iostream>
using namespace std;

class Room {
private:
    string name;
    double length;
    double width;

public:
    Room(string n, double l, double w) : name(n), length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    void display() {
        cout << "Room: " << name << endl;
        cout << "Area: " << calculateArea() << " square units" << endl;
    }
};

class House {
private:
    Room* rooms;
    int numRooms;

public:
    House(int num) : numRooms(num) {
        rooms = new Room[num];
    }

    ~House() {
        delete[] rooms;
    }

    void addRoom(int index, string name, double length, double width) {
        if (index >= 0 && index < numRooms) {
            rooms[index] = Room(name, length, width);
        } else {
            cout << "Invalid room index" << endl;
        }
    }

    void display() {
        for (int i = 0; i < numRooms; ++i) {
            cout << "Room " << i+1 << ":" << endl;
            rooms[i].display();
            cout << endl;
        }
    }
};

int main() {
    
    House myHouse(3);

    myHouse.addRoom(0, "Living Room", 10.0, 12.0);
    myHouse.addRoom(1, "Bedroom", 8.0, 10.0);
    myHouse.addRoom(2, "Kitchen", 6.0, 8.0);

    myHouse.display();

    return 0;
}

