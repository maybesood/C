#include<stdio.h>
int main(){
    int t,a;
    int c;
    scanf("%d%d",&t,&a);
    c=(a*100)/t;
    printf("%d%% ",c);
    if (c>75){
        printf("eligible");
    }
    else{
        printf("not eligible");
    }
    return 0;
}