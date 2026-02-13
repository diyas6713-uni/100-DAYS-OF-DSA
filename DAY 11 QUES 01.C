#include <stdio.h>

int trap(int height[], int n) {
    int water = 0;

    for(int i = 1; i < n - 1; i++) {
        int left = height[i], right = height[i];

        for(int j = 0; j < i; j++)
            if(height[j] > left) left = height[j];

        for(int j = i + 1; j < n; j++)
            if(height[j] > right) right = height[j];

        water += (left < right ? left : right) - height[i];
    }

    return water;
}

int main() {
    int height[] = {3,0,0,2,0,4};
    int n = sizeof(height)/sizeof(height[0]);
    printf("%d", trap(height, n));
    return 0;
}