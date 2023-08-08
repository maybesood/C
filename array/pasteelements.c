#include<stdio.h>
int main(){
    int i,n;
    int copy[n];
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        copy[i]=arr[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",copy[i]);
    }
    return 0;

}