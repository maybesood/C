#include <stdio.h>

int main(){
    int n,i,even[50],odd[50],j=0,k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (arr[i]%2==0){
            even[j]=arr[i]; 
            j++; 
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<j;i++){
        printf("%d",even[i]);
    }
    for(i=0;i<k;i++){
        printf("%d",odd[i]);
    }
    return 0;

}