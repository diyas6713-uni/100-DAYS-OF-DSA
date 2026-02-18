#include <stdio.h>

int maxSum(int arr[], int n) {
    int total = 0, curr = 0;

    for(int i = 0; i < n; i++) {
        total += arr[i];
        curr += i * arr[i];
    }

    int res = curr;

    for(int i = 1; i < n; i++) {
        curr = curr + total - n * arr[n - i];
        if(curr > res)
            res = curr;
    }

    return res;
}

int main() {
    int arr[] = {8, 3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", maxSum(arr, n));
    return 0;
}