#include"image.h"
int main(){
    Image p;
    p.in(4,3);
    p.priImaValue();
    cout<<p.aveBrightness();
    p.binConvert(100);
    p.strTranform(2,1,3);
}