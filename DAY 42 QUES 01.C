#include <stdio.h>

void countFreq(char str[]) {
    int freq[256] = {0};
    for(int i = 0; str[i]; i++)
        freq[str[i]]++;

    for(int i = 0; i < 256; i++)
        if(freq[i])
            printf("%c:%d ", i, freq[i]);
}

int main() {
    char str[] = "hello";
    countFreq(str);
    return 0;
}