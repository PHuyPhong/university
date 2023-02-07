#include"person.h"
Person::Person(string _name,int _age,string _gender){
    name=_name;
    age=_age;
    gender=_gender;
}
string Person::getname(){
    return name;
}
void Person::setname(string _name){
    name=_name;
}
int Person::getage(){
    return age;
}
void Person::setage(int _age){
    age=_age;
}
string Person::getgender(){
    return gender;
}
void Person::setgender(string _gender){
    gender=_gender;
}
void Person::display(){
    cout<<"Person:"<<endl;
    cout<<name<<" "<<age<<" "<<gender<<endl;
}