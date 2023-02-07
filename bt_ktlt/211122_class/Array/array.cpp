#include "array.h"
Array::Array(int a,int b){
    n=a;
    p=new int[n];
    for(int i=0;i<n;i++){
        p[i]=b;
    }
}
Array::~Array(){
    delete [] p;
}
void Array::indata(){
    cout<<"\nNhap so phan tu: ";
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
}
void Array::outdata(){
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
Array::Array(const Array &a){
    n=a.n;
    p=new int[n];
    for(int i=0;i<n;i++){
        p[i]=a.p[i];
    }
}
void Array::operator=(const Array &a){
    if(n!=a.n){
        delete [] p;
        n=a.n;
        p=new int[n];
    }
    for(int i=0;i<n;i++){
        p[i]=a.p[i];
    }
}
void Array::setdata(int i,int b){
    p[i]=b;
}
int Array::getdata(int i){
    return p[i];
}
int Array::operator[](int index){
    return p[index];
}
ostream& operator<<(ostream &os,const Array &a){
    for(int i=0;i<a.n;i++){
        os<<a.p[i]<<" ";
    }
    return os;
}
istream& operator>>(istream &is,Array &a){
    is>>a.n;
    for(int i=0;i<a.n;i++){
        is>>a.p[i];
    }
    return is;
}
int Array::operator()(){
    int max=this->p[0];
    for(int i=1;i<this->n;i++){
        if(this->p[i]>=max){
            max=this->p[i];
        }
    }
    return max;
}
Array Array::operator+(const Array &a){
    Array b;
    for(int i=0;i<this->n;i++){
        b.p[i]+=this->p[i]+a.p[i];
    }
    return b;
}
Array Array::operator-(const Array &a){
    Array b;
    for(int i=0;i<this->n;i++){
        b.p[i]=this->p[i]-a.p[i];
    }
    return b;
}
Array Array::operator*(const Array &a){
    Array b;
    for(int i=0;i<this->n;i++){
        b.p[i]+=this->p[i]*a.p[i];
    }
    return b;
}
