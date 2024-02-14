#include <iostream>
#include <string>

class StringComparator {
private:
    std::string str;

public:
    StringComparator(const std::string& s) : str(s) {}

    // Overloading the equality operator
    int operator==(const StringComparator& other) {
        if (str == other.str) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
    // Example usage
    StringComparator str1("hello");
    StringComparator str2("hello");
    StringComparator str3("world");

    // Comparing strings
    std::cout << "str1 == str2: " << (str1 == str2) << std::endl; // Output: 1 (true)
    std::cout << "str1 == str3: " << (str1 == str3) << std::endl; // Output: 0 (false)

    return 0;
}

