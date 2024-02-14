#include <iostream>

class Swapper {
private:
    int a;
    int b;

public:
    Swapper(int x, int y) : a(x), b(y) {}

    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    }
};

int main() {
    int num1, num2;
    std::cout << "Enter two numbers to swap: ";
    std::cin >> num1 >> num2;

    Swapper swapper(num1, num2);

    std::cout << "Before swapping: a = " << num1 << ", b = " << num2 << std::endl;

    swapper.swap();

    swapper.display();

    return 0;
}

