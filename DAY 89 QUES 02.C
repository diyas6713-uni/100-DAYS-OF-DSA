#include <stdio.h>

int maxDigitStr(char str[]){
    int max=0;
    for(int i=0;str[i];i++)
        if(str[i]>='0' && str[i]<='9' && str[i]-'0'>max)
            max=str[i]-'0';
    return max;
}

int main(){
    char str[]="a1b9c3";
    printf("%d", maxDigitStr(str));
    return 0;
}