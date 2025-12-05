#include <iostream>
using namespace std;

int* createVector(int M) {
    return new int[M];
}
int main() {
    int M;
    cout << "Enter size M: ";
    cin >> M;
    int* vec = createVector(M);
    cout << "Enter " << M << " integers: ";
    for (int i = 0; i < M; i++) {
        cin >> vec[i];
    }
    cout << "Vector elements: ";
    for (int i = 0; i < M; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    delete[] vec;
    return 0;
}
