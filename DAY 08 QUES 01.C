#include <stdio.h>

int maxProfit(int price[], int n) {
    int min = price[0], profit = 0;

    for(int i = 1; i < n; i++) {
        if(price[i] < min)
            min = price[i];
        else if(price[i] - min > profit)
            profit = price[i] - min;
    }
    return profit;
}

int main() {
    int price[] = {7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(price[0]);
    printf("%d", maxProfit(price, n));
    return 0;
}