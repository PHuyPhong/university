#ifndef _ARRAY_H
#define _ARRAY_H
#include<iostream>
using namespace std;
class Array{
    int n;
    int *p;
  public:
    Array(int a=0,int b=0);//ham tao
    ~Array();
    void indata();
    void outdata();
    Array(const Array &a);//ham tao ban sao
    void operator=(const Array &a);//ham toan tu gan
    void setdata(int i,int b);//ham gan 1 phan tu trong mang
    int getdata(int i);//ham lay 1 phan tu trong mang
    int operator[](int index);
    friend ostream& operator<<(ostream &os,const Array &a);
    friend istream& operator>>(istream &is,Array &a);
    int operator()();
    Array operator+(const Array &a);//cong hai mang cung phan tu
    Array operator*(const Array &a);//tru hai mang cung phan tu
    Array operator-(const Array &a);//nhan hai mang cung phan tu
};
#endif