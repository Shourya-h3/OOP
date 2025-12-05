#include<iostream>
using namespace std;

class Time{
    private:
        int hr;
        int min;
        int sec;
    public:
        Time() : hr(0), min(0), sec(0) {}
        Time(int h, int m, int s) : hr(h), min(m), sec(s) {}
        friend Time operator+(const Time& t1, const Time& t2);
        void display() const {
            cout << hr << ":" << min << ":" << sec << endl;
        }
};

Time operator+(const Time& t1, const Time& t2) {
    int total_sec = t1.sec + t2.sec;
    int carry_min = total_sec / 60;
    total_sec %= 60;
    int total_min = t1.min + t2.min + carry_min;
    int carry_hr = total_min / 60;
    total_min %= 60;
    int total_hr = t1.hr + t2.hr + carry_hr;
    return Time(total_hr, total_min, total_sec);
}

int main() {
    Time t1(1, 30, 45);
    Time t2(2, 15, 30);
    Time t3 = t1 + t2;
    t3.display();
    return 0;
}
