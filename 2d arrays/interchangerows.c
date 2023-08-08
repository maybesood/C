#include<stdio.h>
int main(){
    int r1,c1,i,j,row1,row2;
    scanf("%d%d",&r1,&c1);
    int mat1[r1][c1];

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("enter the row numbers you want to interchange");
    scanf("%d%d",&row1,&row2);

    
    for(i=0;i<c1;i++){
        int temp=mat1[row1][i];
        mat1[row1][i]=mat1[row2][i];
        mat1[row2][i]=temp;

    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d",mat1[i][j]);
        }
        printf("\n");
    }
    return 0;
}