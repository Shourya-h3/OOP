#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double res = 1.0;
    for (int i = 0; i < n; i++) {
        res *= m;
    }
    return res;
}

int main() {
    double m;
    int n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    cout << m << " to the power " << n << " is " << power(m, n) << endl;
    cout << m << " squared is " << power(m) << endl;
    return 0;
}
