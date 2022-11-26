#include<iostream>
#include"complex.h"
using namespace std;
int main(){
    Complex z1,z2;
    z1.inreim();
    z2.inreim();
    z1.outreim();
    z2.outreim();
    Complex z3=z2.sum(z1);
    cout<<"Tong 2 so phuc tren la: ";
    z3.outreim();
    float a,b;
    z3.getreim(a,b);
    cout<<a<<" "<<b<<endl;
    Complex z4;
    z4.setreim(9.2,8.7);
    z4.outreim();
    return 0;
}