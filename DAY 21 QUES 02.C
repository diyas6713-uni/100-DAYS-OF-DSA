#include <stdio.h>

int countOccurrences(int arr[], int n, int key) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            count++;
    return count;
}

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    printf("%d", countOccurrences(arr, n, key));
    return 0;
}