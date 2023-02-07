#include "rectangle.h"
Rectangle::Rectangle(double _width,double _height,string _color,bool _filled):GeometricObject(_color,_filled){
    width=_width;
    height=_height;
}
double Rectangle::getArea(){
    return width*height;
}
double Rectangle::getHeight(){
    return height;
}
double Rectangle::getWidth(){
    return width;
}
void Rectangle::setHeight(double _height){
    height=_height;
}
void Rectangle::setWidth(double _width){
    width=_width;
}
double Rectangle::getPerimeter(){
    return 2*(height+width);
}
void Rectangle::printRectangle(){
    print();
    cout<<width<<" "<<height<<endl;
}
