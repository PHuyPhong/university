#include "circle.h"
#include "rectangle.h"
int main(){
    Circle *c1=new Circle(2.0,"red",true);
    Rectangle *r1=new Rectangle(3.0,4.0,"blue",false);
    cout<<r1->getPerimeter()<<endl;
    cout<<c1->getArea()<<endl;
    delete c1;delete r1;
}