#include "bill.h"
int main(){
    Bill b1(01,1000);
    {Bill b2(02,3400);}//goi ham huy
    b1.sua(20000);
    Bill::out();
}