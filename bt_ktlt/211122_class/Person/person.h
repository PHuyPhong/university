#ifndef _PERSON_H
#define _PERSON_H
#include<iostream>
using namespace std;
class Person{
     string name;
     int age;
     string gender;
public:
    Person(string _name="",int _age=0,string _gender="");
    string getname();
    void setname(string _name);
    int getage();
    void setage(int _age);
    string getgender();
    void setgender(string _gender="");
    virtual void display();
};
#endif