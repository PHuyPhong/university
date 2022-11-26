#include<iostream>
#include"person.h"
using namespace std;
int main(){
    Person p1;
    p1.input();
    p1.output();
    p1.settenque("Phung Huy Phong","Ha Noi");
    p1.output();
    return 0;
}