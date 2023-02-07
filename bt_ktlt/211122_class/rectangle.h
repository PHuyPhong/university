#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include<iostream>
using namespace std;
class Coor{//lop toa do 2 chieu
    double x,y;
  public:
    void incoor();//nhap toa do
};
class Rec{//lop hinh chu nhat
    double l,s;//chieu dai va chieu rong
    Coor A,B,C,D;//toa do 4 dinh
  public:
    Rec();
    ~Rec();
    void getdr(double &_l,double &_s);//lay kich thuoc
    void elastic(double k);//co dan theo ti le k
    void perare(double &c, double &a);//dien tich va chu vi
    void changls(double _l,double _s);//thay doi chieu dai va chieu rong
};
#endif