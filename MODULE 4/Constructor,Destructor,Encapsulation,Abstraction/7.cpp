#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0;
        }
    }

public:
    Date() : day(1), month(1), year(2000) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDay(int d) {
        day = d;
    }

    int getDay() const {
        return day;
    }

    void setMonth(int m) {
        month = m;
    }

    int getMonth() const {
        return month;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate() const {
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > daysInMonth(month, year)) {
            return false;
        }
        return true;
    }

    void displayDate() const {
        if (isValidDate()) {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid date!" << endl;
        }
    }
};

int main() 
{
    Date date(29, 2, 2024);

    date.displayDate();

    date.setDay(31);
    date.setMonth(4);
    date.setYear(2023);

    date.displayDate();

    date.setDay(30);
    date.setMonth(4);
    date.setYear(2023);

    date.displayDate();

    return 0;
}

