#include<iostream>
using namespace std;
int main(){
    int a[1000],i,n;
    cout<<"Nhap so so dau tien cua day fibonacci: ";
    cin>>n;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<1000;i++){
        a[i]=a[i-1]+a[i-2];
    }
    if(n<=0){
        cout<<"ERROR";
    }
    else{
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
    }
}