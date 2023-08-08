#include<stdio.h>
#include<stdbool.h>

int main(){
    int r, c;

    scanf("%d%d", &r, &c);

    int mat1[r][c], mat2[r][c];

    // Read in first matrix
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    // Read in second matrix
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if matrices are identical
    bool identical = true;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(mat1[i][j] != mat2[i][j]){
                identical = false;
                break;
            }
        }
        if(!identical){
            break;
        }
    }

    // Print result
    if(identical){
        printf("The matrices are identical\n");
    }else{
        printf("The matrices are not identical\n");
    }

    return 0;
}