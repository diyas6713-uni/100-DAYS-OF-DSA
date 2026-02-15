#include <stdio.h>

void unionArray(int a[], int b[], int n, int m) {
    int visited[1000] = {0};

    for(int i = 0; i < n; i++) {
        if(!visited[a[i]]) {
            printf("%d ", a[i]);
            visited[a[i]] = 1;
        }
    }

    for(int i = 0; i < m; i++) {
        if(!visited[b[i]]) {
            printf("%d ", b[i]);
            visited[b[i]] = 1;
        }
    }
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    unionArray(a, b, 3, 3);
    return 0;
}