#include <stdio.h>

int countConsonants(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        char c=str[i];
        if((c>='a'&&c<='z'||c>='A'&&c<='Z') &&
           !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
             c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            count++;
    }
    return count;
}

int main(){
    char str[]="Hello World";
    printf("%d", countConsonants(str));
    return 0;
}