#include <stdio.h>

void removeDuplicates(char str[]) {
    int visited[256] = {0};
    int j = 0;

    for(int i = 0; str[i]; i++) {
        if(!visited[str[i]]) {
            str[j++] = str[i];
            visited[str[i]] = 1;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("%s", str);
    return 0;
}