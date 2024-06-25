#include <iostream>

using namespace std;


class Cricketer 
{
protected: 
    string name;
    int age;

public:
    Cricketer(const string& n, int a) : name(n), age(a) {}

    virtual void displayData() const 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Batsman : public Cricketer
{
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:

    Batsman(const string& n, int a, int tr, int bp)
        : Cricketer(n, a), totalRuns(tr), bestPerformance(bp) 
	{
        averageRuns = totalRuns / 20.0;
    }

    void inputData() 
	{
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance (in one match): ";
        cin >> bestPerformance;
        averageRuns = totalRuns / 20.0; 
    }

    void displayData() const override 
	{
        Cricketer::displayData(); 
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main()
 {
    Batsman batsman("Virat Kohli", 32, 12000, 183);

    cout << "Initial Batsman Data:" << endl;
    batsman.displayData();

    batsman.inputData();

    cout << "\nUpdated Batsman Data:" << endl;
    batsman.displayData();

    return 0;
}

