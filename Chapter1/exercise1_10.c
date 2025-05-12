/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t,
each backspace by \b, and each backslash by \\.  This makes tabs
and backspaces visible in an unambiguous way. */

//backspaces are working?  I'll need to come back to this.

#include <stdio.h>

int main(){

    int currentChar;

    //read current character
    while((currentChar = getchar()) != EOF){
        if(currentChar == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if(currentChar == '\b'){
            putchar('\\');
            putchar('b');
        }
        else if(currentChar == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else{
            putchar(currentChar);
        }
    }
}