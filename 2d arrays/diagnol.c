#include<stdio.h>

int main(){
    int r1,c1;

    scanf("%d%d",&r1,&c1);
    
    int mat[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i == j){
                printf("%d ", mat[i][j]);
        }
    }
    }
    
    
    return 0;
}
