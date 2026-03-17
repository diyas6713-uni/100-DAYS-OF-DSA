#include <stdio.h>

void removeSpaces(char str[]) {
    int j = 0;
    for(int i = 0; str[i]; i++) {
        if(str[i] != ' ')
            str[j++] = str[i];
    }
    str[j] = '\0';
}

int main() {
    char str[] = "a b c d";
    removeSpaces(str);
    printf("%s", str);
    return 0;
}