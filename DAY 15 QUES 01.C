#include <stdio.h>

int repeatingMissing(int arr[], int n) {
    int repeating = -1, missing = -1;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j])
                repeating = arr[i];
        }
    }

    for(int i = 1; i <= n; i++) {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i)
                found = 1;
        }
        if(!found)
            missing = i;
    }

    printf("Repeating: %d Missing: %d", repeating, missing);
    return 0;
}

int main() {
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    repeatingMissing(arr, n);
    return 0;
}