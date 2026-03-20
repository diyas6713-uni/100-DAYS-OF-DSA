#include <stdio.h>

int powerFast(int x, int y) {
    if(y == 0) return 1;
    int half = powerFast(x, y/2);
    if(y % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main() {
    printf("%d", powerFast(2, 5));
    return 0;
}