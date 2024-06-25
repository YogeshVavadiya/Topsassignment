#include <iostream>
#include <cmath> 
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() const {
        return M_PI * radius * radius;
    }
    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() const {
        return radius;
    }
};

int main() {
    Circle circle(5.0);

    
    cout << "Circle with radius " << circle.getRadius() <<endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Circumference: " << circle.calculateCircumference() << endl;
    circle.setRadius(10.0);

    cout << "Circle with new radius " << circle.getRadius() << endl;
    cout << "Area: " << circle.calculateArea() <<endl;
    cout << "Circumference: " << circle.calculateCircumference() << endl;

    return 0;
}

