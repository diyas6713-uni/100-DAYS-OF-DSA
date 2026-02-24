#include <stdio.h>

int floorSearch(int arr[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] <= x) {
            ans = arr[mid];
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,2,4,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    printf("%d", floorSearch(arr, n, x));
    return 0;
}