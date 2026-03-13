#include <stdio.h>

int compare(char a[], char b[]) {
    int i = 0;

    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i])
            return 0;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    char a[] = "test";
    char b[] = "test";
    printf("%d", compare(a, b));
    return 0;
}