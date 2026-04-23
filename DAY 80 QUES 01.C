#include <stdio.h>

int minMatrix(int mat[2][2]){
    int min=mat[0][0];
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(mat[i][j]<min) min=mat[i][j];
    return min;
}

int main(){
    int mat[2][2]={{5,2},{8,1}};
    printf("%d", minMatrix(mat));
    return 0;
}