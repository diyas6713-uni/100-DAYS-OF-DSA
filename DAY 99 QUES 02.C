#include <stdio.h>

int isSymmetric(int mat[2][2]){
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            if(mat[i][j]!=mat[j][i]) return 0;
    return 1;
}

int main(){
    int mat[2][2]={{1,2},{2,1}};
    printf("%d", isSymmetric(mat));
    return 0;
}