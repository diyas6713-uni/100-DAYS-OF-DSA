#include <stdio.h>

int maxProduct(int arr[], int n) {
    int max_end = arr[0], min_end = arr[0], max_so_far = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < 0) {
            int temp = max_end;
            max_end = min_end;
            min_end = temp;
        }

        max_end = (arr[i] > max_end * arr[i]) ? arr[i] : max_end * arr[i];
        min_end = (arr[i] < min_end * arr[i]) ? arr[i] : min_end * arr[i];

        if(max_end > max_so_far)
            max_so_far = max_end;
    }

    return max_so_far;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", maxProduct(arr, n));
    return 0;
}