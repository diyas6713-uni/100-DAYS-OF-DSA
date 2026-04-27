#include <stdio.h>

int countWords(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if((i==0 && str[i]!=' ') || (str[i]==' ' && str[i+1]!=' '))
            count++;
    }
    return count;
}

int main(){
    char str[]="Hello world from C";
    printf("%d", countWords(str));
    return 0;
}