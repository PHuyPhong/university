#include<iostream>
using namespace std;
int main(){
    struct sinhvien{
        string mssv,hoten;
        int tuoi;
    } sv0={"20213721","Phong",19}; //a
    //b
    sinhvien sv;
    cout<<"Nhap mssv: ";
    cin>>sv.mssv;
    cout<<"Nhap hoten: ";
    cin>>sv.hoten;
    cout<<"Nhap tuoi: ";
    cin>>sv.tuoi;
    //c
    cout<<"Ho va ten cua sinh vien la: "<<sv.hoten<<endl;
    cout<<"MSSV cua sinh vien la: "<<sv.mssv<<endl;
    cout<<"Tuoi cua sinh vien la: "<<sv.tuoi<<endl;
    //d
    sinhvien SV[5];
    //d1
    for(int i=0;i<5;i++){
        cout<<"Ho va ten cua sinh vien thu "<<i+1<<" la: ";
        cin>>SV[i].hoten;
        cout<<"MSSV cua sinh vien thu "<<i+1<<" la: ";
        cin>>SV[i].mssv;
        cout<<"Tuoi cua sinh vien thu "<<i+1<<" la: ";
        cin>>SV[i].tuoi;
    }
    for(int i=0;i<5;i++){    
        cout<<"Ho va ten cua sinh vien thu "<<i+1<<" la: "<<SV[i].hoten<<endl;
        cout<<"MSSV cua sinh vien thu "<<i+1<<" la: "<<SV[i].mssv<<endl;
        cout<<"Tuoi cua sinh vien thu "<<i+1<<" la: "<<SV[i].tuoi<<endl;
    }
    //d2
    sinhvien* p=SV;
    while(p!=&SV[5]){
      cout<<"Ho va ten cua sinh vien la: ";
      cin>>p->hoten;
      cout<<"MSSV cua sinh vien la: ";
      cin>>p->mssv;
      cout<<"Tuoi cua sinh vien la: ";
      cin>>p->tuoi;
      p++;
    }
    p=SV;
    while(p!=&SV[5]){    
      cout<<"Ho va ten cua sinh vien la: "<<p->hoten<<endl;
      cout<<"MSSV cua sinh vien la: "<<p->mssv<<endl;
      cout<<"Tuoi cua sinh vien la: "<<p->tuoi<<endl;
      p++;
    }  
}