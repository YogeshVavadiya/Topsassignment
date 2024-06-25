#include <iostream>

using namespace std;


class Student 
{
protected:
    string rollNumber;

public:
    Student(const string& roll) : rollNumber(roll) {}

    void displayRollNumber() const 
	{
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student 
{
protected:
    double marks1;
    double marks2;

public:
    Test(const string& roll, double m1, double m2) : Student(roll), marks1(m1), marks2(m2) {}
    void displayMarks() const 
	{
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

class Result : public Test 
{
private:
    double totalMarks;

public:

    Result(const string& roll, double m1, double m2) : Test(roll, m1, m2) 
	{
        totalMarks = marks1 + marks2;
    }

    void displayResult() const 
	{
        displayRollNumber(); 
        displayMarks();      
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Result studentResult("2023001", 85.5, 78.0);
    studentResult.displayResult();

    return 0;
}

