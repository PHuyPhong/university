#include"array.h"
int main(){
    /*Array a(5,12),b(4,1);
    a.outdata();
    a.indata();
    a.outdata();
    a=b;
    a.outdata();
    b.indata();
    b.outdata();
    a.outdata();
    a.setdata(2,5);
    int x=a.getdata(2);
    cout<<x<<endl;
    a.outdata();*/
    Array a,b;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    cout<<a[3]<<" "<<b[2]<<" "<<a()<<" "<<b()<<endl;
    Array c=a+b,d=a-b,e=a*b;
    cout<<c<<endl<<d<<endl<<e<<endl;
}