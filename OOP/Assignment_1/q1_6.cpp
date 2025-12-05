#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double res = 1.0;
    for (int i = 0; i < n; i++) {
        res *= m;
    }
    return res;
}

int power(int m, int n = 2) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= m;
    }
    return res;
}

int main() {
    double m;
    int mm, n;
    cout << "Enter double m, int mm, and n: ";
    cin >> m >> mm >> n;
    cout << "Double power: " << m << " to " << n << " is " << power(m, n) << endl;
    cout << "Int power: " << mm << " to " << n << " is " << power(mm, n) << endl;
    return 0;
}
