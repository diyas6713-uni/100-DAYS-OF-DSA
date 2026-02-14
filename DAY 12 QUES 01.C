#include <stdio.h>

int smallestSubWithSum(int arr[], int n, int x) {
    int minLen = n + 1;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum > x && (j - i + 1) < minLen)
                minLen = j - i + 1;
        }
    }

    return minLen;
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 51;
    printf("%d", smallestSubWithSum(arr, n, x));
    return 0;
}