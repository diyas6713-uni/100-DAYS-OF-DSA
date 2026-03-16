#include <stdio.h>

int firstNonRepeat(char str[]) {
    int freq[256] = {0};

    for(int i = 0; str[i]; i++)
        freq[str[i]]++;

    for(int i = 0; str[i]; i++)
        if(freq[str[i]] == 1)
            return str[i];

    return -1;
}

int main() {
    char str[] = "swiss";
    printf("%c", firstNonRepeat(str));
    return 0;
}