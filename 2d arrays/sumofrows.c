#include<stdio.h>
int main(){
    int r,r1,c1,sum=0;

    scanf("%d%d",&r1,&c1);
    
    int mat[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("which row you want sum of ?? \n");
    scanf("%d",&r);
    
    for(int j=0;j<c1;j++){
        sum=sum+mat[r][j];
        
    }
    printf("the sum of the requred row is : %d ",sum);
    return 0;
}