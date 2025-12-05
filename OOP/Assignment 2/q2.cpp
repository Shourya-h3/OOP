#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string name;
    string accountNumber;
    string accountType;
    double balance;

public:
    void assignInitialValues(string n, string accNum, string accType, double bal) {
        name = n;
        accountNumber = accNum;
        accountType = accType;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    const int numCustomers = 10;
    BankAccount accounts[numCustomers];

    accounts[0].assignInitialValues("Customer1", "1000001", "savings", 1000.0);
    accounts[1].assignInitialValues("Customer2", "1000002", "current", 2000.0);
    accounts[2].assignInitialValues("Customer3", "1000003", "savings", 1500.0);
    accounts[3].assignInitialValues("Customer4", "1000004", "current", 3000.0);
    accounts[4].assignInitialValues("Customer5", "1000005", "savings", 2500.0);
    accounts[5].assignInitialValues("Customer6", "1000006", "current", 1800.0);
    accounts[6].assignInitialValues("Customer7", "1000007", "savings", 2200.0);
    accounts[7].assignInitialValues("Customer8", "1000008", "current", 3500.0);
    accounts[8].assignInitialValues("Customer9", "1000009", "savings", 1200.0);
    accounts[9].assignInitialValues("Customer10", "1000010", "current", 2800.0);

    for (int i = 0; i < numCustomers; i++) {
        cout << "Account " << i + 1 << ":" << endl;
        accounts[i].display();
        accounts[i].deposit(500);
        accounts[i].withdraw(200);
    }

    return 0;
}

