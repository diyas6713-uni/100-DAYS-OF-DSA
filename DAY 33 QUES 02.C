#include <stdio.h>

void leaders(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int j;
        for(j = i+1; j < n; j++) {
            if(arr[i] < arr[j])
                break;
        }
        if(j == n)
            printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    leaders(arr, n);
    return 0;
}