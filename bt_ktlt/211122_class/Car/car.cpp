#include "car.h"
Car::Car(int _sp,float _pr,string _br){
    sp=_sp;
    pr=_pr;
    br=_br;
}
void Car::out(){
    cout<<"Toc do cua xe la: "<<sp<<endl;
    cout<<"Gia cua xe la: "<<pr<<endl;
    cout<<"Ten thuong hieu la: "<<br<<endl;
}
void Car::set(int _sp,float _pr,string _br){
    sp=_sp;
    pr=_pr;
    br=_br;
}
void Car::in(){
    cout<<"Toc do cua xe la: ";
    cin>>sp;
    cout<<"Gia cua xe la: ";
    cin>>pr;
    cout<<"Ten thuong hieu la: ";
    cin>>br;
}
float Car::getprice(){
    return pr;
}
Car::~Car(){}