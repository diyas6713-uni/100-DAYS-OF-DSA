#include <stdio.h>

void toUpper(char str[]) {
    for(int i = 0; str[i]; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main() {
    char str[] = "hello";
    toUpper(str);
    printf("%s", str);
    return 0;
}