#include <stdio.h>

int search2D(int mat[3][3], int key){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(mat[i][j]==key) return 1;
    return 0;
}

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d", search2D(mat,5));
    return 0;
}