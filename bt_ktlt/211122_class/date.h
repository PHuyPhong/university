#ifndef _DATE_H
#define _DATE_H
#include<iostream>
using namespace std;
class Date{
    int day,month,year;
  public:
    Date(int d=0,int m=0,int y=0);
    friend ostream& operator<<(ostream &os,const Date &a);
    friend istream& operator>>(istream &is,Date &a);
    Date& operator=(const Date &a);
};
#endif