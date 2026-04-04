#include <stdio.h>

int minArr(int arr[], int n) {
    int min = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i] < min) min = arr[i];
    return min;
}

int main() {
    int arr[]={5,2,8,1,9};
    printf("%d", minArr(arr,5));
    return 0;
}