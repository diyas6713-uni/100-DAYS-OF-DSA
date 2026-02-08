#include <stdio.h>

void commonElements(int a[], int b[], int c[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2 && k < n3) {
        if(a[i] == b[j] && b[j] == c[k]) {
            printf("%d ", a[i]);
            i++; j++; k++;
        }
        else if(a[i] < b[j])
            i++;
        else if(b[j] < c[k])
            j++;
        else
            k++;
    }
}

int main() {
    int a[] = {1, 5, 10, 20, 40, 80};
    int b[] = {6, 7, 20, 80, 100};
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120};

    commonElements(a, b, c, 6, 5, 8);
    return 0;
}