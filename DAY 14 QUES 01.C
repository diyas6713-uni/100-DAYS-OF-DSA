#include <stdio.h>

void intersection(int a[], int b[], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
}

int main() {
    int a[] = {1, 2, 2, 3};
    int b[] = {2, 2, 4};
    intersection(a, b, 4, 3);
    return 0;
}