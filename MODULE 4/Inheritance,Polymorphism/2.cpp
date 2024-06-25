#include <iostream>

using namespace std;

class Rectangle {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const 
	{
        return length * width;
    }
};

class AreaCalculator : public Rectangle {
public:
    AreaCalculator(double l, double w) : Rectangle(l, w) {}

    void displayArea() const 
	{
        cout << "Area of Rectangle: " << calculateArea() << endl;
    }
};

int main() 
{
    AreaCalculator rectangle(5.0, 3.0);

    rectangle.displayArea();

    return 0;
}

