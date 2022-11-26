#ifndef _COMPLEX_H
#define _COMPLEX_H
#include<iostream>
using namespace std;
class Complex{
    float re,im;
public :
    void setreim(float x,float y);
    void getreim(float &x,float &y);
    void inreim();
    void outreim();
    Complex sum(Complex a);
};
#endif