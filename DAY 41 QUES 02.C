#include <stdio.h>

int isRotation(char a[], char b[]) {
    char temp[200];
    int i = 0, j = 0;

    while(a[i]) {
        temp[i] = a[i];
        i++;
    }
    while(a[j]) {
        temp[i+j] = a[j];
        j++;
    }
    temp[i+j] = '\0';

    i = 0;
    while(temp[i]) {
        int k = 0;
        while(b[k] && temp[i+k] == b[k])
            k++;
        if(!b[k])
            return 1;
        i++;
    }
    return 0;
}

int main() {
    char a[] = "abcd";
    char b[] = "cdab";
    printf("%d", isRotation(a, b));
    return 0;
}