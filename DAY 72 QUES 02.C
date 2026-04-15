#include <stdio.h>

void mergeArr(int a[], int n, int b[], int m, int c[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]) c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n) c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];
}

int main(){
    int a[]={1,3,5};
    int b[]={2,4,6};
    int c[6];
    mergeArr(a,3,b,3,c);
    for(int i=0;i<6;i++) printf("%d ",c[i]);
    return 0;
}