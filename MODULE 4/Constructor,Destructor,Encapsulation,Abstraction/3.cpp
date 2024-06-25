// Write a C++ program to create a class called Car that has private member variables for company, model, and year.
// Implement member functions to get and set these variables
#include <iostream>
using namespace std;

class car
{
	string  company, model;
	int year;
	
	public:
	void get()
	{
		cout<<"Enter Company Name - ";
		cin>>company;
		cout<<"Enter Model Name - ";
		cin>>model;
		cout<<"Enter Manuf. Year - ";
		cin>>year;
	}	
	
	void display()
	{

		cout<<"Company Name is - "<<company<<endl;
		cout<<"Model Name is - "<<model<<endl;
		cout<<"Year of Manufacturing is - "<<year<<endl;
	}
};	

int main()
{
	car obj,obj2;
	
	cout<<"===========Enter Details of car ==========="<<endl<<endl<<endl;
	obj.get();
	cout<<"============= Details of Car 1============="<<endl<<endl<<endl;
	obj.display();
	
	cout<<"===========Enter Details of car ==========="<<endl<<endl<<endl;
	obj2.get();
	cout<<"============= Details of Car 2============="<<endl<<endl<<endl;
	obj2.display();
	
	return 0;
}
