#include <iostream>

using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipcode;

public:
    Address(const string& st, const string& ci, const string& s, const string& z) 
        : street(st), city(ci), state(s), zipcode(z) {}

    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipcode << endl;
    }
};

class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;
    Address address; 

public:

    Student(const string& n, const string& cls, int roll, double m, const Address& addr)
        : name(n), className(cls), rollNumber(roll), marks(m), address(addr) {}

    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress(); 
    }
};

int main() {

    Address addr("123 Main St", "Cityville", "Stateville", "12345");

    Student student("John Doe", "XII", 101, 85.5, addr);

    student.displayStudentInfo();

    return 0;
}

