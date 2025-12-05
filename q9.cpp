#include<iostream>
using namespace std;
int main(){
    int a =10;
    int &b=a;
    cout<<a<<" "<<b<<"\n";
    cout<<&a<<" "<< &b;
    b = 40;
    cout<<"\na= "<<a;
    int &c = b;
    c=555;
    cout<<"\n"<<a<<" "<<b<< " " <<c<<"\n";
    return 0;
}