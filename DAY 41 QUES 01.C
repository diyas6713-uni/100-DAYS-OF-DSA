#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int n = strlen(str);

    for(int i = 0; i < n/2; i++) {
        char t = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = t;
    }

    int start = 0;
    for(int i = 0; i <= n; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            while(start < end) {
                char t = str[start];
                str[start] = str[end];
                str[end] = t;
                start++; end--;
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[] = "hello world";
    reverseWords(str);
    printf("%s", str);
    return 0;
}