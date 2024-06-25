#include <iostream>

using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void displayInfo() const 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Marks 
{
protected:
    double marks[5]; 

public:
    void readMarks()
	{
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; ++i) 
		{
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void displayMarks() const 
	{
        cout << "Marks:" << endl;
        for (int i = 0; i < 5; ++i) 
		{
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};
class Student : public Person, public Marks 
{
private:
    string rollNumber;
    double totalMarks;
    double percentage;

public:
    Student(const string& n, int a, const string& roll) : Person(n, a), rollNumber(roll) {}
    void calculate() 
	{
        totalMarks = 0;
        for (int i = 0; i < 5; ++i) 
		{
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 5.0);
    }
    void displayMarkSheet() const 
	{
        cout << "----------- Mark Sheet -----------" << endl;
        displayInfo(); 
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() 
{
    Student student("John Doe", 18, "2023001");
    student.readMarks();
    student.calculate();
    student.displayMarkSheet();

    return 0;
}

