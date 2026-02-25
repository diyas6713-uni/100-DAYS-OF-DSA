#include <stdio.h>

int searchRotated(int arr[], int n, int key) {
    int l = 0, r = n - 1;

    while(l <= r) {
        int mid = (l + r) / 2;

        if(arr[mid] == key)
            return mid;

        if(arr[l] <= arr[mid]) {
            if(key >= arr[l] && key < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        } else {
            if(key > arr[mid] && key <= arr[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 0;
    printf("%d", searchRotated(arr, n, key));
    return 0;
}