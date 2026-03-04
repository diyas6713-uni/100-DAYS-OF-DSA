#include <stdio.h>

int binarySearchRec(int arr[], int l, int r, int key) {
    if(l > r) return -1;

    int mid = (l + r) / 2;

    if(arr[mid] == key) return mid;
    else if(arr[mid] > key)
        return binarySearchRec(arr, l, mid-1, key);
    else
        return binarySearchRec(arr, mid+1, r, key);
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    printf("%d", binarySearchRec(arr, 0, n-1, key));
    return 0;
}