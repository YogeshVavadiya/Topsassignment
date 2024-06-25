#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;

public:

    Person() 
	{
        cout << "Person Default Constructor" << endl;
        name = "Unknown";
    }

    Person(const string& n) : name(n) 
	{
        cout << "Person Parameterized Constructor" << endl;
    }
    void displayName() const 
	{
        cout << "Name: " << name << endl;
    }
};

class Student : public Person 
{
protected:
    int rollNumber;

public:
    Student() 
	{
        cout << "Student Default Constructor" << endl;
        rollNumber = 0;
    }
    Student(const string& n, int roll) : Person(n), rollNumber(roll) 
	{
        cout << "Student Parameterized Constructor" << endl;
    }

    void displayRollNumber() const 
	{
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class ExamResult : public Student 
{
private:
    double percentage;

public:
    ExamResult() 
	{
        cout << "ExamResult Default Constructor" << endl;
        percentage = 0.0;
    }

    ExamResult(const string& n, int roll, double perc) : Student(n, roll), percentage(perc)
	{
        cout << "ExamResult Parameterized Constructor" << endl;
    }

    void displayPercentage() const 
	{
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() 
{
    ExamResult student("John Doe", 2023001, 85.5);

    student.displayName();
    student.displayRollNumber();
    student.displayPercentage();

    return 0;
}

