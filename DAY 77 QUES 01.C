#include <stdio.h>

void transpose(int mat[2][2]){
    for(int i=0;i<2;i++){
        for(int j=i+1;j<2;j++){
            int t=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=t;
        }
    }
}

int main(){
    int mat[2][2]={{1,2},{3,4}};
    transpose(mat);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}