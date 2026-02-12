#include <stdio.h>

void spiral(int mat[3][3]){
    int top=0,bottom=2,left=0,right=2;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++) printf("%d ",mat[top][i]);
        top++;

        for(int i=top;i<=bottom;i++) printf("%d ",mat[i][right]);
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--) printf("%d ",mat[bottom][i]);
            bottom--;
        }

        if(left<=right){
            for(int i=bottom;i>=top;i--) printf("%d ",mat[i][left]);
            left++;
        }
    }
}

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    spiral(mat);
    return 0;
}