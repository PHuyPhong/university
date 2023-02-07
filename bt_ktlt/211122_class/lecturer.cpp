#include "lecturer.h"
Lecturer::Lecturer(string _name,int _age,string _gender,string _falcuty,int _tel):Person(_name,_age,_gender){
    falcuty=_falcuty;
    tel=_tel;
}
void Lecturer::setfalcuty(string _falcuty){
    falcuty=_falcuty;
}
string Lecturer::getfalcuty(){
    return falcuty;
}
void Lecturer::settel(int _tel){
    tel=_tel;
}
int Lecturer::gettel(){
    return tel;
}
void Lecturer::display(){
    Person::display();
    cout<<falcuty<<" "<<tel<<endl;
}