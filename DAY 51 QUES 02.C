#include <stdio.h>

int armstrong(int n) {
    int sum = 0, temp = n;
    while(temp) {
        int d = temp % 10;
        sum += d*d*d;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    printf("%d", armstrong(153));
    return 0;
}