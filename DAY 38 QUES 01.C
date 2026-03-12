#include <stdio.h>

int length(char str[]) {
    int len = 0;
    while(str[len] != '\0')
        len++;
    return len;
}

int main() {
    char str[] = "hello";
    printf("%d", length(str));
    return 0;
}