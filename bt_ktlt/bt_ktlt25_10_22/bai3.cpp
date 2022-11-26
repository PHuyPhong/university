#include<iostream>
using namespace std;
int main(){
    int n;
    int max=-32767,min=32767;
    do{
        cout<<"Nhap vao so nguyen ban muon: ";
        cin>>n;
        if(n>max&&n!=0){
            max=n;
        }
        if(n<min&&n!=0){
            min=n;
        }
    }while(n!=0);
    cout<<"So lon nhat la: "<<max<<endl;
    cout<<"So nho nhat la: "<<min;
}