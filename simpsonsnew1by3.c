#include<stdio.h>
int main(){
    int n,sub=6;
    scanf("%d",&n);
    float x[n],y[n];
    for(int i=0;i<n;i++){
        scanf("%f%f",&x[i],&y[i]);

    }
    float h,s;
    h=(x[n-1]-x[0])/sub;
    s=y[n-1]+y[0];
    for(int i=0;i<n;i++){
        if(i%2==0){
            s+=2*y[i];
        }else{
           s=3*y[i];
        }
    }
    s=s*h/3;
    printf("%f",s);
}
