#include <iostream>

using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int a) {
    return a * a * a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << product << endl;

    cout << "Enter a number to find its cubic value: ";
    cin >> num1;

    int cube = cubic(num1);
    cout << "Cubic value of " << num1 << " is: " << cube << endl;

    return 0;
}

