#include <stdio.h>

int longestSubarray(int arr[], int n, int k) {
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == k && (j-i+1) > maxLen)
                maxLen = j-i+1;
        }
    }
    return maxLen;
}

int main() {
    int arr[] = {10,5,2,7,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 15;
    printf("%d", longestSubarray(arr, n, k));
    return 0;
}