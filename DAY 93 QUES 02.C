#include <stdio.h>

void rightRotateK(int arr[], int n, int k){
    for(int i=0;i<k;i++){
        int last = arr[n-1];
        for(int j=n-1;j>0;j--)
            arr[j] = arr[j-1];
        arr[0] = last;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    rightRotateK(arr,5,2);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}