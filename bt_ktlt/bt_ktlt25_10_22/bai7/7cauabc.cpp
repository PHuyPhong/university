#include<iostream>
using namespace std;
int main(){
    struct sinhvien{
        string mssv,hoten;
        int tuoi;
    } sv0={"20213721","Phong",19}; //a
    //b
    sinhvien sv1;
    cout<<"Nhap mssv: ";
    cin>>sv1.mssv;
    cout<<"Nhap hoten: ";
    cin>>sv1.hoten;
    cout<<"Nhap tuoi: ";
    cin>>sv1.tuoi;
    //c
    cout<<"Ho va ten cua sinh vien la: "<<sv1.hoten<<endl;
    cout<<"MSSV cua sinh vien la: "<<sv1.mssv<<endl;
    cout<<"Tuoi cua sinh vien la: "<<sv1.tuoi<<endl;
    cout<<"Thong tin cua sinh vien la: "<<sv0.hoten<<" "<<sv0.mssv<<" "<<sv0.tuoi;
}