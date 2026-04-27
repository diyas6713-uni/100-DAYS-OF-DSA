s#include <stdio.h>

void reverseWords(char str[]){
    int i=0,start=0;

    while(1){
        if(str[i]==' ' || str[i]=='\0'){
            int end=i-1;
            while(start<end){
                char t=str[start];
                str[start]=str[end];
                str[end]=t;
                start++; end--;
            }
            start=i+1;
        }
        if(str[i]=='\0') break;
        i++;
    }
}

int main(){
    char str[]="hello world";
    reverseWords(str);
    printf("%s", str);
    return 0;
}