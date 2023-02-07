#ifndef _POLYNOM_H
#define _POLYNOM_H
#include<iostream>
using namespace std;
class Pol{//lop da thuc bac n: P=a0+a1x+a2x^2+….+anx^n
    int bac;
    double *heso;
  public:
    Pol(int _bac,double _heso);
    Pol();
    ~Pol();
    void in();
    Pol(const Pol &p1);
    Pol& operator=(const Pol &p1);
    void out();
};
#endif