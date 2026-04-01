#include <stdio.h>

void primes(int n) {
    for(int i=2;i<=n;i++){
        int flag=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){ flag=0; break;}
        }
        if(flag) printf("%d ",i);
    }
}

int main() {
    primes(30);
    return 0;
}