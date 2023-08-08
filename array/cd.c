#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }

    int ones=0;
    int zero=0;

    
    for(i=0;i<n;i++){
        if arr[i]==0{
            zero++
        }
        else if arr[i]==1{
            ones++
        }
    }
    
    
    return 0;   
}