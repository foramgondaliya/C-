#include <iostream>
#include <string>

using namespace std;

struct Student {
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_email;
    string stu_college;
};

void registerStudent(Student& student) {
    cout << "Enter student ID: ";
    cin >> student.stu_id;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, student.stu_name);
    cout << "Enter student age: ";
    cin >> student.stu_age;
    cout << "Enter student course: ";
    cin.ignore();
    getline(cin, student.stu_course);
    cout << "Enter student email: ";
    getline(cin, student.stu_email);
    cout << "Enter student college: ";
    getline(cin, student.stu_college);
}

void displayStudent(const Student& student) {
    cout << "Student ID: " << student.stu_id << endl;
    cout << "Student Name: " << student.stu_name << endl;
    cout << "Student Age: " << student.stu_age << endl;
    cout << "Student Course: " << student.stu_course << endl;
    cout << "Student Email: " << student.stu_email << endl;
    cout << "Student College: " << student.stu_college << endl;
}

int main() {
    Student newStudent;

    cout << "Registration Form:" << endl;
    registerStudent(newStudent);

    cout << "\nRegistered Student Information:" << endl;
    displayStudent(newStudent);

    return 0;
}

