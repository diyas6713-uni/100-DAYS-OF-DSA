#include <stdio.h>

void intToStr(int num, char str[]) {
    int i = 0;

    while(num > 0) {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }
    str[i] = '\0';

    for(int j = 0; j < i/2; j++) {
        char t = str[j];
        str[j] = str[i-j-1];
        str[i-j-1] = t;
    }
}

int main() {
    int num = 1234;
    char str[20];
    intToStr(num, str);
    printf("%s", str);
    return 0;
}