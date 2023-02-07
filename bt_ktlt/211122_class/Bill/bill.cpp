#include "bill.h"
int Bill::shd=0;
float Bill::tt=0;
Bill::Bill(int a,float b){
    mshd=a;
    tien=b;
    shd++;
    tt+=tien;
}
Bill::~Bill(){
    shd--;
    tt-=tien;
}
void Bill::sua(float a){
    tt-=tien;
    tien=a;
    tt+=tien;
}
void Bill::out(){
    cout<<"tong so hoa don la: "<<shd<<endl;
    cout<<"tong tien ban la: "<<tt<<endl;
}