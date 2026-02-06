#include <stdio.h>

void mergeIntervals(int arr[][2], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] > arr[j][0]) {
                int t1 = arr[i][0], t2 = arr[i][1];
                arr[i][0] = arr[j][0];
                arr[i][1] = arr[j][1];
                arr[j][0] = t1;
                arr[j][1] = t2;
            }
        }
    }

    int index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[index][1] >= arr[i][0]) {
            if (arr[index][1] < arr[i][1])
                arr[index][1] = arr[i][1];
        } else {
            index++;
            arr[index][0] = arr[i][0];
            arr[index][1] = arr[i][1];
        }
    }

    for (int i = 0; i <= index; i++)
        printf("[%d,%d] ", arr[i][0], arr[i][1]);
}

int main() {
    int arr[][2] = {{1,3},{2,4},{6,8},{9,10}};
    int n = 4;
    mergeIntervals(arr, n);
    return 0;
}