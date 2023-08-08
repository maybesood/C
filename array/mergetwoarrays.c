#include<stdio.h>
int main(){
    int i,n1,n2,n3;
    int merge[100];
    scanf("%d",&n1);
    scanf("%d",&n2);
    int a[n1];
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    int b[n2];
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++){
        merge[i]=a[i];
    }
    for(i=0;i<n2;i++){
        merge[i+n1]=b[i];
    }
    for(i=0;i<n3;i++){
        printf("%d",merge[i]);
    }


    return 0;
}