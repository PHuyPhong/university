#include "car.h"
int main(){
    int n;
    cout<<"Nhap so xe: ";
    cin>>n;
    Car *p= new Car[n];
    for(int i=0;i<n;i++){
        p[i].in();
    }
    float maxpr=p[0].getprice();
    for(int i=0;i<n;i++){
        if(p[i].getprice()>=maxpr){
            maxpr=p[i].getprice();
        }
    }
    cout<<"Xe co gia cao nhat la: "<<endl;
    for(int i=0;i<n;i++){
        if(p[i].getprice()==maxpr){
            p[i].out();
        }
    }
    delete [] p;
}