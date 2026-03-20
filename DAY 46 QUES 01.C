#include <stdio.h>

int power(int x, int y) {
    int res = 1;
    while(y--) res *= x;
    return res;
}

int main() {
    printf("%d", power(2, 5));
    return 0;
}