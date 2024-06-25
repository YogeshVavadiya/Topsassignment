#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& x, T& y) 
{
    T temp = x;
    x = y;
    y = temp;
}

int main() 
{
    int a = 5, b = 10;
    cout << "Before swapping (integers): a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping (integers): a = " << a << ", b = " << b << endl;

    double c = 3.5, d = 7.2;
    cout << "Before swapping (doubles): c = " << c << ", d = " << d << endl;
    swapValues(c, d);
    cout << "After swapping (doubles): c = " << c << ", d = " << d << endl;

    char e = 'X', f = 'Y';
    cout << "Before swapping (characters): e = " << e << ", f = " << f << endl;
    swapValues(e, f);
    cout << "After swapping (characters): e = " << e << ", f = " << f << endl;

    return 0;
}

