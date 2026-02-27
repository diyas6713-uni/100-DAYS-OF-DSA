#include <stdio.h>

int isValid(int arr[], int n, int k, int mid) {
    int cows = 1, last = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] - last >= mid) {
            cows++;
            last = arr[i];
        }
    }
    return cows >= k;
}

void sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
}

int aggressiveCows(int arr[], int n, int k) {
    sort(arr, n);

    int l = 0, r = arr[n-1] - arr[0], res = 0;

    while(l <= r) {
        int mid = (l + r) / 2;
        if(isValid(arr, n, k, mid)) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int main() {
    int arr[] = {1,2,4,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printf("%d", aggressiveCows(arr, n, k));
    return 0;
}