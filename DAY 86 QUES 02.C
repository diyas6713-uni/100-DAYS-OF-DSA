#include <stdio.h>

int isAlphabet(char c){
    return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
}

int main(){
    printf("%d", isAlphabet('Z'));
    return 0;
}