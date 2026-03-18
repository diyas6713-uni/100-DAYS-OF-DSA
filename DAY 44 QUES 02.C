#include <stdio.h>

void toLower(char str[]) {
    for(int i = 0; str[i]; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

int main() {
    char str[] = "HELLO";
    toLower(str);
    printf("%s", str);
    return 0;
}