#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

const char TAB = '\t';
char Look;

void GetChar() {
    scanf(" %c", &Look); 
}

void error(const char *message) {
    printf("Error: %s\n", message);
}

char getName() {
    char value = '\0';
    if (isalpha(Look)) {
        value = toupper(Look);  
    } else {
        error("Expected a letter");
    }
    GetChar();  
    return value;
}

int getNum(){
    int value;
    if(isdigit(Look)){
        value = Look-'0';
    }
    else{
        error("Expected a number");
    }
    GetChar();
    return value;
}

void init(){
    GetChar();
}

void MainProgram(){
    init();
}

void match(char x){
    if(Look == x) GetChar();
    else{
        error("Expected " + x);
    }
}