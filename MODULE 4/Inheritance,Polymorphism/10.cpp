#include <iostream>
#include <cstring>
 
using namespace std;

class MyString 
{
private:
    char* str;

public:
    MyString() : str() {}
    MyString(const char* s) 
	{
        int len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }
    ~MyString()
	{
        delete[] str;
    }
    MyString operator+(const MyString& s) 
	{
        int len1 = strlen(str);
        int len2 = strlen(s.str);
        int totalLen = len1 + len2;

        char* temp = new char[totalLen + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        MyString result(temp);
        delete[] temp;

        return result;
    }

    void display() const 
	{
        cout << "String: " << str << endl;
    }
};
int main() 
{
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString result = str1 + str2;

    cout << "Concatenated String:" << endl;
    result.display();

    return 0;
}

