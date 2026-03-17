#include <stdio.h>

int isSubsequence(char a[], char b[]) {
    int i = 0, j = 0;

    while(a[i] && b[j]) {
        if(a[i] == b[j])
            i++;
        j++;
    }
    return !a[i];
}

int main() {
    char a[] = "abc";
    char b[] = "ahbgdc";
    printf("%d", isSubsequence(a, b));
    return 0;
}