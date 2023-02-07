#include "rectangle.h"
void Coor::incoor(){
    cout<<"nhap vao toa do: ";
    cin>>x>>y;
}
Rec::~Rec(){};
Rec::Rec(){
    cout<<"Nhap vao chieu dai va chieu rong: ";
    cin>>l>>s;
    A.incoor();B.incoor();C.incoor();D.incoor();
}
void Rec::getdr(double &_l,double &_s){
     _l=l;
     _s=s;
}
void Rec::elastic(double k){
    l*=k;
    s*=k;
}
void Rec::perare(double &c,double &a){
    c=(l+s)*2;
    a=l*s;
}
void Rec::changls(double _l,double _s){
    l=_l;
    s=_s;
}
