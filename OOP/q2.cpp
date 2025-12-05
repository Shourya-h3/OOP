#include <iostream>
#include <string>
using namespace std;

class Emp {
private:
    int id;
    string name;
    double salary;

public:
    Emp() {}

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void show() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << endl;
    }
};

int main(){
    Emp arr[100];
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    for (int i = 0; i<n; i++){
        cout<<"Enter data for employee "<<i+1<<":"<<endl;
        arr[i].input();
    }
    cout<<"Employee database"<<endl;
    for (int i= 0; i<n; i++){
        cout<<"Details of employee no "<<i+1<<endl;
        arr[i].show();
    }
    return 0;
}
