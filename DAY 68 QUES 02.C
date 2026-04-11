#include <stdio.h>

int productDigits(int n){
    int prod=1;
    while(n){
        prod*=n%10;
        n/=10;
    }
    return prod;
}

int main(){
    printf("%d", productDigits(123));
    return 0;
}