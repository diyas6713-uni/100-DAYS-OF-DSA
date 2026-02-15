#include <stdio.h>

int isSubset(int a[], int b[], int n, int m) {
    for(int i = 0; i < m; i++) {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if(!found) return 0;
    }
    return 1;
}

int main() {
    int a[] = {11, 1, 13, 21, 3, 7};
    int b[] = {11, 3, 7, 1};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    printf("%d", isSubset(a, b, n, m));
    return 0;
}