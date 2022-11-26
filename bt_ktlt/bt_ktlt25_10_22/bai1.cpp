#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x;
    int c=0;
    cout<<"X= ";
    cin>>x;
    if(x<2){
        cout<<"NO";
        return 0;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            c++;
        }
    }
    if(c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}