#include"polynom.h"
int main(){
    Pol a(3,6);
    Pol b=a;
    b.out();
    a.out();
    Pol c;c.in();
    Pol d=c;
    c.out();
    d.out();
    Pol e;
    e.out();
}