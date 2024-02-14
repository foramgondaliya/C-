#include <iostream>
#include <string>

using namespace std;

class Player {
protected:
    string name;
    int runs;

public:
    Player(string name, int runs) : name(name), runs(runs) {}

    virtual void display() {
        cout << "Name: " << name << ", Runs: " << runs << endl;
    }

    int getRuns() const {
        return runs;
    }
};

class TopPlayer : public Player {
private:
    int rank;

public:
    TopPlayer(string name, int runs, int rank) : Player(name, runs), rank(rank) {}

    void display() override {
        cout << "Rank: " << rank << ", ";
        Player::display();
    }
};

int main()
{
	
    TopPlayer players[5] = {
        TopPlayer("Rhoit", 1000, 1),
        TopPlayer("Virat", 900, 2),
        TopPlayer("Sachin", 800, 3),
        TopPlayer("boomor", 700, 4),
        TopPlayer("mohmad", 600, 5)
    };


    cout << "Top Five Players:" << endl;
    for (int i = 0; i < 5; ++i) {
        players[i].display();
    }

    return 0;
}

