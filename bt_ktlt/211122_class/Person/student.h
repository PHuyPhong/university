#ifndef _STUDENT_H
#define _STUDENT_H
#include "person.h"
class Student:public Person{
     string lop;
     int id;
  public:
     Student(string _name="",int _age=0,string _gender="",string _lop="",int _id=0);
     void setlop(string _lop);
     string getlop();
     void setid(int _id);
     int getid();
     void display();
};
#endif