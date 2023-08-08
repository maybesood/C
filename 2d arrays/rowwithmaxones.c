#include<stdio.h>
int main(){
    int r,c,maxcount=0,index=-1;
    scanf("%d",&r);
    scanf("%d",&c);
    int mat[r][c];
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if (mat[i][j]==0){
                count++;
            }
        }
    
        if (maxcount<count){
            maxcount=count;
        }
    }
    printf("the maximum times one is occuring is %d",maxcount);
            
        
    
    return 0;
}