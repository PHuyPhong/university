#ifndef _PERSON_H
#define _PERSON_H
#include<iostream>
using namespace std;
class Date{
    int d,m,y;
public:
    void indate();
    void outdate();
    void setdate(int a,int b,int c);
    void getdate(int &a,int &b,int &c);
};
class Person{
     char ten[50],que[100];
     Date dob;
public:
     void input();
     void output();
     void settenque(char s[50],char q[100]);
     void setdob(int a,int b,int c);
     void getdob(int &a,int &b,int &c);
};
#endif