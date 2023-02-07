#ifndef _GEOMETRICOBJECT_H
#define _GEOMETRICOBJECT_H
#include<iostream>
using namespace std;
class GeometricObject{
    string color;
    bool filled;
  public:
    GeometricObject(string _color="",bool _filled=false);
    string getColor();
    void setColor(string _color);
    bool isFilled();
    void setFilled(bool _filled);
    void print();
    virtual double getArea()=0;
    virtual double getPerimeter()=0;
};
#endif