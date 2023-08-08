#include<stdio.h>
int main(){
    int r1,c1,sum=0;

    scanf("%d%d",&r1,&c1);
    
    int mat[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            sum+=mat[i][j];
            
        }
    }
    printf("%d",sum);
    
    return 0;
}
