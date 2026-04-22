#include <stdio.h>

int maxMatrix(int mat[2][2]){
    int max=mat[0][0];
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(mat[i][j]>max) max=mat[i][j];
    return max;
}

int main(){
    int mat[2][2]={{1,9},{3,4}};
    printf("%d", maxMatrix(mat));
    return 0;
}