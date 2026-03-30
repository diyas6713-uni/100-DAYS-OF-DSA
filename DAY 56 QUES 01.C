#include <stdio.h>

int decimalToBinary(int n) {
    int bin = 0, base = 1;
    while(n) {
        int r = n % 2;
        bin += r * base;
        base *= 10;
        n /= 2;
    }
    return bin;
}

int main() {
    printf("%d", decimalToBinary(10));
    return 0;
}