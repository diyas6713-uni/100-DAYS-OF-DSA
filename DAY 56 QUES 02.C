#include <stdio.h>

int powerRec(int x, int y) {
    if(y == 0) return 1;
    return x * powerRec(x, y-1);
}

int main() {
    printf("%d", powerRec(2,3));
    return 0;
}