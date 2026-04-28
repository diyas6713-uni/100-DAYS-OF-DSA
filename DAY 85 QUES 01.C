#include <stdio.h>

int isUpper(char c){
    return (c>='A' && c<='Z');
}

int main(){
    printf("%d", isUpper('A'));
    return 0;
}