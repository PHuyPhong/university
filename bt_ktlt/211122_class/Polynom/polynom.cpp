#include"polynom.h"
Pol::Pol(int _bac,double _heso){
    bac=_bac;
    heso= new double[bac+1];
    for(int i=0;i<bac+1;i++){
        heso[i]=_heso;
    }
}
Pol::Pol(){
    bac=0;
    heso= new double(1);
}
Pol::~Pol(){
    delete [] heso;
}
void Pol::in(){
    cout<<"\nNhap vao bac cua da thuc: ";
    cin>>bac;
    cout<<"Nhap vao cac he so: ";
    heso=new double[bac+1];
    for(int i=0;i<bac+1;i++){
        cin>>heso[i];
    }
}
Pol::Pol(const Pol &p1){
    bac=p1.bac;
    heso=new double[bac+1];
    for(int i=0;i<bac+1;i++){
         heso[i]=p1.heso[i];
    }
}
Pol& Pol::operator=(const Pol &p1){
    if(bac!=p1.bac){
        delete [] heso;
        bac=p1.bac;
    }
    heso=new double[bac+1];
    for(int i=0;i<bac+1;i++){
        heso[i]=p1.heso[i];
    }
    return *this;
}
void Pol::out(){
    cout<<"\nBac cua da thuc la: "<<bac<<endl;
    cout<<"Cac he so cua da thuc la: "<<endl;
    for(int i=0;i<bac+1;i++){
        cout<<heso[i]<<" ";
    }
}