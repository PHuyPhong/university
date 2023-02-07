#include "circle.h"
Circle::Circle(double _radius,string _color,bool _filled):GeometricObject(_color,_filled){
    radius=_radius;
}
double Circle::getRadius(){
    return radius;
}
double Circle::getArea(){
    return 3.14*radius*radius;
}

void Circle::setRadius(double _radius){
    radius=_radius;
}
void Circle::printCircle(){
    print();
    cout<<radius<<endl;
}
double Circle::getPerimeter(){
    return 3.14*2*radius;
}