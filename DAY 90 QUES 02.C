#include <stdio.h>

int countSpaces(char str[]){
    int count=0;
    for(int i=0;str[i];i++)
        if(str[i]==' ')
            count++;
    return count;
}

int main(){
    char str[]="hello world from c";
    printf("%d", countSpaces(str));
    return 0;
}