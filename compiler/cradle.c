#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

const char TAB = '\t';
char Look;

void getChar() {
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
    getChar();  
    return value;
}

int main() {
    getChar();               
    char name = getName();   
   
    return 0;
}
