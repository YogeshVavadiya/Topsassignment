#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void readData() {
        cout << "Enter name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() const
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    double percentage;

public:

    Student(const string& n, int a, double perc) : Person(n, a), percentage(perc) {}

    void readData() {
        Person::readData(); 
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData() const {
        Person::displayData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    Teacher(const string& n, int a, double sal) : Person(n, a), salary(sal) {}
    void readData()
	{
        Person::readData();
        cout << "Enter salary: $";
        cin >> salary;
    }

    void displayData() const 
	{
        Person::displayData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() 
{
    cout << "Enter Student details:" << endl;
    Student student("John Doe", 20, 85.5); 
    student.readData(); 
    cout << "\nStudent details:" << endl;
    student.displayData();

    cout << "\nEnter Teacher details:" << endl;
    Teacher teacher("Jane Smith", 35, 50000);
    teacher.readData(); 
    cout << "\nTeacher details:" << endl;
    teacher.displayData();

    return 0;
}

