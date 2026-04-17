#include <stdio.h>

int unionCount(int a[], int n, int b[], int m){
    int count=n;
    for(int i=0;i<m;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                found=1; break;
            }
        }
        if(!found) count++;
    }
    return count;
}

int main(){
    int a[]={1,2,3};
    int b[]={2,3,4};
    printf("%d", unionCount(a,3,b,3));
    return 0;
}