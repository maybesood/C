#include<stdio.h>
int main(){
    int i,n,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]*arr[i]);
    }
    
    return 0;
    }