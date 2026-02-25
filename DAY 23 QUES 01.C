#include <stdio.h>

int squareRoot(int x) {
    int l = 0, r = x, ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(mid * mid <= x) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x = 17;
    printf("%d", squareRoot(x));
    return 0;
}