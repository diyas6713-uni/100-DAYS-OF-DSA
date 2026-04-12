#include <stdio.h>

int reverseNum(int n){
    int rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}

int main(){
    printf("%d", reverseNum(456));
    return 0;
}