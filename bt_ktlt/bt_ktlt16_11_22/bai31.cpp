#include<iostream>
using namespace std;
int tong(int arr[100][100],int x,int y){
    int tong=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            tong+=arr[i][j];
        }
    }
    return tong;
}
void tongcl(int arr[100][100],int x,int y,int &tongc,int &tongl){ 
      for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if((i+1)%2==0){
                tongc+=arr[i][j];
            }
            else tongl+=arr[i][j];
        }
      }
}
void maxmin(int arr[100][100],int x, int y, int &max,int &min){
    max=arr[0][0];
    min=arr[0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
}
int maxco(int arr[100][100],int x,int b){
    int max=arr[0][b-1];
    for(int i=0;i<x;i++){
        if(max<arr[i][b-1]){
            max=arr[i][b-1];
        }
    }
    return max;
}
int main(){
    int m,n;
    int a[100][100];
    cout<<"Nhap so hang: ";
    cin>>m;
    cout<<"Nhap so cot: ";
    cin>>n;
    cout<<"Nhap cac phan tu mang: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"tong cac phan tu mang la: "<<tong(a,m,n)<<endl;
    int tongc,tongl;
    tongcl(a,m,n,tongc,tongl);
    cout<<"tong hang chan la: "<<tongc<<endl;
    cout<<"tong hang le la: "<<tongl<<endl;
    int max,min;
    maxmin(a,m,n,max,min);
    cout<<"gia tri lon nhat cua mang la: "<<max<<endl;
    cout<<"gia tri nho nhat cua mang la: "<<min<<endl;
    int maxc;
    int c;
    cout<<"Nhap cot thu: ";
    cin>>c;
    cout<<"Gia tri lon nhat cua cot thu "<<c<<" la: "<<maxco(a,m,c)<<endl;
}