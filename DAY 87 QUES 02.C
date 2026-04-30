#include <stdio.h>

int countDigitsStr(char str[]){
    int count=0;
    for(int i=0;str[i];i++)
        if(str[i]>='0' && str[i]<='9')
            count++;
    return count;
}

int main(){
    char str[]="abc123";
    printf("%d", countDigitsStr(str));
    return 0;
}