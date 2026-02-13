#include <stdio.h>

int chocolateDistribution(int arr[], int n, int m) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int minDiff = arr[m-1] - arr[0];

    for(int i = 1; i + m -1 < n; i++) {
        int diff = arr[i+m-1] - arr[i];
        if(diff < minDiff)
            minDiff = diff;
    }

    return minDiff;
}

int main() {
    int arr[] = {7,3,2,4,9,12,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 3;
    printf("%d", chocolateDistribution(arr, n, m));
    return 0;
}