#include <stdio.h>

int missing(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return (n+1)*(n+2)/2 - sum;
}

int main(){
    int arr[]={1,2,4,5};
    printf("%d", missing(arr,4));
    return 0;
}