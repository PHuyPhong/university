#include<iostream>
#include"person.h"
using namespace std;
void Date::indate(){
    cout<<"Nhap ngay thang nam sinh cua ban: ";
    cin>>d>>m>>y;
}
void Date::outdate(){
  cout<<"Ngay thang nam sinh cua ban la: "<<d<<"/"<<m<<"/"<<y<<endl;
}
void Date::setdate(int a,int b,int c){
    d=a;
    m=b;
    y=c;
}
void Date::getdate(int &a,int &b,int &c){
    a=d;
    b=m;
    c=y;
}
void Person::input(){
    cout<<"Ten ban la: ";
    cin.getline(ten,50);
    cout<<"Que ban o: ";
    cin.ignore();
    cin.getline(que,100);
    dob.indate();
}
void Person::output(){
    cout<<"Ho va ten: "<<ten<<endl;
    cout<<"Que quan: "<<que<<endl;
    dob.outdate();
}
void Person::setdob(int a,int b,int c){
    dob.setdate(a,b,c);
}
void Person::getdob(int &a,int &b,int &c){
    
}
void Person::settenque(char s[50],char q[100]){
    ten[50]=s[50];
    que[100]=q[100];
}