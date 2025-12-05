#include<iostream>
using namespace std;
void calc(int *a, int *b);
int main(){
    int a,b;
    cout<<"\nEnter the 2 numbers";
    cin>>a>>b;
    cout<<"Before calculation a="<<a<<" b= "<<b;
    calc(&a,&b);
    cout<<"\nafter calculation a="<<a<<" b= "<<b<<"\n";
    return 0;
}
void calc(int *p, int *q){
    if (*p<*q)
    {
        *p=*p+*p;
        *q=*q+*p;
    }
    else{
        *p=*p+*q;
        *q=*q+*q;
    }
    cout<<"\ninside calc function: a="<<*p<<" b= "<<*q;
}