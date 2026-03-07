#include <stdio.h>

int findMajority(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++)
            if(arr[j] == arr[i])
                count++;

        if(count > n/2)
            return arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {3,3,4,2,4,4,2,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", findMajority(arr, n));
    return 0;
}