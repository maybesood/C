//insert an element
#include<stdio.h>
int main(){
    int i,n,x,pos;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    scanf("%d",&pos);

    n=n+1;

    for(i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}