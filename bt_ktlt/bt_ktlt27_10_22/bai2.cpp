#include<iostream>
#include<math.h>
using namespace std;
struct complex{
    float re,im;
};
void tong(complex x,complex y);
void hieu(complex x, complex y);
void thuong(complex x,complex y);
void tich(complex x, complex y);
void sumsub(complex z,complex t, complex &x, complex &y);
int main(){
    complex z1,z2;
    cout<<"Nhap vao phan thuc cua so thu 1: ";
    cin>>z1.re;
    cout<<"Nhap vao phan ao cua so thu 2: ";
    cin>>z1.im;
    cout<<"Nhap vao phan thuc cua so thu 2: ";
    cin>>z2.re;
    cout<<"Nhap vao phan ao cua so thu 2: ";
    cin>>z2.im;
    tong(z1,z2);
    hieu(z1,z2);
    tich(z1,z2);
    thuong(z1,z2);
    complex tong,hieu;
    sumsub(z1,z2,tong,hieu);
    cout<<"Tong va hieu cua 2 so la: "<<tong.re<<" + "<<tong.im<<"i"<<" va "<<hieu.re<<" + "<<hieu.im<<"i";
}
void tong(complex x, complex y){
    complex tong;
    tong.re=x.re+y.re;
    tong.im=x.im+y.im;
    cout<<"Tong cua 2 so phuc la: "<<tong.re<<" + "<<tong.im<<"i"<<endl;
}
void hieu(complex x, complex y){
    complex hieu;
    hieu.re=x.re-y.re;
    hieu.im=x.im-y.im;
    cout<<"Hieu cua 2 so phuc la: "<<hieu.re<<" + "<<hieu.im<<"i"<<endl;
}
void tich(complex x, complex y){
    complex tich;
    tich.re=x.re*y.re-x.im*y.im;
    tich.im=x.im*y.re+x.re*y.im;
    cout<<"Tich 2 so phuc la: "<<tich.re<<" + "<<tich.im<<"i"<<endl;
}
void thuong(complex x, complex y){
    complex thuong;
    thuong.re=(x.re*y.re-x.im*y.im)/(pow(y.re,2)+pow(y.im,2));
    thuong.im=(x.im*y.re-x.re*y.im)/(pow(y.re,2)+pow(y.im,2));
    cout<<"Thuong 2 so phuc la: "<<thuong.re<<" + "<<thuong.im<<"i"<<endl;
}
void sumsub(complex z, complex t, complex &x, complex &y){
    x.re=z.re+t.re;
    x.im=z.im+t.im;
    y.re=z.re-t.re;
    y.im=z.im-t.im;
}