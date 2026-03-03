#include <stdio.h>

int kthSmallest(int arr[], int n, int k) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    return arr[k-1];
}

int main() {
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printf("%d", kthSmallest(arr, n, k));
    return 0;
}