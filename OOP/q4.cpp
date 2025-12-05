#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int roll_no;
    string name;
    float mark;
    float height;

public:

    Student() : roll_no(0), mark(0.0), height(0.0) {}

    void input() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter mark: ";
        cin >> mark;
        cout << "Enter height: ";
        cin >> height;
    }

    void show() const {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Mark: " << mark << endl;
        cout << "Height: " << height << endl;
    }

    float getMark() const {
        return mark;
    }

    friend Student findLowestMark(Student students[], int size);
};

Student findLowestMark(Student students[], int size) {
    if (size <= 0) {
        return Student();
    }

    Student lowest = students[0];
    for (int i = 1; i < size; ++i) {
        if (students[i].getMark() < lowest.getMark()) {
            lowest = students[i];
        }
    }
    return lowest;
}

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        students[i].input();
        cout << endl;
    }

    cout << "All students:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        students[i].show();
        cout << endl;
    }

    Student lowest = findLowestMark(students, SIZE);
    cout << "Student with lowest marks: "<< endl;
    lowest.show();

    return 0;
}