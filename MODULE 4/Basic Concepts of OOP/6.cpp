#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:

    Person() : name(""), age(0), country("") {}

    Person(const string& n, int a, const string& c) : name(n), age(a), country(c) {}

    void setName(const string& n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
    }

    void setCountry(const string& c) {
        country = c;
    }

    string getCountry() const {
        return country;
    }
};

int main() {
    Person person;

    person.setName("John Doe");
    person.setAge(30);
    person.setCountry("USA");

    cout << "Person Details:" << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    Person person2("Jane Doe", 25, "Canada");

    cout << "Person2 Details:" << endl;
    cout << "Name: " << person2.getName() << endl;
    cout << "Age: " << person2.getAge() << endl;
    cout << "Country: " << person2.getCountry() << endl;

    return 0;
}

