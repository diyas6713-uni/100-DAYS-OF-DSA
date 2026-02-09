#include <stdio.h>

int subArrayExists(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == 0)
                return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", subArrayExists(arr, n));
    return 0;
}