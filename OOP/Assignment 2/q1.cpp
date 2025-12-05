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

    void display(){
    	cout<<"Name: "<<name<<endl;
    	cout<<"Balance: "<<balance<<endl;
    }
};

int main() {
    BankAccount account;

    account.assignInitialValues("Rahul", "123456789", "savings", 1000.0);
    account.display();

    return 0;
}

