s#include <stdio.h>

int primeCheck(int n) {
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}

int main() {
    printf("%d", primeCheck(17));
    return 0;
}