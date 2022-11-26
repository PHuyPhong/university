#include<iostream>
using namespace std;
void kiemTraTamGiac (int a, int b, int c);
int main(){
    int x,y,z;
    cout<<"Nhap vao do dai 3 canh cua 1 tam giac: ";
    cin>>x>>y>>z;
    kiemTraTamGiac(x,y,z);
}
void kiemTraTamGiac (int a, int b, int c){
    if(b+c>a&&c+a>b&&a+b>c){
         if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            cout<<"Tam giac vuong";  
         }
         else if(a==b&&b==c){
             cout<<"Tam giac deu";
         }
         else if((a==b&&b!=c)||(a==c&&a!=b)||(b==c&&c!=a)){
            cout<<"Tam giac can";
         }
         else{
            cout<<"Tam giac thuong";
         }
    }
    else{
        cout<<"Khong phai tam giac";
    }
}