#include <stdio.h>

int colSum(int mat[2][2], int c){
    int sum=0;
    for(int i=0;i<2;i++)
        sum+=mat[i][c];
    return sum;
}

int main(){
    int mat[2][2]={{1,2},{3,4}};
    printf("%d", colSum(mat,0));
    return 0;
}