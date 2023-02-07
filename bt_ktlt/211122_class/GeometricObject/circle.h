#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "geometricobject.h"
class Circle:public GeometricObject{
     double radius;
   public:
     Circle(double _radius=0,string _color="",bool _filled=false);
     double getRadius();
     double getArea();
     void setRadius(double _radius);
     void printCircle();
     double getPerimeter();
};
#endif