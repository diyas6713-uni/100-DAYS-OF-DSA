#include <stdio.h>

int nCr(int n, int r) {
    int fact(int);
    return fact(n) / (fact(r) * fact(n-r));
}

int fact(int n) {
    if(n <= 1) return 1;
    return n * fact(n-1);
}

int main() {
    printf("%d", nCr(5,2));
    return 0;
}