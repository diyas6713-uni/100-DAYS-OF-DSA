#include <stdio.h>

void merge(int arr1[], int arr2[], int n, int m) {
    for (int i = m - 1; i >= 0; i--) {
        int last = arr1[n - 1];
        int j = n - 2;

        while (j >= 0 && arr1[j] > arr2[i]) {
            arr1[j + 1] = arr1[j];
            j--;
        }

        if (j != n - 2 || last > arr2[i]) {
            arr1[j + 1] = arr2[i];
            arr2[i] = last;
        }
    }
}

int main() {
    int arr1[] = {1, 5, 9, 10, 15, 20};
    int arr2[] = {2, 3, 8, 13};
    int n = 6, m = 4;

    merge(arr1, arr2, n, m);

    for (int i = 0; i < n; i++) printf("%d ", arr1[i]);
    for (int i = 0; i < m; i++) printf("%d ", arr2[i]);

    return 0;
}