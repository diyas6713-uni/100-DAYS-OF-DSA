#include <stdio.h>

int nextGap(int gap) {
    if (gap <= 1) return 0;
    return (gap / 2) + (gap % 2);
}

void merge(int arr1[], int arr2[], int n, int m) {
    int gap = nextGap(n + m);

    while (gap > 0) {
        int i, j;

        for (i = 0; i + gap < n; i++) {
            if (arr1[i] > arr1[i + gap]) {
                int temp = arr1[i];
                arr1[i] = arr1[i + gap];
                arr1[i + gap] = temp;
            }
        }

        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++) {
            if (arr1[i] > arr2[j]) {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
        }

        if (j < m) {
            for (j = 0; j + gap < m; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    int temp = arr2[j];
                    arr2[j] = arr2[j + gap];
                    arr2[j + gap] = temp;
                }
            }
        }

        gap = nextGap(gap);
    }
}

int main() {
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = 5, m = 3;

    merge(arr1, arr2, n, m);

    for(int i=0;i<n;i++) printf("%d ", arr1[i]);
    for(int i=0;i<m;i++) printf("%d ", arr2[i]);

    return 0;
}