#include <iostream>
using namespace std;

const double PI = 3.14159265359;

class AreaCalculator {
public:

    double calculateArea(double length, double breadth) {
        return length * breadth;
    }

    double calculateArea(double base, double height, char shape = 't') {
        if (shape == 't' || shape == 'T') {
            return 0.5 * base * height;
        }
        else {
            cerr << "Invalid shape type for triangle calculation." << endl;
            return 0;
        }
    }

    double calculateArea(double radius, char shape = 'c') {
        if (shape == 'c' || shape == 'C') {
            return PI * radius * radius;
        }
        else {
            cerr << "Invalid shape type for circle calculation." << endl;
            return 0;
        }
    }
};

int main() {
    AreaCalculator ac;

    double rectangleArea = ac.calculateArea(5.0,3.0,'r');
    cout << "Area of Rectangle: " << rectangleArea << endl;

    double triangleArea = ac.calculateArea(4.0, 6.0, 't');
    cout << "Area of Triangle: " << triangleArea << endl;

    double circleArea = ac.calculateArea(2.5, 'c');
    cout << "Area of Circle: " << circleArea << endl;

    return 0;
}

