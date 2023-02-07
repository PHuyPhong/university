#ifndef _F0F1_H
#define _F0F1_H
#include"person.h"
class F0:public Person{
    string bv,kq;
    Date xn,bdd,kt;
  public:
    F0(int _id=0,string _ten="",string _que="",string _bv="",string _kq="",Date _bd=0,Date _xn=0,Date _bdd=0,Date _kt=0);
    void in();
    void out();
};
class F1:public Person{
    string kqxn,cly;
    Date nxn,bdau,kthuc;
    F0 *p;
    int n;
  public:
    F1(int _id=0,string _ten="",string _que="",Date _bd=0,string _kqxn="",string _cly="",Date _nxn=0,Date _bdau=0,Date _kthuc=0,int _n=0);
    void in();
    void out();
    ~F1();
};
#endif