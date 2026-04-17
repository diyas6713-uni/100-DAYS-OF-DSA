#include <stdio.h>

int intersection(int a[], int n, int b[], int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                count++;
                break;
            }
        }
    }
    return count;
}

int main(){
    int a[]={1,2,3};
    int b[]={2,3,4};
    printf("%d", intersection(a,3,b,3));
    return 0;
}