#include <iostream>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:

    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
	BankAccount account(12345, 1000.0);

    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: " << account.getBalance() << endl;

    account.deposit(500.0);

    account.withdraw(200.0);

    account.withdraw(1500.0);

    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}

