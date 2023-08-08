#include<stdio.h>
int main(){
    int r,c;
    int mat[r][c];
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",mat[i][j]);
        }
    }
    return 0;
}