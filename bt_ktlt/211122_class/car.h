#ifndef _CAR_H
#define _CAR_H
#include<iostream>
using namespace std;
class Car{
    int sp;//speed
    float pr;//price
    string br;//brand
  public:
    Car(int _sp=0,float _pr=0,string _br="");// tao tham so mac dinh
    void out();//hien thi thong tin xe
    void set(int _sp,float _pr,string _br);//gan thong tin cho xe
    ~Car();// ham huy
    void in();//nhap thong tin xe
    float getprice();//lay gia xe
};
#endif