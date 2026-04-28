#include <stdio.h>

int isLower(char c){
    return (c>='a' && c<='z');
}

int main(){
    printf("%d", isLower('a'));
    return 0;
}