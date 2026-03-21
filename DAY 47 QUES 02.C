#include <stdio.h>

int lcm(int a, int b) {
    int gcd(int, int);
    return (a * b) / gcd(a, b);
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    printf("%d", lcm(4, 6));
    return 0;
}