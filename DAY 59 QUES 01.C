#include <stdio.h>

int fibRec(int n) {
    if(n<=1) return n;
    return fibRec(n-1)+fibRec(n-2);
}

int main() {
    printf("%d", fibRec(7));
    return 0;
}