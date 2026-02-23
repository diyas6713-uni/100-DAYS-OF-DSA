#include <stdio.h>

int lastOccurrence(int arr[], int n, int key) {
    int l = 0, r = n - 1, res = -1;

    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == key) {
            res = mid;
            l = mid + 1;
        }
        else if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return res;
}

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    printf("%d", lastOccurrence(arr, n, key));
    return 0;
}