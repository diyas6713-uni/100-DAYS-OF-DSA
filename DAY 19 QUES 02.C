#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int findGCD(int arr[], int n) {
    int result = arr[0];
    for(int i = 1; i < n; i++)
        result = gcd(result, arr[i]);
    return result;
}

int main() {
    int arr[] = {2, 4, 6, 8, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d", findGCD(arr, n));
    return 0;
}