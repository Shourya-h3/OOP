#include<iostream>
using namespace std;
void calc(int a, int b);
int main(){
    int a,b;
    cout<<"\nEnter the 2 numbers";
    cin>>a>>b;
    cout<<"Before calculation a="<<a<<" b= "<<b;
    calc(a,b);
    cout<<"\nafter calculation a="<<a<<" b= "<<b<<"\n";
    return 0;
}
void calc(int a, int b){
    if (a<b)
    {
        a=a+a;
        b=b+a;
    }
    else{
        a=b+a;
        b=b+b;
    }
    cout<<"\ninside calc function: a="<<a<<" b= "<<b;
}