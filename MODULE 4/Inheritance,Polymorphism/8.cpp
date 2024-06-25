#include <iostream>
using namespace std;

int mathOperation(int a, int b) {
    return a + b;
}

double mathOperation(double a, double b) {
    return a + b;
}

int mathOperation(int a, int b, int c) {
    return a - b - c;
}

double mathOperation(double a, double b, double c) {
    return a - b - c;
}

int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}

double mathOperation(double a, double b, double c, double d) {
    return a * b * c * d;
}

double mathOperation(int a, int b, double c) {
    if (b != 0) 
	{
        return a / (b * c);
    }
	else 
	{
        cout << "Error: Division by zero" << endl;
        return 0;
    }
}

double mathOperation(double a, double b, int c) 
{
    if (c != 0) 
	{
        return a / (b * c);
    }
	 else 
	{
        cout << "Error: Division by zero" << endl;
        return 0.0;
    }
}

int main()
{
    
    cout << "Integer Addition: " << mathOperation(5, 3) << endl;

    cout << "Double Addition: " << mathOperation(5.5, 3.2) << endl;

    cout << "Integer Subtraction: " << mathOperation(10, 3, 2) << endl;

    cout << "Double Subtraction: " << mathOperation(10.5, 3.2, 2.1) << endl;

    cout << "Integer Multiplication: " << mathOperation(2, 3, 4, 5) << endl;

    cout << "Double Multiplication: " << mathOperation(2.5, 1.5, 3.5, 2.0) << endl;

    cout << "Integer Division: " << mathOperation(10, 2, 1.5) << endl;

    cout << "Double Division: " << mathOperation(10.0, 2.0, 1) << endl;

    return 0;
}

