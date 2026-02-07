#include <stdio.h>

int duplicate(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int index = arr[i] % n;
        arr[index] += n;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] / n > 1)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", duplicate(arr, n));
    return 0;
}