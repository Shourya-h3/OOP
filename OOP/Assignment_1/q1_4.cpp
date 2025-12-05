#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }
    cout << "Enter " << m*n << " integers for the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
