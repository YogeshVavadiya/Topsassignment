#include <iostream>
using namespace std;

class Number 
{
private:
    int a;
    int b;

public:
    
    Number(int x, int y) : a(x), b(y) {}

    friend void swapNumbers(Number& num);

    void display() const 
	{
        cout << "a: " << a << ", b: " << b << endl;
    }
};

void swapNumbers(Number& num)
 {
    num.a = num.a + num.b;
    num.b = num.a - num.b;
    num.a = num.a - num.b;
}

int main() 
{
    Number num(5, 10);
    cout << "Before Swapping:" << endl;
    num.display();
    swapNumbers(num);
    cout << "After Swapping:" << endl;
    num.display();

    return 0;
}

