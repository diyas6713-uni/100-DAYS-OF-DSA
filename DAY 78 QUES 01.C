#include <stdio.h>

int rowSum(int mat[2][2], int r){
    int sum=0;
    for(int j=0;j<2;j++)
        sum+=mat[r][j];
    return sum;
}

int main(){
    int mat[2][2]={{1,2},{3,4}};
    printf("%d", rowSum(mat,1));
    return 0;
}