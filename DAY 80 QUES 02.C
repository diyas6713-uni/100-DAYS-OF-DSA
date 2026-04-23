#include <stdio.h>

int sumMatrix(int mat[2][2]){
    int sum=0;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            sum+=mat[i][j];
    return sum;
}

int main(){
    int mat[2][2]={{1,2},{3,4}};
    printf("%d", sumMatrix(mat));
    return 0;
}