#include <stdio.h>

int power(int x,int y){
    int res=1;
    for(int i=0;i<y;i++) res*=x;
    return res;
}

int main(){
    printf("%d", power(2,3));
    return 0;
}