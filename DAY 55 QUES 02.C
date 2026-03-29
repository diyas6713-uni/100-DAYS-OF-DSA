#include <stdio.h>

int binaryToDecimal(int n) {
    int base = 1, dec = 0;
    while(n) {
        int d = n % 10;
        dec += d * base;
        base *= 2;
        n /= 10;
    }
    return dec;
}

int main() {
    printf("%d", binaryToDecimal(1011));
    return 0;
}