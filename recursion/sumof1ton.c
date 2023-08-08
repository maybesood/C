#include<stdio.h>
int add(int n){
    if (n==1 || n==0) return 1;
    int recAns = n + add(n-1);
    return recAns;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum = add(n);
    printf("%d",sum);
    return 0;
}