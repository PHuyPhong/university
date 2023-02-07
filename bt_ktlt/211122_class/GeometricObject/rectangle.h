#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "geometricobject.h"
class Rectangle:public GeometricObject{
      double width,height;
    public:
      Rectangle(double _width=0,double _height=0,string _color="",bool _filled=false);
      double getWidth();
      double getHeight();
      void setWidth(double _width);
      void setHeight(double _height);
      double getArea();
      double getPerimeter();
      void printRectangle();
};
#endif