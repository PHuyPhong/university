#include "student.h"
Student::Student(string _name,int _age,string _gender,string _lop,int _id):Person(_name,_age,_gender){
    lop=_lop;
    id=_id;
}
void Student::setlop(string _lop){
    lop=_lop;
}
string Student::getlop(){
    return lop;
}
void Student::setid(int _id){
    id=_id;
}
int Student::getid(){
    return id;
}
void Student::display(){
    Person::display();
    cout<<lop<<" "<<id<<endl;
}