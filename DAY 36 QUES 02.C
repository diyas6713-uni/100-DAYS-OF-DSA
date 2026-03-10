#include <stdio.h>

int longestUnique(int arr[], int n) {
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int visited[1000] = {0};
        for(int j = i; j < n; j++) {
            if(visited[arr[j]])
                break;
            visited[arr[j]] = 1;
            if(j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }
    return maxLen;
}

int main() {
    int arr[] = {1, 2, 1, 3, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", longestUnique(arr, n));
    return 0;
}