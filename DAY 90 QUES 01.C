#include <stdio.h>

int minDigitStr(char str[]){
    int min=9;
    for(int i=0;str[i];i++)
        if(str[i]>='0' && str[i]<='9' && str[i]-'0'<min)
            min=str[i]-'0';
    return min;
}

int main(){
    char str[]="a5b2c8";
    printf("%d", minDigitStr(str));
    return 0;
}