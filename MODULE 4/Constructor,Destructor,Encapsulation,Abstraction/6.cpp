#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& n, int id, double sal) : name(n), employeeID(id), salary(sal) {}

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

    void setName(const string& n) {
        name = n;
    }
    
    string getName() const {
        return name;
    }

    void setEmployeeID(int id) {
        employeeID = id;
    }
    
    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }
};

int main() 
{
    Employee emp("John Doe", 12345, 50000.0);
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Initial Salary: $" << emp.getSalary() << endl;

    double performanceRating;
    cout << "Enter the performance rating (1.0 to 5.0): ";
    cin >> performanceRating;
    emp.setSalary(performanceRating);

    cout << "Updated Salary: $" << emp.getSalary() << endl;

    return 0;
}

