#include <stdio.h>

int threeWayPartition(int arr[], int n, int a, int b) {
    int start = 0, end = n - 1;

    for(int i = 0; i <= end;) {
        if(arr[i] < a) {
            int temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
            start++;
            i++;
        }
        else if(arr[i] > b) {
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--;
        }
        else
            i++;
    }

    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    threeWayPartition(arr, n, 1, 2);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}