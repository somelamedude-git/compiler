#include <stdio.h>

char Look;

void getChar(){
    Look = getchar();
}

int main(){
    getChar();

    while(Look!=EOF && Look!='\n'){
        putchar(Look);
        getChar();
    }

    return 0;
}