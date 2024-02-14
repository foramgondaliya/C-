#include <iostream>
#include <string>

using namespace std;

class UniverseCharacter {
protected:
    string name;

public:
    UniverseCharacter(string n) : name(n) {}

    virtual void displayUniverse() {
        cout << "Character Name: " << name << endl;
    }
};

class MarvelCharacter : virtual public UniverseCharacter {
public:
    MarvelCharacter(string n) : UniverseCharacter(n) {}

    void displayUniverse() override {
        cout << "Marvel Universe - ";
        UniverseCharacter::displayUniverse();
    }
};

class DCCharacter : virtual public UniverseCharacter {
public:
    DCCharacter(string n) : UniverseCharacter(n) {}

    void displayUniverse() override {
        cout << "DC Universe - ";
        UniverseCharacter::displayUniverse();
    }
};

class AccessCharacter : public MarvelCharacter, public DCCharacter {
public:
    AccessCharacter(string n) : UniverseCharacter(n), MarvelCharacter(n), DCCharacter(n) {}

    void displayUniverse() override {
        cout << "Access exists in both Marvel and DC Universes - ";
        UniverseCharacter::displayUniverse();
    }
};

int main() 
{
    AccessCharacter access("Access");

    access.displayUniverse();

    return 0;
}

