#include <stdio.h>

int isPalindrome(char str[]) {
    int i = 0, j = 0;
    while(str[j] != '\0') j++;
    j--;

    while(i < j) {
        if(str[i] != str[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char str[] = "madam";
    printf("%d", isPalindrome(str));
    return 0;
}