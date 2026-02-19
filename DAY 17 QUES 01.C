#include <stdio.h>

int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int arr[] = {5, 6, 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", findMin(arr, n));
    return 0;
}