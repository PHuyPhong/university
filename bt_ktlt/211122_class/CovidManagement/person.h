#ifndef _PERSON_H
#define _PERSON_H
#include<iostream>
#include<cstring>
#include"date.h"
using namespace std;
class Person{
    int id;
    string ten,que;
    Date bd;
  public:
    Person(int _id=0,string _ten=0,string _que=0,Date _bd=0);
    virtual void in();
    virtual void out();
};
#endif