#ifndef _LECTURER_H
#define _LECTURER_H
#include "person.h"
class Lecturer:public Person{
      string falcuty;
      int tel;
    public:
      Lecturer(string _name="",int _age=0,string _gender="",string _falcuty="",int _tel=0);
      void setfalcuty(string _falcuty);
      string getfalcuty();
      void settel(int _tel);
      int gettel();
      void display();
};
#endif