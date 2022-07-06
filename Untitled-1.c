#include<stdio.h>
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
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max(a[1000],n);
}