#include <stdio.h>

int isPalindromeNum(int n) {
    int rev = 0, temp = n;
    while(temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    printf("%d", isPalindromeNum(121));
    return 0;
}