#include <stdio.h>

void leftRotateK(int arr[], int n, int k){
    for(int i=0;i<k;i++){
        int first = arr[0];
        for(int j=0;j<n-1;j++)
            arr[j] = arr[j+1];
        arr[n-1] = first;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    leftRotateK(arr,5,2);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}