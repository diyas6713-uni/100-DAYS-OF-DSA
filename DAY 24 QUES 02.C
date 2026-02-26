#include <stdio.h>

int peak(int arr[], int n) {
    int l = 0, r = n - 1;

    while(l < r) {
        int mid = (l + r) / 2;
        if(arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            r = mid;
    }
    return arr[l];
}

int main() {
    int arr[] = {1,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", peak(arr, n));
    return 0;
}