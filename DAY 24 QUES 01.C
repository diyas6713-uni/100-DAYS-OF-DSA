#include <stdio.h>

int findMinRotated(int arr[], int n) {
    int l = 0, r = n - 1;

    while(l < r) {
        int mid = (l + r) / 2;
        if(arr[mid] > arr[r])
            l = mid + 1;
        else
            r = mid;
    }
    return arr[l];
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", findMinRotated(arr, n));
    return 0;
}