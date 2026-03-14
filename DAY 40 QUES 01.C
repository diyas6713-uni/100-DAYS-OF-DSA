#include <stdio.h>

int isAnagram(char a[], char b[]) {
    int count[256] = {0};
    int i = 0;

    while(a[i]) {
        count[a[i]]++;
        i++;
    }

    i = 0;
    while(b[i]) {
        count[b[i]]--;
        i++;
    }

    for(i = 0; i < 256; i++)
        if(count[i] != 0)
            return 0;

    return 1;
}

int main() {
    char a[] = "listen";
    char b[] = "silent";
    printf("%d", isAnagram(a, b));
    return 0;
}