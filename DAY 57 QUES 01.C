#include <stdio.h>

int gcdIter(int a, int b) {
    while(b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    printf("%d", gcdIter(12,18));
    return 0;
}