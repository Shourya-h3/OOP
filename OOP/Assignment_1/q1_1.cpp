#include <iostream>
using namespace std;

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    int day_num;
    cout << "Enter a day number (1-7): ";
    cin >> day_num;
    Day d = static_cast<Day>(day_num - 1);
    switch (d) {
        case MONDAY: cout << "Monday" << endl; 
        break;
        case TUESDAY: cout << "Tuesday" << endl; 
        break;
        case WEDNESDAY: cout << "Wednesday" << endl; 
        break;
        case THURSDAY: cout << "Thursday" << endl; 
        break;
        case FRIDAY: cout << "Friday" << endl; 
        break;
        case SATURDAY: cout << "Saturday" << endl; 
        break;
        case SUNDAY: cout << "Sunday" << endl; 
        break;
    }
    return 0;
}
