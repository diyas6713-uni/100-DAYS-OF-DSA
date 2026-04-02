#include <stdio.h>

void fibSeries(int n) {
    int a=0,b=1,c;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}

int main() {
    fibSeries(8);
    return 0;
}