#ifndef _IMAGE_H
#define _IMAGE_H
#include<iostream>
using namespace std;
class Image{//lop anh
    int l,w;//lan luot chieu dai va chieu rong cua anh
    unsigned char **im;
  public:
    void in(int _l,int _w);
    ~Image();
    float aveBrightness();
    void binConvert(int threshold);
    void strTranform(int x,int y,int n);
    void priImaValue();
};
#endif