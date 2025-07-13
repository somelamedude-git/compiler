#include <stdio.h>
#include <string.h>

char Look;

void getChar(){
    Look = getchar();
}


void appendChar(char* s, char c){
    int length = strlen(s);
    s[length] = c;
    s[length+1] = '\0';
}

int main(){
    getChar();
    char str[100]="";

    while(Look!=EOF && Look!='\n'){
        appendChar(str, Look);
        getChar();
    }

    getChar();

    char test_str[100]="";
    
    while(Look!=EOF && Look !='\n'){
        appendChar(test_str, Look);
        getChar();
    }

    if(strcmp(test_str, str)){
        printf("%s not specified", test_str);
    }
}