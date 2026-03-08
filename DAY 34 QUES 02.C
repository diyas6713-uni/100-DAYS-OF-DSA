#include <stdio.h>

int maxSumSubarray(int arr[], int n) {
    int max = arr[0], curr = arr[0];

    for(int i = 1; i < n; i++) {
        if(curr + arr[i] > arr[i])
            curr = curr + arr[i];
        else
            curr = arr[i];

        if(curr > max)
            max = curr;
    }
    return max;
}

int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", maxSumSubarray(arr, n));
    return 0;
}