#include <stdio.h>

int findMedian(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }

    if(n % 2 == 0)
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    else
        return arr[n/2];
}

int main() {
    int arr[] = {90,100,78,89,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", findMedian(arr, n));
    return 0;
}