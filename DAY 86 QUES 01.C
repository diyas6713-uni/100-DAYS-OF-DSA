#include <stdio.h>

int isDigit(char c){
    return (c>='0' && c<='9');
}

int main(){
    printf("%d", isDigit('5'));
    return 0;
}