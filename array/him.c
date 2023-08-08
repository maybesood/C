//reverse of array
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);

    int arr[n];
    // for printing all numbers
    for (i=0; i<n ;i++){
        scanf("%d", &arr[i]);
    // for printing only even numbers
    }
    for (i=0; i<n ; i++){
        if (arr[i]%2==0){
            printf("%d \n", arr[i]);
        }
    }
    return 0;
    }
