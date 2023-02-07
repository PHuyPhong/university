#include"date.h"
Date::Date(int d,int m,int y){
    day=d;
    month=m;
    year=y;
}
ostream& operator<<(ostream &os,const Date &a){
    if(a.day<10||a.month<10||(a.day<10&&a.month<10)){
        os<<'0'<<a.day<<"/"<<'0'<<a.month<<"/"<<a.year;
        return os;
    }
    else{
        os<<a.day<<"/"<<a.month<<"/"<<a.year;
        return os;
    }
}
istream& operator>>(istream &is,Date &a){
    is>>a.day>>a.month>>a.year;
    return is;
}
Date& Date::operator=(const Date &a){
    this->day=a.day;
    this->month=a.month;
    this->year=a.year;
    return *this;
}