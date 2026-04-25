#include <stdio.h>

int trace(int mat[3][3]){
    int sum=0;
    for(int i=0;i<3;i++)
        sum+=mat[i][i];
    return sum;
}

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d", trace(mat));
    return 0;
}