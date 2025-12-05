#include <iostream>
using namespace std;
void swapByValue(int x, int y);
int main() {
    int x, y;
    cout << "Enter 2 values:" <<"\n";
    cin >> x >> y;
    cout << "before calling swapByValue:" <<"\n";
    cout << "x = " << x << ", y = " << y <<"\n";
    swapByValue(x, y);
    cout << "after calling swapByValue:" <<"\n";
    cout << "x = " << x << ", y = " << y <<"\n";
    return 0;
}
void swapByValue(int a, int b) {
    cout << "before swap:" <<"\n";
    cout << "a = " << a << ", b = " << b <<"\n";
    int temp = a;
    a = b;
    b = temp;
    cout << "after swap:" <<"\n";
    cout << "a = " << a << ", b = " << b <<"\n";
}