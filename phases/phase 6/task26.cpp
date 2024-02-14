#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Employee : public Person {
protected:
    int employeeId;
    static int nextId;

public:
    Employee(const std::string& n, int a) : Person(n, a) {
        employeeId = nextId++;
    }

    void display() {
        Person::display();
        std::cout << "Employee ID: " << employeeId << std::endl;
    }
};

int Employee::nextId = 1000;

class Manager : public Employee {
protected:
    std::string department;

public:
    Manager(const std::string& n, int a, const std::string& dept) : Employee(n, a), department(dept) {}

    void display() {
        Employee::display();
        std::cout << "Department: " << department << std::endl;
    }
};

int main() {
    Employee emp("John Doe", 30);
    Manager manager("Alice Smith", 35, "HR");

    std::cout << "Employee Details:" << std::endl;
    emp.display();
    std::cout << std::endl;

    std::cout << "Manager Details:" << std::endl;
    manager.display();

    return 0;
}

