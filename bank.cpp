#include <iostream>
using namespace std;

class BankAccount {
    int id;
    string name;
    double balance;

public:
    BankAccount(int accId, string accName, double initialBal) {
        id = accId;
        name = accName;
        balance = (initialBal >= 500) ? initialBal : 500; // minimum balance
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance - amount >= 500) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
        } else {
            cout << "❌ Withdrawal denied! Minimum balance of 500 must be maintained." << endl;
        }
    }

    void printDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "ID: " << id << "\nName: " << name << "\nBalance: " << balance << endl;
    }

    double getBalance() { return balance; }
};

int main() {
    BankAccount acc(101, "Sushil", 1000);

    acc.printDetails();

    acc.deposit(200);
    acc.withdraw(300);
    acc.withdraw(700); // this will fail due to min balance

    cout << "\nCurrent Balance: " << acc.getBalance() << endl;

    return 0;
}
