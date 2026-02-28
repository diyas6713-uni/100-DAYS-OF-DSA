#include <stdio.h>

int kthElement(int a[], int b[], int n, int m, int k) {
    int i = 0, j = 0, count = 0;

    while(i < n && j < m) {
        if(a[i] < b[j]) {
            count++;
            if(count == k) return a[i];
            i++;
        } else {
            count++;
            if(count == k) return b[j];
            j++;
        }
    }

    while(i < n) {
        count++;
        if(count == k) return a[i];
        i++;
    }

    while(j < m) {
        count++;
        if(count == k) return b[j];
        j++;
    }

    return -1;
}

int main() {
    int a[] = {2,3,6,7,9};
    int b[] = {1,4,8,10};
    int n = 5, m = 4, k = 5;
    printf("%d", kthElement(a, b, n, m, k));
    return 0;
}