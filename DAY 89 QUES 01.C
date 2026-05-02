#include <stdio.h>

int sumDigitsStr(char str[]){
    int sum=0;
    for(int i=0;str[i];i++)
        if(str[i]>='0' && str[i]<='9')
            sum+=str[i]-'0';
    return sum;
}

int main(){
    char str[]="a1b2c3";
    printf("%d", sumDigitsStr(str));
    return 0;
}