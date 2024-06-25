#include <iostream>
using namespace std;


class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
	
    Employee(const string & empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}


    void setSalary(double performanceRating) {
        if (performanceRating >= 4.5) {
            salary += salary * 0.20;
        } else if (performanceRating >= 3.5) {
            salary += salary * 0.10;
        } else if (performanceRating >= 2.5) {
            salary += salary * 0.05;
        } else {
            cout << "No salary increase due to poor performance." << endl;
        }
    }

    void displayEmployeeDetails() const 
	{
		cout << "\n\n\n===================================\n\n\n";
        cout << "Name: " << name <<endl;
        cout << "Employee ID: " << employeeID <<endl;
        cout << "Salary : " << salary <<endl;
    }
};

int main() {
    string name;
    int id;
    double salary, performanceRating;

    cout << "Enter employee name: ";
	cin >> name;
	cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter employee salary: ";
    cin >> salary;
    cout << "Enter performance rating (1.0 to 5.0): ";
    cin >> performanceRating;

    Employee emp(name, id, salary);

    emp.setSalary(performanceRating);
    emp.displayEmployeeDetails();

    return 0;
}

