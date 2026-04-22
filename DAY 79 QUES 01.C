#include <stdio.h>

int searchMatrix(int mat[2][2], int key){
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(mat[i][j]==key) return 1;
    return 0;
}

int main(){
    int mat[2][2]={{1,2},{3,4}};
    printf("%d", searchMatrix(mat,3));
    return 0;
}