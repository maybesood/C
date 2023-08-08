#include<stdio.h>
int fibo(int n){
    if (n==1 || n==2) return 1;
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);
    return ans1+ans2;
}
int main(){
    int n;
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d",x);
    return 0;
}