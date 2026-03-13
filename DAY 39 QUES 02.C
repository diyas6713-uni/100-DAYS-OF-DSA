#include <stdio.h>

void copy(char a[], char b[]) {
    int i = 0;
    while(b[i] != '\0') {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
}

int main() {
    char b[] = "copy me";
    char a[100];
    copy(a, b);
    printf("%s", a);
    return 0;
}