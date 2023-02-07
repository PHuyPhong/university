#include"image.h"
void Image::in(int _l,int _w){
   l=_l;
   w=_w;
   im=new unsigned char*[_l];
   for(int i=0;i<l;i++){
     im[i]=new unsigned char[_w];
   }
   for(int i=0;i<l;i++){
    for(int j=0;j<w;j++){
        scanf("%d",&im[i][j]);
    }
   }
}
Image::~Image(){
    for(int i=0;i<l;i++){
        delete [] im[i];
    }
    delete [] im;
}
float Image::aveBrightness(){
   int x=0;
   for(int i=0;i<w;i++){
    for(int j=0;j<l;j++){
        x+=im[i][j];
    }
   }
   return x/(l*w);
}
void Image::binConvert(int threshold){
   for(int i=0;i<l;i++){
    for(int j=0;j<w;j++){
        if(im[i][j]<threshold){
            im[i][j]=0;
        }
        else im[i][j]=1;
    }
   }
   priImaValue();
}
void Image::priImaValue(){
    cout<<endl;
    for(int i=0;i<l;i++){
        for(int j=0;j<w;j++){
            printf("%d ",im[i][j]);
        }
        cout<<endl;
    }
}
void Image::strTranform(int x,int y,int n){
   if(n%2==0){
    cout<<"ERROR";
   }
   for(int i=0;i<n;i++){
    im[x-((n-1)/2)+i][y-(n-1)/2]=0;
   }
   for(int i=0;i<n;i++){
    im[x-((n-1)/2)+i][y+(n-1)/2]=0;
   }
   for(int i=0;i<n;i++){
    im[x-(n-1)/2][y-((n-1)/2)+i]=0;
   }
   for(int i=0;i<n;i++){
    im[x+(n-1)/2][y-((n-1)/2)+i]=0;
   }
   priImaValue();
}