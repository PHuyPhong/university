#include"person.h"
Person::Person(int _id,string _ten,string _que,Date _bd){
    id=_id;
    ten=_ten;
    que=_que;
    bd=_bd;
}
void Person::in(){
    cout<<"Nhap so cccd: ";
    cin>>id;
    cout<<"Nhap ten: ";
    cin>>ten;
    cout<<"Nhap que: ";
    cin>>que;
    cout<<"Nhap ngay thang nam sinh: ";
    cin>>bd;
}
void Person::out(){
    cout<<"So cccd la: "<<id<<endl;
    cout<<"Ten: "<<ten<<endl;
    cout<<"Que: "<<que<<endl;
    cout<<"Ngay thang nam sinh: "<<bd<<endl;
}