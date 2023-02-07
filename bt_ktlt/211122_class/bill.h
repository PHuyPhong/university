#ifndef _BILL_H
#define _BILL_H
#include<iostream>
using namespace std;
class Bill{
    int mshd;//ma so hoa don
    float tien;
    static int shd;//tong so hoa don
    static float tt;//tong tien
  public:
    Bill(int a=0,float b=0);//tao tham so mac dinh 
    ~Bill();//ham huy
    void sua(float a);//sua gia hoa don
    static void out();
};
#endif