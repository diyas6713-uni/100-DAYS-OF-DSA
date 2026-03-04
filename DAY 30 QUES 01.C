#include <stdio.h>

int partition2(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1, j = high;

    while(1) {
        while(i <= high && arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;

        if(i >= j) break;

        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

    int t = arr[low];
    arr[low] = arr[j];
    arr[j] = t;

    return j;
}

void quickSort2(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition2(arr, low, high);
        quickSort2(arr, low, pi-1);
        quickSort2(arr, pi+1, high);
    }
}

int main() {
    int arr[] = {9,3,7,6,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort2(arr, 0, n-1);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}