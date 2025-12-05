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
        Time& operator--() { // pre-decrement
            --hr;
            --min;
            --sec;
            return *this;
        }
        Time operator--(int) { // post-decrement
            Time temp = *this;
            --(*this);
            return temp;
        }
        void display() const {
            cout << hr << ":" << min << ":" << sec << endl;
        }
};

int main() {
    Time t(5, 30, 45);
    cout << "Original time: ";
    t.display();
    
    --t; // pre-decrement
    cout << "After pre-decrement: ";
    t.display();
    
    t--; // post-decrement
    cout << "After post-decrement: ";
    t.display();
    
    return 0;
}
