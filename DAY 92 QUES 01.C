#include <stdio.h>

void rotateLeft(int arr[], int n){
    int first = arr[0];
    for(int i=0;i<n-1;i++)
        arr[i] = arr[i+1];
    arr[n-1] = first;
}

int main(){
    int arr[]={1,2,3,4,5};
    rotateLeft(arr,5);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}