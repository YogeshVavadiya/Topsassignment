#include <iostream>
using namespace std;

class calculator
{
	int a,b;
	public:
	calculator()
	{
		cout<<"Enter No 1 : ";
		cin>>a;
		cout<<"Enter No 2 : ";
		cin>>b;
	}
	void sum()
	{
		cout<<"Addition is = "<<a+b<<endl;
		cout<<"Subtraction is = "<<a-b<<endl;
		cout<<"Multiplication = "<<a*b<<endl;
		cout<<"Division = "<<a/b<<endl;
		
	}
	
};
int main()
	{
		calculator obj;
		obj.sum();
		return 0;
	}
	
