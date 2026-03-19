#include <stdio.h>

int strToInt(char str[]) {
    int num = 0, i = 0;

    while(str[i]) {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return num;
}

int main() {
    char str[] = "1234";
    printf("%d", strToInt(str));
    return 0;
}