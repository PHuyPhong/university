#include<iostream>
using namespace std;
int fac(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b*=i;
    }
    return b;
}
int main(){
    int n,k;
    cin>>k>>n;
    long c=fac(n)/(fac(k)*fac(n-k));
    cout<<c;
}