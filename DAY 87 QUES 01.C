#include <stdio.h>

void toggleCase(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
}

int main(){
    char str[]="Hello";
    toggleCase(str);
    printf("%s", str);
    return 0;
}