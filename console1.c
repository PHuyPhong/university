#include<stdio.h>
#include<string.h>
int max(int arr,int k){
    int max=arr[0];
    for(int i=1;i<k;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int a[1000],n;
    printf("Nhap vao so phan tu mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    max(a[1000],n);
}