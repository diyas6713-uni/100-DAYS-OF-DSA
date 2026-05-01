#include <stdio.h>

void removeVowels(char str[]){
    int j=0;
    for(int i=0;str[i];i++){
        char c=str[i];
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
             c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
            str[j++]=str[i];
        }
    }
    str[j]='\0';
}

int main(){
    char str[]="hello";
    removeVowels(str);
    printf("%s", str);
    return 0;
}