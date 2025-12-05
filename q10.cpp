#include<iostream>
using namespace std;
void calc(int &, int &);
int main(){
    int a,b;
    cout<<"\nEnter the 2 numbers";
    cin>>a>>b;
    cout<<"Before calculation a="<<a<<" b= "<<b;
    calc(a,b);
    cout<<"\nafter calculation a="<<a<<" b= "<<b<<"\n";
    return 0;
}
void calc(int &m, int &n){
    if (m<n)
    {
        m=m+m;
        n=n+m;
    }
    else{
        m=m+n;
        n=n+n;
    }
    cout<<"\ninside calc function: a="<<m<<" b= "<<n;
}