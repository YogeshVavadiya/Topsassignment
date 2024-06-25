#include <iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:
    Number(int x, int y) : a(x), b(y) {}

    friend int findMax(const Number& num);

    void display() const 
	{
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int findMax(const Number& num)
{
    return (num.a > num.b) ? num.a : num.b;
}

int main() 
{
    Number num(5, 10);

    cout << "Numbers:" << endl;
    num.display();

    int maxNumber = findMax(num);

    cout << "Maximum Number: " << maxNumber << endl;

    return 0;
}

