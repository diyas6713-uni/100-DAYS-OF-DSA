#include <stdio.h>

int maxArr(int arr[], int n) {
    int max=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max) max=arr[i];
    return max;
}

int main() {
    int arr[]={1,9,3,7,5};
    printf("%d", maxArr(arr,5));
    return 0;
}