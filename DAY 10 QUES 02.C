#include <stdio.h>

int longestConsecutive(int arr[], int n) {
    int maxLen = 1;

    for(int i = 0; i < n; i++) {
        int current = arr[i];
        int len = 1;

        for(int j = 0; j < n; j++) {
            if(arr[j] == current + 1) {
                current++;
                len++;
                j = -1;
            }
        }

        if(len > maxLen)
            maxLen = len;
    }

    return maxLen;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", longestConsecutive(arr, n));
    return 0;
}