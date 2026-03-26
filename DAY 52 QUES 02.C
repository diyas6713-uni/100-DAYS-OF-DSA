#include <stdio.h>

int sumNatural(int n) {
    return n*(n+1)/2;
}

int main() {
    printf("%d", sumNatural(10));
    return 0;
}