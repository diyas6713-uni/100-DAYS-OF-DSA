#include <stdio.h>

int ceilSearch(int arr[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] >= x) {
            ans = arr[mid];
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,2,4,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    printf("%d", ceilSearch(arr, n, x));
    return 0;
}