#include <stdio.h>

int maxProfit(int price[], int n) {
    int profit = 0;
    for(int i = 1; i < n; i++) {
        if(price[i] > price[i-1])
            profit += price[i] - price[i-1];
    }
    return profit;
}

int main() {
    int price[] = {7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(price[0]);
    printf("%d", maxProfit(price, n));
    return 0;
}