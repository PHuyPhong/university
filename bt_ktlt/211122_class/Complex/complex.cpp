#include<iostream>
#include"complex.h"
using namespace std;
void Complex::inreim(){
    cout<<"Nhap phan thuc va ao: ";
    cin>>re>>im;
}
void Complex::outreim(){
    cout<<re<<" + "<<im<<"i"<<endl;
}
void Complex::setreim(float x,float y){
    re=x;
    im=y;
}
void Complex::getreim(float &x,float &y){
    x=re;
    y=im;
}
Complex Complex::sum(Complex x){
    Complex tong;
    tong.re=this->re+x.re;
    tong.im=this->im+x.im;
    return tong;
}