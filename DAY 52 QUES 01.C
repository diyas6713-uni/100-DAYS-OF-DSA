#include <stdio.h>

int countDigits(int n) {
    int count = 0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    printf("%d", countDigits(12345));
    return 0;
}