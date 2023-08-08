//multiplication of two arrays
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
    printf("the first matrix is : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    int r2,c2;
    scanf("%d%d",&r2,&c2);
    int mat2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("the second matrix is \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<r1;k++){
                res[i][j]+=mat[i][k]*mat2[k][j];
            }
        }
    }
    printf("the resultant matrix is \n"); 
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }


    return 0;
}