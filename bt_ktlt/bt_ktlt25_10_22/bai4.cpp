#include<iostream>
using namespace std;
int main(){
    int n;
    int c=0,l=0,t=0;
    do{
        cout<<"Nhap vao so nguyen ban muon: ";
        cin>>n;
        if(n>0){
           if(n%2==0){
              c++;
           } else{
              l++;
           }
        }
        if(n!=0&&n%8==0){
            t++;
        }
    }while(n!=0);
    cout<<"so so chan la: "<<c<<endl;
    cout<<"so so le la: "<<l<<endl;
    cout<<"so so chia het cho 8 la: "<<t<<endl;
}