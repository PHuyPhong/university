#include<iostream>
using namespace std;
void nhapmang(int *p,int k);
void tong(int *a,int *b,int *c,int k);
int main(){
    int n;
    cout<<"Nhap so phan tu mang: ";
    cin>>n;
    if(n<=0){
        cout<<"ERROR";
        return 0;
    }
    int *x=new int[n];
    int *y=new int[n];
    nhapmang(x,n);
    nhapmang(y,n);
    int *z=new int[n];
    tong(x,y,z,n);
    for(int i=0;i<n;i++){
        cout<<z[i]<<" ";
    }
    delete[] x;
    delete[] y;
    delete[] z;
}
void nhapmang(int *p,int k){
    for(int i=0;i<k;i++){
        cin>>p[i];
    }
}
void tong(int *a,int *b,int *c,int k){
    for(int i=0;i<k;i++){
        c[i]=a[i]+b[i];
    }        
}