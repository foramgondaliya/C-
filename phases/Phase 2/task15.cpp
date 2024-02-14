#include <iostream>
using namespace std;

int main() {
    int tvWidth = 32;
    int tvHeight = 52;
    int margin = 10;

    int requiredWidth = tvWidth + 2 * margin;
    int requiredHeight = tvHeight + 2 * margin;

    cout << "The minimum wall area required to fit the TV with a 10-inch margin on all sides is: " << requiredWidth << " x " << requiredHeight << " inches squared." << std::endl;

    return 0;
}
