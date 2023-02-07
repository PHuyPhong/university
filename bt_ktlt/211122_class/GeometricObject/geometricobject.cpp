#include "geometricobject.h"
GeometricObject::GeometricObject(string _color,bool _filled){
    color=_color;
    filled=_filled;
}
string GeometricObject::getColor(){
    return color;
}
void GeometricObject::setColor(string _color){
    color=_color;
}
bool GeometricObject::isFilled(){
    return filled;
}
void GeometricObject::setFilled(bool _filled){
    filled=_filled;
}
void GeometricObject::print(){
    cout<<color<<" "<<filled<<endl;
}