#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> //Ill use this directly for isdigit

int main(){
    const char TAB = '\t';
    char Look;

    void getChar(){
        scanf(" %c", &Look); //SKips white space, we need that for tokens
    }

    char getName(){
        char value='\0';
        if(isalpha(Look)){
            value = toupper(Look);
        }
        else{
            //I will b writing an error function for this
        }
        getChar();
        return value;
    }
}