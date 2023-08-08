#include<stdio.h>
int factorial(int n){
    if (n==0 || n==1) return 1;
    int recAns = n*factorial(n-1);
    return recAns;
}
int main(){
    int n;
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    
    return 0;
}