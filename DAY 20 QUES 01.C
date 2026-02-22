#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;

    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    printf("%d", binarySearch(arr, n, key));
    return 0;
}