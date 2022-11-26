#include<iostream>
using namespace std;
void max(int arr[100],int &max,int n);
void min(int arr[100],int &min,int n);
int main(){
    int a[100],b,x,y;
    cout<<"Nhap so phan tu mang: ";
    cin>>b;
    if(b<=0){
        cout<<"ERROR";
        return 0;
    }
    for(int i=0;i<b;i++){
        cout<<"Nhap so nguyen trong mang: ";
        cin>>a[i];
    }
    max(a,x,b);
    min(a,y,b);
    cout<<"Gia tri lon nhat va nho nhat cua mang la: "<<x<<" "<<y<<endl;
}
void max(int arr[100],int &max,int n){
    max=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            max=arr[i+1];
        }
    }
}
void min(int arr[100],int &min,int n){
    min=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            min=arr[i+1];
        }
    }
}