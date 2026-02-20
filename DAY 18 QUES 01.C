#include <stdio.h>

int peakElement(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if((i == 0 || arr[i-1] <= arr[i]) &&
           (i == n-1 || arr[i+1] <= arr[i]))
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", peakElement(arr, n));
    return 0;
}