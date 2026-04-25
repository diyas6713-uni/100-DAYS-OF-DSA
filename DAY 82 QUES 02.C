#include <stdio.h>

int isIdentity(int mat[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j && mat[i][j]!=1) return 0;
            if(i!=j && mat[i][j]!=0) return 0;
        }
    }
    return 1;
}

int main(){
    int mat[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    printf("%d", isIdentity(mat));
    return 0;
}