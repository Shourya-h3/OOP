#include<iostream>
#include<string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    int hours;

    void AddSal() {
        if (salary < 5000) {
            salary += 1000;
        }
    }

    void AddWork() {
        if (hours > 6) {
            salary += 500;
        }
    }

public:
    Employee(string empName) {
        name = empName;
        salary = 0.0;
        hours = 0;
    }

    void getInfo(double sal, int hrs) {
        salary = sal;
        hours = hrs;
    }

    void applyBonuses() {
        AddSal();
        AddWork();
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp("John Doe");
    emp.getInfo(4500, 8);
    emp.applyBonuses();
    cout << "Final Salary: " << emp.getSalary() << endl;
    return 0;
}
