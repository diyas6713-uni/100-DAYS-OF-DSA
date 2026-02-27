#include <stdio.h>

int isPossible(int arr[], int n, int m, int mid) {
    int students = 1, pages = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > mid) return 0;

        if(pages + arr[i] > mid) {
            students++;
            pages = arr[i];
        } else {
            pages += arr[i];
        }
    }
    return students <= m;
}

int allocateBooks(int arr[], int n, int m) {
    int l = 0, r = 0, res = -1;

    for(int i = 0; i < n; i++)
        r += arr[i];

    while(l <= r) {
        int mid = (l + r) / 2;
        if(isPossible(arr, n, m, mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int main() {
    int arr[] = {12,34,67,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 2;
    printf("%d", allocateBooks(arr, n, m));
    return 0;
}