#include<iostream>
using namespace std;
int main(){
    struct sinhvien{
        string mssv,hoten;
        int tuoi;
    } sv;
    sinhvien SV[5];
    //d1
    for(int i=0;i<5;i++){
        cout<<"Ho va ten cua sinh vien thu la: ";
        cin>>SV[i].hoten;
        cout<<"MSSV cua sinh vien thu la: ";
        cin>>SV[i].mssv;
        cout<<"Tuoi cua sinh vien thu la: ";
        cin>>SV[i].tuoi;
    }
    for(int i=0;i<5;i++){    
        cout<<"Ho va ten cua sinh vien thu la: "<<SV[i].hoten<<endl;
        cout<<"MSSV cua sinh vien thu la: "<<SV[i].mssv<<endl;
        cout<<"Tuoi cua sinh vien thu la: "<<SV[i].tuoi<<endl;
    }
    cout<<" Da hien thi o tren"<<endl;
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
    cout<<"Da hien thi o tren"<<endl;  
}