#include <stdio.h>

void reverseString(char str[]) {
    int i = 0, j = 0;
    while(str[j] != '\0') j++;
    j--;

    while(i < j) {
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++; j--;
    }
}

int main() {
    char str[] = "hello";
    reverseString(str);
    printf("%s", str);
    return 0;
}