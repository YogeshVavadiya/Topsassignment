#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    void setLength(double l) {
        length = l;
    }
    
    void setWidth(double w) {
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }
};

int main() 
{
    Rectangle rectangle(4.0, 3.0);

    cout << "Rectangle with length " << rectangle.getLength() << " and width " << rectangle.getWidth() << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    rectangle.setLength(6.0);
    rectangle.setWidth(5.0);

    cout << "Rectangle with new length " << rectangle.getLength() << " and new width " << rectangle.getWidth() << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    return 0;
}

