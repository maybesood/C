#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);

        }
    }
    //print two times the value in the matrix
    for(int i=0;i<r;i++){
        for(int j=c-1;j>=0;j--){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}