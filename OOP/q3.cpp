#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;
    string department;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Department: ";
        cin >> department;
    }

    void show() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }

    string compare_emp(Employee other) {
        if (salary > other.salary) {
            return name;
        } else {
            return other.name;
        }
    }
};

int main() {
    Employee emp1, emp2;

    cout << "Enter details for Employee 1:" << endl;
    emp1.input();

    cout << "\nEnter details for Employee 2:" << endl;
    emp2.input();

    cout << "\nDetails of Employee 1:" << endl;
    emp1.show();

    cout << "\nDetails of Employee 2:" << endl;
    emp2.show();

    string higherSalaryEmp = emp1.compare_emp(emp2);
    cout << "\nEmployee with higher salary: " << higherSalaryEmp << endl;

    return 0;
}
