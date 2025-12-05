#include<iostream>
using namespace std;
int main(){
	int first, second, third;
	cout << "Enter three numbers: ";
	cin >> first >> second >> third;
	int max = first;
	if (second > max){ 
	max = second;
	}
	if (third > max) {
	max = third;
	}
	int min = first;
	if (second < min){
	 min = second;
	 }
	if (third < min){ 
	min = third;
	}
	cout << "\nGreatest: " << max;
	cout << "\nSmallest: " << min;
	return 0;
}

