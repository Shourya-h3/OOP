#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout << "Enter start and end of the range: ";
    cin >> start >> end;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
