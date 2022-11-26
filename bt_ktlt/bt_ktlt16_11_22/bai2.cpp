#include<iostream>
using namespace std;
void Reverse(double arr[],const int size,double *&rev){
    rev=new double[size];
    for(int i=0;i<size;i++){
        rev[i]=arr[size-1-i];
    }
}
int main(){
    const int size=5;
    double a[size];
    double *b;
    Reverse(a,size,b);
    for(int i=0;i<size;i++){
        cout<<b[i]<<" ";
    }
}