#include<iostream>
using namespace std;
int main(){
    int n,d=0;
    int a[1000];
    a[1]=1;
    a[2]=2;
    for(int i=3;i<1000;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout<<"Nhap so nguyen ban muon: ";
    cin>>n;
    if(n<=0){
        cout<<"ERROR";
    } else{
         for(int i=1;i<1000;i++){
            if(n==a[i]){
                d++;
            }
         }
    }
    if(d==0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}