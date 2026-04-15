#include <stdio.h>

void copyArr(int a[], int b[], int n){
    for(int i=0;i<n;i++)
        b[i]=a[i];
}

int main(){
    int a[]={1,2,3,4};
    int b[4];
    copyArr(a,b,4);
    for(int i=0;i<4;i++) printf("%d ",b[i]);
    return 0;
}