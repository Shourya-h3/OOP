#include <iostream>
using namespace std;

class Time {
private:
    int hours, min, sec;

public:
    Time() : hours(0), min(0), sec(0) {}

    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> min;
        cout << "Enter seconds: ";
        cin >> sec;
    }

    void display() {
        cout << hours << ":" << min << ":" << sec << endl;
    }

    Time add(Time t) {
        Time result;
        result.sec = sec + t.sec;
        result.min = min + t.min + (result.sec / 60);
        result.sec %= 60;
        result.hours = hours + t.hours + (result.min / 60);
        result.min %= 60;
        return result;
    }

    static Time add_static(Time t1, Time t2) {
        Time result;
        result.sec = t1.sec + t2.sec;
        result.min = t1.min + t2.min + (result.sec / 60);
        result.sec %= 60;
        result.hours = t1.hours + t2.hours + (result.min / 60);
        result.min %= 60;
        return result;
    }
};

int main() {
    Time t1, t2, t3, t4;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "Enter second time:" << endl;
    t2.input();

    cout << "First time: ";
    t1.display();

    cout << "Second time: ";
    t2.display();

    t3 = t1.add(t2);
    cout << "Addition using member function: ";
    t3.display();

    t4 = Time::add_static(t1, t2);
    cout << "Addition using static function: ";
    t4.display();

    return 0;
}
