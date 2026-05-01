#include <stdio.h>

void removeDigits(char str[]){
    int j=0;
    for(int i=0;str[i];i++){
        if(!(str[i]>='0' && str[i]<='9'))
            str[j++]=str[i];
    }
    str[j]='\0';
}

int main(){
    char str[]="a1b2c3";
    removeDigits(str);
    printf("%s", str);
    return 0;
}