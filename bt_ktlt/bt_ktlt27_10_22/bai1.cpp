#include<iostream>
#include<math.h>
using namespace std;
double Polynom(double *heso, int n, double x);
int main(){
    int a;
    double y;
    double *coef;
    cout<<"Tinh gia tri cua da thuc P(y) bac a!"<<endl;
    cout<<"Nhap a: ";
    cin>>a;
    if(a<0){
        cout<<"ERROR";
        return 0;
    }
    cout<<"Nhap y: ";
    cin>>y;
    for(int i=a;i>=0;i--){
        cout<<"Nhap he so: ";
        cin>>coef[i];
    }
    cout<<"Gia tri cua da thuc P(y) bac "<<a<<" la: "<<Polynom(coef,a,y)<<endl;
}
double Polynom(double *heso, int n, double x){
    double sum=0;
    for(int i=n;i>=0;i--){
        sum=sum+heso[i]*pow(x,i);
    }
    return sum;
}
