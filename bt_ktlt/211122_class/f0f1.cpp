#include"f0f1.h"
F0::F0(int _id,string _ten,string _que,string _bv,string _kq,Date _bd,Date _xn,Date _bdd,Date _kt):Person(_id,_ten,_que,_bd){
    bv=_bv;
    kq=_kq;
    xn=_xn;
    bdd=_bdd;
    kt=_kt;
}
void F0::in(){
    Person::in();
    cout<<"Benh vien: ";
    cin>>bv;
    cout<<"Ket qua xet nghiem: ";
    cin>>kq;
    cout<<"Ngay xet nghiem: ";
    cin>>xn;
    cout<<"Ngay bat dau dieu tri: ";
    cin>>bdd;
    cout<<"Ngay ket thuc dieu tri: ";
    cin>>kt;
}
void F0::out(){
    Person::out();
    cout<<"Benh vien: "<<bv<<endl;
    cout<<"Ket qua xet nghiem: "<<kq<<endl;
    cout<<"Ngay xet nghiem: "<<xn<<endl;
    cout<<"Ngay bat dau dieu tri: "<<bdd<<endl;
    cout<<"Ngay ket thuc dieu tri: "<<kt<<endl;
}
F1::~F1(){
    delete [] p;
}
F1::F1(int _id,string _ten,string _que,Date _bd,string _kqxn,string _cly,Date _nxn,Date _bdau,Date _kthuc,int _n):Person(_id,_ten,_que,_bd){
    n=_n;
    kqxn=_kqxn;
    cly=_cly;
    nxn=_nxn;
    bdau=_bdau;
    kthuc=_kthuc;
    p=new F0[_n];
    for(int i=0;i<_n;i++){
        p[i].in();
    }
}
void F1::in(){
    Person::in();
    cout<<"Ngay xet nghiem: ";
    cin>>nxn;
    cout<<"Ket qua xet nghiem: ";
    cin>>kqxn;
    cout<<"Noi cach ly: ";
    cin>>cly;
    cout<<"Ngay bat dau cach ly: ";
    cin>>bdau;
    cout<<"Ngay ket thuc cach ly: ";
    cin>>kthuc;
    cout<<"So F0 da tiep xuc: ";
    cin>>n;
    p=new F0[n];
    for(int i=0;i<n;i++){
        p[i].in();
    }
}
void F1::out(){
    Person::out();
    cout<<"Ngay xet nghiem: "<<nxn<<endl;
    cout<<"Ket qua xet nghiem: "<<kqxn<<endl;
    cout<<"Noi cach ly: "<<cly<<endl;
    cout<<"Ngay bat dau cach ly: "<<bdau<<endl;
    cout<<"Ngay ket thuc cach ly: "<<kthuc<<endl;
    for(int i=0;i<n;i++){
        p[i].out();
    }
}