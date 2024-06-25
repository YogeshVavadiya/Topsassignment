#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base(int pv, int pr, int pb) : privateVar(pv), protectedVar(pr), publicVar(pb) {}

    void display() 
	{
        cout << "Base Class:" << endl;
        cout << "Private Variable: Not Accessible" << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

class PublicDerived : public Base {
public:
    
    PublicDerived(int pv, int pr, int pb) : Base(pv, pr, pb) {}
    void display() {
        cout << "Public Derived Class:" << endl;
        cout << "Private Variable: Not Accessible" << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

class PrivateDerived : private Base
{
public:
    PrivateDerived(int pv, int pr, int pb) : Base(pv, pr, pb) {}

    void display() 
	{
        cout << "Private Derived Class:" << endl;
        cout << "Private Variable: Not Accessible" << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

class ProtectedDerived : protected Base {
public:
 
    ProtectedDerived(int pv, int pr, int pb) : Base(pv, pr, pb) {}

    void display() {
        cout << "Protected Derived Class:" << endl;
        cout << "Private Variable: Not Accessible" << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    
    PublicDerived publicDerivedObj(1, 2, 3);
    PrivateDerived privateDerivedObj(4, 5, 6);
    ProtectedDerived protectedDerivedObj(7, 8, 9);

    cout << "Accessing Public Derived Class:" << endl;
    publicDerivedObj.display();
    cout << endl;

    
    return 0;
}

