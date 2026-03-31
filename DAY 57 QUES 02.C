#include <stdio.h>

int lcmIter(int a, int b) {
    int gcdIter(int,int);
    return (a*b)/gcdIter(a,b);
}

int gcdIter(int a, int b) {
    while(b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    printf("%d", lcmIter(12,18));
    return 0;
}