#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Elements are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest element is: " << max << "\n";
    return 0;
}
